#include <stdio.h>
int main(){
    int n,i;
    int truefalse = 0;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<=0)
    {
        truefalse =1;
    }
    else
    {
        for(int i=2;i<n;i++)
    {
        if (n%i==0)
    {
        truefalse =1;
        break;
    }
    }
}
if (truefalse==0)
{
    printf("it is a prime number");
}
else
{
    printf("it is not a prime number");
}
return 0;
}