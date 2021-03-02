#include<stdio.h>
int main()
{
    int h ;
    do{
    printf("enter the num");
    scanf("%d", &h);
    } while(h!=1 && h!=2 && h!=3 && h!=4 && h!=5 );
    switch (h)
    {
    case 1:
        printf("enter addresses");
        break;

        case 2:
        printf("delete address");
        break;

        case 3:
        printf("search the list");
        break;

        case 4:
        printf("print the list");
        break;
        case 5:
        printf("quit");
        break;
    }

}
