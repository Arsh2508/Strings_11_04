#include <stdio.h>

int string_length(const char*);

void reverse_string(char *str){
	int length = string_length(str);
	for(int i = 0; i < length / 2; ++i){
		int n = length - i - 1;
		str[i] ^= str[n];
		str[n] ^= str[i];
		str[i] ^= str[n];
	}
}
