#include <stdio.h>

int string_length(const char*);
int main()
{
	char Str[] = "HelloWorld";
	printf("%d\n", string_length(Str));
	return 0;
}
