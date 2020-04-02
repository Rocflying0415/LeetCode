/*
 * main.c
 *
 *  Created on: 2020年4月1日
 *      Author: Zuokp
 */
#include <stdio.h>
#include <string.h>

/*反转字符串 II*/
void reverse(char *s, int left, int right);
char* reverseStr(char *s, int k);

int main(int argc, char *argv[])
{
	int k;
	char szStr[128] =
	{ '\0' };
	printf("Please input string:");
	scanf("%s", szStr);
	printf("Please input k:");
	scanf("%d", &k);
	reverseStr(szStr, k);
	printf("reverse:%s\n", szStr);
	return 0;
}

void reverse(char *s, int left, int right)
{
	if (NULL == s)
		return;
	char cElem;
	while (left < --right)
	{
		cElem = s[right];
		s[right] = s[left];
		s[left++] = cElem;
	}
}

char* reverseStr(char *s, int k)
{
	if (NULL == s || 1 >= k || k > 10000)
		return s;
	const int nLength = strlen(s);
	const int nDatum = k << 1;
	int i;

	for (i = 0; i < nLength; i += nDatum)
	{
		if ((i + k) <= nLength)
			reverse(s, i, i + k);
		else
			reverse(s, i, nLength);
	}
	return s;
}

