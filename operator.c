#include <stdio.h>
int main(){
    int num;
    printf("enter an integer:");
    scanf("%d",&num);
    (num & 1) ?  printf("%d is odd.\n",num) : printf("%d is even \n",num);
        return 0;

    }