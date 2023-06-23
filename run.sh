#!/bin/bash

style="style.sh"
o_f="style_file"
msg="All files are betty compatible and GNU89 compliant."
chmod +x $style

./$style > $o_f
rep=$(cat $o_f)
c_files_exist=false

for file in *.c; do
	if test -a "$file"; then
		c_files_exist=true
		break
	fi
done
if [[ "$rep" == "$msg" ]]; then
	if [ $c_files_exist == true ]; then
		for test_files in test/*.c; do

			if gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c "$test_files" -o "${test_files%.*}"; then
				./"${test_files%.*}"
				rm "${test_files%.*}"
			fi
		done
	fi
else
	echo -e "\nOops!\n$rep\n"
fi

rm $o_f

