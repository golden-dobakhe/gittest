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

int main() {

	char asd[3] = "Asd";
	char *res = strev(asd);
	printf("%s", res);

	free(res);
}
