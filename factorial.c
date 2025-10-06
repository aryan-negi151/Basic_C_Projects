#include <stdio.h>
int main(){
   int n,a=1;
   int i =0;

   printf("Enter the number");
   scanf("%d", &n);
   if (n>0)
   {
    for(int i=1;i<=n;i++)
    a*=i;
    printf("factorial of  the number %d is %d",n,a);
   }
   else if (n==0)
   {
    printf("factorial of 0 is 1");
   }
   else{
    printf("factorial of negative number is undefined");
   }
   return 0;
}