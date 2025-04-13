#include <stdio.h>

int compare_strings(const char*, const char*);
int main()
{
	char s1[] = "Hello";
	char s2[] = "hello";
	char s3[] = "Hello";

	printf("The status of compare s1 and s2 is %d\n", compare_strings(s1, s2));
	printf("The status of compare s1 and s3 is %d\n", compare_strings(s1, s3));
	return 0;
}
