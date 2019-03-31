#include <stdio.h>
#pragma warning(disable : 4996)
int main() {

	FILE *fp;
	fp = open("Text.txt", "r");
	char buff[255];
	
	fscanf(fp, "%s", buff);
	printf("1: %s\n", buff);
	
	fclose(fp);
}