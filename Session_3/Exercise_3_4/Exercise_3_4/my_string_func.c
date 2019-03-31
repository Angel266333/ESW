#include<stdio.h>
#include"my_string_func.h"/* read_line: read a line into s, return length */

int read_line(char s[]){
	int c = 0;
	int i = 0;
	int done = 0;
	do {
		c = getchar();
		if(c == EOF || c == '\n') {
			done = 1;
		}
		else {
			s[i++] = c;
		}
	} while(!done);
	
	s[i] = '\0';
	return i;
}

    void my_to_upper(char* str_in, char* str_out){
		
		int i = 0;
		char c = str_in[i];
		while (c != '\0') {
			if (c > 96 && c < 123) {
				str_out[i] = c - 32;
			}
			else {
				str_out[i] = c;
			}
			c = str_in[++i];
		}
		str_out[i] = '\0';
	}
