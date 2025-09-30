#include <stdio.h>
int main(){
    int num1, stop;
    printf("enter the number whose table u want to be printed: ");
    scanf("%d",&num1);
    printf("enter the number till where u want ur num1 to be multiplied: ");
    scanf("%d",&stop);
    

    for(int i=1;i<=stop;i++)
    {
    int multiplication=num1*i;
printf("%d X %d =%d \n",num1, i,multiplication);
    }
return 0;
}