#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter main string: ");
    gets(str1);
    printf("Enter sub string: ");
    gets(str2);

    int str1len=strlen(str1);
    int str2len=strlen(str2);

    for(int i=0; i<str2len; i++)
    {
        str2[i]=tolower(str2[i]);
    }

    int count=0, j;
    for(int i=0; i<str1len; i++)
    {
        for(j=0; j<str2len; j++)
        {
            if(str1[i+j] != str2[j])
            {
                break;
            }
        }
        if(j==str2len)
        {
            count++;
        }

    }
        if(count>0)
        printf("Sub string matched.\n");
        else
        {
            printf("Sub string didn't match.\n");
        }
return 0;
}
