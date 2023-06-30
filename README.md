# Printf Project

This is a group project that is focused on implementing a custom printf project. The project is written using `C programming language`. The project aims at recreating some of the functionalities of printf found in the `stdio.h` library in C.

This implementation is super slow.

## Use

If you want to test the program, you can use the files in the test folder.
This files are for testing purposes and should not be considered proof of work.

If you have an environment that can run bash then you can use the `run.sh` file to run the program.
This compiles all the code in the root folder and one file at a time in the tests folder.
This was developed to help in development stage.

You can use the `style.sh` file to quickly confirm that your files conform to both `GNU89` and `Betty` coding styles.

The manual on how to use the printf can be found in the `printf.3` and can be installed into the system by running `sudo cp printf.3 /usr/local/man/man3`.

## Compilation

You can compile the project manually or using the `run.sh` script.
Make sure that the file(s) containing `main` function is in the test directory or you can modify the code to whichever directory you want.

To run manually use:  
`gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c`  
Make sure that the only one file that contains the `main` function is present in the root.

## Manual

The manual on how to and what is available can be found in the man pages

## Authors

This project was written by:

- [Hafsa Muchoki](https://github.com/Haffie023)
- [Gekko Wrld](https://github.com/gekkowrld)

## Copyright

This software is released to the public free of charge under the [GNU General Public License, version 2](https://www.gnu.org/licenses/old-licenses/gpl-2.0.html#SEC1)
