/*
 * main.c
 *
 *  Created on: 2020年4月2日
 *      Author: Zuokp
 */
#include <stdio.h>
#include <string.h>

const int MAX_LENGTH = 128;
/*反转字符串中的单词 III*/
void reverse(char *s, int left, int right);
char* reverseWords(char *s);

int main(int argc, char *argv[])
{
	int nLength;
	char szStr[MAX_LENGTH];
	memset(szStr, '\0', MAX_LENGTH);

	printf("Please input string:");
	fgets(szStr, MAX_LENGTH, stdin);
	nLength = strlen(szStr) - 1;
	if (szStr[nLength] == '\n')
		szStr[nLength] = '\0';
	reverseWords(szStr);

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

char* reverseWords(char *s)
{
	if (NULL == s)
		return s;
	const int nLength = strlen(s);
	int i = 0, j;

	while (i < nLength)
	{
		if (s[i] != ' ')
		{
			j = i + 1;
			while ((s[j] != ' ') && j < nLength)
				++j;
			if (j - i != 1)
			{
				reverse(s, i, j);
				i = j + 1;
				continue;
			}
		}
		++i;
	}
	return s;
}

