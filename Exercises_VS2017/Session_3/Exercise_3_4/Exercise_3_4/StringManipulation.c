#include<stdio.h>
#include "my_string_func.h"
#define MAX_LENGTH 1000
int main(){
	char line[MAX_LENGTH];
	char upper[MAX_LENGTH];
	int line_length;
	/* Use a while loop to read input lines as long as there are any.For each input line,print the length of the line as well asthe upper case version of the lineNOTE You are NOT allowed to use the standard toupper(...)function in string.h*/
	
	line_length = read_line(line);
	
	while( line_length > 0) {

		my_to_upper(line, upper);

		printf("Length: %d\t%s\n", line_length, upper);
		line_length = read_line(line);
	} 
	return 0;
}