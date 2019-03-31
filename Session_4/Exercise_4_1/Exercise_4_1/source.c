#include <stdio.h>
#include <source.h>

int my_strdiff(char* a, char* b)
{
	int i = 0;

	while (a[i] != '\0' && b[i] != '\0') {

		if (a[i] != b[i]) {

			return i;
		}
		i++;
	}
	if (a[i] != '\0' || b[i] != '\0') {
		return i;
	}

	return -1;
}

int my_strlen(char* a) {
	int i = 0;
	while (a[i] != '\0') {
		i++;
	}
	return i;
}

int my_strcopy(char* input, char* output) {
	int i = 0;
	while (*input != '\0') {
		*output = *input;
		output++;
		input++;
	}
	*output = '\0';
	return 0;
}

char* my_strdup(char* a) {

	int i = 0;

	char* newString = (char*)malloc(sizeof(a));
	while (a[i] != '\0') {
		newString[i] = a[i];
		i++;
	}
	newString[i] = '\0';
	return newString;
}
