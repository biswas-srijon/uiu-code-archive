#include <stdio.h>
#include <stdlib.h>

int main()
{
    int years, fam_mem;
    char category;
    float income;
    printf("Submit your category(X or Y or Z) : ");
    scanf(" %c", &category);

    if(category=='X'){
        printf("Years of work experience: ");
        scanf("%d", &years);
        printf("Number of family members: ");
        scanf("%d", &fam_mem);
        printf("Total family income per month: ");
        scanf("%f", &income);
    if(fam_mem>5){
            printf("Will Receive the Bonus.");
    }
    else{
        printf("Will Not Receive the Bonus.");
    }
    }
    else if(category == 'Y' || 'Z'){
        printf("Years of work experience: ");
        scanf("%d", &years);
        printf("Number of family members: ");
        scanf("%d", &fam_mem);
        printf("Total family income per month: ");
        scanf("%f", &income);
    if(fam_mem>8 && income<1100.78){
            printf("Will Receive the Bonus.");
    }
    else{
        printf("Will Not Receive the Bonus.");
    }
    }
    return 0;
}
