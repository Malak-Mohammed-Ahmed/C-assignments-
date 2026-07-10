#include <stdio.h>
#include "proto5.h"
#define SIZE 5

int main(){
char arr[SIZE]={0};
int counter=0;
printf("Enter array elements\n");
for (counter=0;counter<SIZE;counter++)
{
scanf(" %c", &arr[counter]);

}
max_char(arr, SIZE);
}