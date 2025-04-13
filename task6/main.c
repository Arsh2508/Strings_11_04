#include <stdio.h>

void replace_character(char *, char, char);
int main()
{
	char old = 'o';
	char new = '0';
	char str[] = "Hello World";

	printf("Old string - %s\n", str);

	replace_character(str, old, new);
	printf("New string - %s\n", str);
	
	return 0;
}
