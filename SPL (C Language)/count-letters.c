#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100];
    gets(str);
//strlwr(str);
    for(char i='a'; i<='z'; i++)
    {
        int count=0,coun=0;
        for(int j=0; str[j]!='\0'; j++)
        {
            if(i==str[j])
            {
                count++;
            }
            if(i-32==str[j])
            {
                coun++;
            }
        }
        if(count!=0)
        {
            printf("%c : %d\n",i,count);
        }
        if(coun!=0)
        {
            printf("%c : %d\n",i-32,coun);
        }

    }
    return 0;
}
