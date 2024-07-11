#include<stdio.h>
int checkMatch(char str[], char ch);
int main()
{
    char str[100];//="Srijon Biswas";
    //scanf("%s", str);
    fgets(str, 100, stdin);
    char ch;
    scanf(" %c", &ch);
    checkMatch(str, ch);
    return 0;
}
int checkMatch(char str[], char ch)
{
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i]==ch)
        {
            printf("Character is present.");
            return;
        }
    }
    printf("Character is not present.");
}
