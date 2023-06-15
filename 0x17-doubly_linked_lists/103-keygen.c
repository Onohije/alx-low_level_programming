#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the maximum number
 *
 * @usrn: username
 * @len: length of username
 * Return: the maximum number
 */

int f4(char *usrn, int len)
{
	int chr;
	int cur_chr;
	unsigned int randNum;

	chr = *usrn;
	cur_chr = 0;

	while (cur_chr < len)
	{
		if (chr < usrn[cur_chr])
			chr = usrn[cur_chr];
		cur_chr += 1;
	}

	srand(chr ^ 14);
	randNum = rand();

	return (randNum & 63);
}

/**
 * f5 - multiplies each char of username
 *
 * @usrn: username
 * @len: length of username
 * Return: multiplied char
 */
int f5(char *usrn, int len)
{
	int chr;
	int cur_chr;

	chr = cur_chr = 0;

	while (cur_chr < len)
	{
		chr = chr + usrn[cur_chr] * usrn[cur_chr];
		cur_chr += 1;
	}

	return (((unsigned int)chr ^ 239) & 63);
}

/**
 * f6 - generates a random char
 *
 * @usrn: username
 * Return: a random char
 */
int f6(char *usrn)
{
	int chr;
	int cur_chr;

	chr = cur_chr = 0;

	while (cur_chr < *usrn)
	{
		chr = rand();
		cur_chr += 1;
	}

	return (((unsigned int)chr ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, chr, cur_chr;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	chr = cur_chr = 0;
	while (cur_chr < len)
	{
		chr = chr + argv[1][cur_chr];
		cur_chr = cur_chr + 1;
	}
	keygen[1] = ((char *)alph)[(chr ^ 79) & 63];
	/* ----------- f3 ----------- */
	chr = 1;
	cur_chr = 0;
	while (cur_chr < len)
	{
		chr = argv[1][cur_chr] * chr;
		cur_chr = cur_chr + 1;
	}
	keygen[2] = ((char *)alph)[(chr ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (chr = 0; keygen[chr]; chr++)
		printf("%c", keygen[chr]);
	return (0);
}
