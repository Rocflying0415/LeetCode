/*
 * main.c
 *
 *  Created on: 2020年4月1日
 *      Author: Zuokp
 */
#include <stdio.h>
#include <string.h>

/*反转字符串*/
void reverseString(char *s, const int Length);

int main(int argc, char *argv[])
{
	char szString[] = "Welcome to shenzhen.";

	printf("origin: %s\n", szString);
	reverseString(szString, strlen(szString));
	printf("reverse: %s\n", szString);
	return 0;
}

void reverseString(char *s, const int Length)
{
	if (NULL == s ||  1 >= Length)
		return;
	char cElem;
	int i, j;
	const int nFlag = Length >> 1;

	for (i = 0; i < nFlag; ++i)
	{
		j = Length - i - 1;
		cElem = s[j];
		s[j] = s[i];
		s[i] = cElem;
	}
}




