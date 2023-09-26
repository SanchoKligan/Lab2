/* main.c */
#include <stdio.h>
#include "askname.h"

int main(int argc, char** argv)
{
	char first[255], last[255];

	askname(first, last);

	printf("Hello, %s %s!\n", first, last);
	printf("Hello, Slava was here in 2023");
	return 0;
}
//Added better feauture