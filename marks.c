#include <stdio.h>
int main(){
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100)
    {
    printf("grade A");
    }
    else if(marks>=75 && marks<=89)
    {
        printf("grade B");
    }
    else if(marks>=50 && marks<=74)
    {
        printf("grade C");

    }
    else 
    {
        printf("grade F");
    }
    return 0;


}