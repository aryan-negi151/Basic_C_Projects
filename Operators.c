#include <stdio.h>
int main(){
int x,y;
printf("Enter a number :");
scanf("%d",&x);
printf("Enter second number :");
scanf("%d",&y);

printf("addition:%d\n",x+y);
printf("subtraction:%d\n",x-y);
printf("multiplication:%d\n",x*y);

if(y!=0)
{
    printf("division:%d\n",x/y);
    printf("modulus:%d\n",x%y);
}
else
{
    printf("division : error\n");
    printf("modulus :error\n");    
}
return 0;
}