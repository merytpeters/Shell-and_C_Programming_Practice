#include <stdio.h>

int main()
{
	char x;
	int lwcase_vowel, upcase_vowel;

	printf("Enter an alphabet: ");
	scanf("%c", &x);

	lwcase_vowel = (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');

	upcase_vowel = (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U');

	if (lwcase_vowel || upcase_vowel)
		printf("%c is a vowel.\n", x);
	else
		printf("%c is a consonant.\n", x);

	return (0);
}
