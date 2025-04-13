#include <stdio.h>

int find_character(const char*, char);
int main()
{
	char str[] = "abcdefgh";
	printf("%d\n", find_character(str, 'c'));
	return 0;
}
