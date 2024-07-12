#include<stdio.h>

int main()
{
    float c,f;
    printf("Enter fahrenheit temp : ");
    scanf("%f", &f);

    c = (f - 32) / 1.8;
    printf("Tempeature in Centigrade : %.2f", c);
    return 0;
}
