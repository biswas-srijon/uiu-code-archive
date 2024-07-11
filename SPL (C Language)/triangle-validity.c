#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ang1, ang2, ang3;
    printf("Enter your angles: ");
    scanf("%d %d %d", &ang1, &ang2, &ang3);

    if(ang1+ang2+ang3 == 180 && ang1>0 && ang2>0 && ang3>0 && ang1<180 && ang2<180 && ang3<180){
        printf("Yes.");
    }
    else{
        printf("No.");
    }
    return 0;
}
