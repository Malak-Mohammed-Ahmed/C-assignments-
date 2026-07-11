#include <stdio.h>
#include "proto5.h"
#define SIZE 5


int main(){

int counter=0;
char arr[SIZE]={0};
char search_char=0;

printf("Enter array elements\n");
for (counter=0; counter<SIZE;counter++)
{
scanf(" %c", &arr[counter] );

}
printf("Enter search character\n");
scanf(" %c", &search_char);

get_frequency(arr, SIZE, search_char);

}