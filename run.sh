#!/bin/bash

style="style.sh"
o_f="style_file"
chmod +x $style

./$style > $o_f
c_files_exist=false

for file in *.c; do
	if test -a "$file"; then
		c_files_exist=true
		break
	fi
done

if [ $c_files_exist == true ]; then
	for test_files in test/*.c; do
		if gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format ./*.c "$test_files" -o "${test_files%.*}.out"; then
			./"${test_files%.*}.out"
			rm "${test_files%.*}.out"
		fi
	done
fi

if test -a $o_f; then
	rm $o_f
fi
