#!/bin/bash

if ! command -v betty > /dev/null; then
  echo "Error: betty not found. Please install betty (https://github.com/holbertonschool/Betty) to run this script."
  echo "Installing Betty..."
  git clone https://github.com/holbertonschool/Betty.git
  cd Betty || exit
  chmod +x install.sh
  ./install.sh
fi

if ! echo "" | gcc -std=gnu89 -E - > /dev/null 2>&1; then
  echo "Error: GNU89 not supported by the compiler. Please use a compiler that supports GNU89 to run this script."
  exit 1
fi

check_betty(){
	if ! betty_output=$(betty "$1" 2>&1); then
		echo "Error: $1 is not betty compatible:"
		echo "$betty_output"
		exit 1
	fi

	if ! gcc_output=$(gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -c "$1" 2>&1); then
		echo "Error: $1 is not GNU89 compliant:"
		echo "$gcc_output"
		exit 1
	fi
}

header_files_exist=false

for file in *.h; do
    if test -a "$file"; then
        header_files_exist=true
        break
    fi
done

c_files_exist=false

for file in *.c; do
	if test -a "$file"; then
		c_files_exist=true
		break
	fi
done

if [ $c_files_exist == true ] && [ $header_files_exist == true ]; then
	for file in *.h *.c; do
		check_betty "$file"
	done
elif [ $c_files_exist == true ]; then
	for file in *.c; do
		check_betty "$file"
	done
elif [ $header_files_exist == true ]; then
	for file in *.h; do
		check_betty "$file"
	done
else
	echo "Nothing to be checked for betty code"
fi

echo "All files are betty compatible and GNU89 compliant."

# Check if object files were created and delete them
for file in *.o;do
	if test -a "$file"; then
		rm "$file"
	fi
done

exit 0
