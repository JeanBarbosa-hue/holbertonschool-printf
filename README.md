#holbertonschool-printf

In this repository we made a custom function that works like the normal printf function excpet our custom made function only works with the following format specifiers: (%c) characters (%s) strings (%%) percentage sign (%d) digit (%i) integer

man_3_printf - custom made man page for our custom printf

main.c - this file contains all the examples that help us see the output of what our custom printf is printing

main.h - this file is our header file where we store all our prototype functions the file is include guarded

print_char.c - function created for when we want to print a single characters also has the ability to print the percentage sign function willactivate when we use %c

print_string.c - function created to print strings with null byte termination this function will activate when our custom printf is used with%s

print_integer.c - function created for when we want to print integers or digits it is able to print negative numbers and arrays that work like strings function will activate when %i or %d is used

my_printf.c - this file contains the main code that makes the custom printf work it uses all the custom functions we created

In collaboration with: Eduardo Figueroa Adrian Morales Luis Ayala Xai Betancourt Giovanni Barreto Jonathan Perez

Creators: Jean Barbosa Jose Rivera
