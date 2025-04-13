#include <stdio.h>

int find_character(const char *str, char c)
{
	int index = 0;
	while(*(str + index)){
		if(*(str + index) == c){
			return index;
		}
		++index;
	}
	return -1;
}
