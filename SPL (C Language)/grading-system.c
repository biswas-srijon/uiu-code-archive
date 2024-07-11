#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    printf("Enter your mark : ");
    scanf(" %d", &mark);

    if(mark>=90 && mark<=100){
        printf("Your grade is : A");
    }
    else if(mark>=86 && mark<=89){
        printf("Your grade is : A-");
    }
    else if(mark>=82 && mark<=85){
        printf("Your grade is : B+");
    }
    else if(mark>=78 && mark<=81){
        printf("Your grade is : B");
    }
    else if(mark>=74 && mark<=77){
        printf("Your grade is : B-");
    }
    else if(mark>=70 && mark<=73){
        printf("Your grade is : C+");
    }
    else if(mark>=66 && mark<=69){
        printf("Your grade is : C");
    }
    else if(mark>=62 && mark<=65){
        printf("Your grade is : C-");
    }
    else if(mark>=58 && mark<=61){
        printf("Your grade is : D+");
    }
    else if(mark>=55 && mark<=57){
        printf("Your grade is : D");
    }
    else if (mark<55){
        printf("Your grade is : F");
    }
else{
        printf("Not a valid mark.");
    }
    return 0;
}
