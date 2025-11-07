#include <stdio.h>
int main(){
    int choice;
    printf("select an option\n");
    printf("1:  hello\n");
    printf("2:  world \n");
    printf("3 : exit\n");
    printf("Enter case :");
    scanf( "%d",&choice);

    switch (choice)
    {
        case 1:
        printf ("hello\n");
       case 2:
       printf("world\n");
       case 3:
       printf("exiting\n");
       goto end;
       default:
       printf("i am in default\n");
       break;
    }
    end:
    printf("this is end of program ");
    return 0;
}