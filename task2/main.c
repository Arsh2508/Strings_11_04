#include <stdio.h>

void reverse_string(char *);
int main()
{
	char S[] = "Hello";
	printf("The reversed of %s is ", S);
	reverse_string(S);
	printf("%s\n", S);
	return 0;
}
