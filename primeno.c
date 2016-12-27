#include <stdio.h>
int main()
{
int a,i;
printf("enter a string");
scanf("%d",&a);
for(i=0;i<a/2;i++)
{
    if(a%2!=0){
        printf("prime");
    }
    else{
        printf("not prime");
    }
}
return 0;
}
