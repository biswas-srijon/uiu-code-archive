#include<stdio.h>
int main()
{
    int sum=0, num,temp, r;
    printf("Enter your integer: ");
    scanf("%d", &num);
    temp=num;

    while(temp!=0)
    {
        r= temp%10;
        sum= sum*10+r;
        temp=temp/10;
    }

    printf("Reversed Number: %d", sum);
}
