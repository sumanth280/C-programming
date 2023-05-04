#include <stdio.h>
#define NO 256

int areAnagram(char* str1, char* str2)
{
	int count1[NO] = {0};
	int count2[NO] = {0};
	int i;
	for (i = 0; str1[i] && str2[i]; i++)
	{
		count1[str1[i]]++;
		count2[str2[i]]++;
	}

	if (str1[i] || str2[i])
		return 0;

	for (i = 0; i < NO; i++)
		if (count1[i] != count2[i])
			return 0;

	return 1;
}

int main()
{
	char str1[20];
	char str2[20];
	printf("Input the first string :");
	scanf("%s",&str1);
	printf("Input the second string :");
	scanf("%s",&str2);
	if (areAnagram(str1, str2))
		printf("The two strings are anagram of each other");
	else
		printf("The two strings are not anagram of each "
			"other");
	return 0;
}


