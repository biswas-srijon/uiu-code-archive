//String reverse without strrev()
#include<stdio.h>
int main()
{
    char str1[50];
    gets(str1);
    char str2[50];
    int i=0,len=0,j=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(i=len-1;i>=0;i--)
    {
      str2[j] = str1[i];
      j++;

    }
    str2[j]='\0';

    printf("After reverse : %s ", str2);
    return 0;
}
