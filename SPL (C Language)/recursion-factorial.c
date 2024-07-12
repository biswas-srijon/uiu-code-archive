#include <stdio.h>

int display(int n)
{
    int s=0;
    if (n==1)
    return n;
    else
    {
        s=n*display(n-1);
        return s;
    }
}
int main() {
    int n;
    n=display(4);
    printf("\nFactorial : %d\n",n);

    return 0;
}
