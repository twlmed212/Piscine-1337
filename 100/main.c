#include <unistd.h>
#include <stdio.h>

int main(int ac, char **argv)
{
	
	printf("= %s", argv[1]);

	return ac;
}

/*
    Write a program that takes a string and displays the first 'a' character it
    encounters in it, followed by a newline. \n

    If there are no 'a' characters in the string, the program just writes a newline.

    If the number of parameters is not 1, the program displays 'a' followed by a newline.
*/