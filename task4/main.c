#include <stdio.h>

void count_vowels_and_consonants(const char*, int *, int *);
int main()
{
	int vowels = 0;
	int consonants = 0;
	char Str[] = "Hello World";
	count_vowels_and_consonants(Str, &vowels, &consonants);
	printf("The count of vowels in \"%s\" is %d\n", Str, vowels);
	printf("The count of consonants in \"%s\" is %d\n", Str, consonants);
	return 0;	
}
