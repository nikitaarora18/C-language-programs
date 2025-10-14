#include <stdio.h>
int findmax(int arr[],int n){
int max=arr[0];
for(int i=1;i<n;i++)
if(arr[i]>max)
max=arr[i];
return max;
}
int findmin(int arr[], int n){
int min=arr[0];
for(int i=1;i<n;i++)
if(arr[i]<min)
min=arr[i];
return min;
}
int main(){
    int max, min;
    int arr[]={10,20,30,40,50};
int n=5;
printf("array elements: \n");
for(int i=0;i<n;i++)
printf("%d \n",arr[i]);
max=findmax(arr, n);
min=findmin(arr, n);
printf("the maximum number is %d \n",max);
printf("the minimum number is %d \n",min);
 
return 0;
}






    
