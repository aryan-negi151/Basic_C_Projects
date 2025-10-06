#include <stdio.h>
int main(){
 float marks;
 printf("Enter marks :");
 scanf("%f",&marks);
 if(marks >=90 && marks <=100)
{
    printf("A grade");
}
else if(marks >=80 && marks <90)
{
    printf("B grade ");
}
else if(marks >=70 && marks<80)
{
    printf("C grade");
}
else if( marks <70 && marks >=0)
{
    printf("Fail");
}
else if (marks <0 || marks >100)
{
    printf("invalid marks");
}
return 0;

}
