//with sorting
#include <stdio.h>
#include"proto3.h"
#define SIZE 5

int main(){
int counter=0;
int arr[SIZE]={0};
printf("Enter array elements\n");
for(counter=0;counter<SIZE;counter++)
{
scanf("%d", &arr[counter]);
}

get_max(arr,SIZE);


}










//without sorting:

/*#include <stdio.h>
#include"proto3.h"
#define SIZE 5

int main(){
int counter=0;
int arr[SIZE]={0};
printf("Enter array elements\n");
for(counter=0;counter<SIZE;counter++)
{
scanf("%d", &arr[counter]);
}
get_max( arr,SIZE);


}*/