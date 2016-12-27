#include<stdio.h>
main(){
char a[10],b[10];
int l,j,i,p=0;
printf("enrter a string");
scanf("%s",a);
l=strlen(a);
j=l-1;
for(i=0;i<=l;i++)
{
b[j]=a[i];
j--;
}
for(i=0;i<l;i++){
printf("%c",b[i]);
}
for(i=0;i<l;i++){
if(a[i]==b[i]){
p++;
}

}
if(p==l)
    printf("\npalidrom");
else
    printf("\nnot palidrom");
}

