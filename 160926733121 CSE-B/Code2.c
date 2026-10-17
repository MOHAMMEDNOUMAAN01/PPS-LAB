#include <stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf ("%d",& a);
    if (a==0)
    {
        printf ("zero");
    }
    else if(a%2==0)
    {
       printf ("even");
    }
    else
    {
        printf ("odd");
    }
    return 0;
}
