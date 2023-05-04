#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int len1, len2, i, j, found=0, not_found=0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);
    for(i=0; i<len1; i++)
    {
        found = 1;
        for(j=0; j<len2; j++)
        {
            if(str1[i] == str2[j])
            {
                found = 1;
                break;
            }
        }
    if(found == 1)
    {
        printf("Strings are anagrams.\n");
    }
    else
    {
        printf("Strings are NOT anagrams.\n");
    }
    return 0;
}
}
