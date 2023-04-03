#include<stdio.h>
#include<ctype.h>

int main(void) {
	int code_table[27], i, alphabet, k1, k2, ch, encipher, j, deciphering[20];

	for (i = 0; i <= 26; i++) {
		alphabet = 'a';
		alphabet += i;
		code_table[i] = alphabet;
	}

	printf("请输入k1和k2:");
	scanf_s("%d %d", &k1, &k2);
	//y = k1x + k2

	while (getchar() != '\n');

	printf("请输入要加密的字母:");
	while ((ch = getchar()) != EOF) {
		if (ch == '\n')
			break;
		ch = tolower(ch) - 'a';
		encipher = (k1 * ch + k2) % 26;
		putchar(code_table[encipher]);
	}

	return 0;
}