#include <stdio.h>
int main()
{
int a,b,i;
printf("enter intervals ");
scanf("%d %d",&a,&b);
for(i=a+1;i<b;i++)
{
    if(i%2!=0)
        printf("%d\n",i);
}
return 0;
}
