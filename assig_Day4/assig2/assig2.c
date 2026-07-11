#include <stdio.h>
#include"proto2.h"
#define SIZE 5
int main()
{
int arr[5]={0};
int count=0;
printf("Enter array elements\n");
for (count=0;count<SIZE;count++)
{
scanf("%d", &arr[count]);
}
sorting_arr(arr,SIZE);
}