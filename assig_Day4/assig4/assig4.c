#include <stdio.h>
#include"proto4.h"
#define SIZE 5

int main(){
int counter=0;
int arr[SIZE]={0};
int search_no=0;

printf("Enter array elements\n");
for (counter=0; counter<SIZE;counter++)
{
scanf("%d", &arr[counter] );

}
printf("Enter search number\n");
scanf("%d", &search_no);

get_frequency(arr, SIZE, search_no);



}