#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strev(char *str) {
	int len = strlen(str);

	char *result = (char *)malloc(sizeof(char) * len);

	for (int i = 0; i < len; i++) {
		result[i] = str[len - i - 1];
	}

	return result;
}

char *tok(char *str1, char l) {
	char *end = NULL;
	end = str1;
	char * start = end;

	while (*end!= '\0' && *end != l) {
		end++;
	}

	if (*end == l) {
		*end = '\0';
		end++;
	}
	else {
		end = NULL;
	}
	return start;
}

int main() {

	char asd[3] = "Asd";
	//char *res = strev(asd);
	char *res = tok(asd, 'd');
	printf("%s", res);

	//free(res);
}
