#include<stdio.h>
int main ()
{
    int a;
    for(;;)
    {
        printf("enter the num");
        scanf("%d", &a);
        if(a==0)
        {
            break;
        }
        else
        {    continue;
        }
    }
    return 0;
}
