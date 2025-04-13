#include <stdio.h>

void count_vowels_and_consonants(const char *str, int *vowels, int *consonants)
{
	while(*str){
		if((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')){
			if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u'){
				++(*vowels);
			}else{
				++(*consonants);
			}
		}
		++str;
	}
}
