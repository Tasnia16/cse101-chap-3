#include<stdio.h>
int main()
/*vul hoise*/
{
  int a,i;
  float t1,t2,t3;
  for(i=1;i<=100;i++)
  {
    t1=i*.1;
    t2=i*.15;
    t3=i*.2;

    printf("wanna check more? click 1 or 2\n");
    scanf("%d",&a);

    if(a==2)
        break;

    printf("%f %f %f",&t1,&t2,&t3);
  }
}
