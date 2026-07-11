#include<stdio.h>
#include "typedef4.h"
#define SIZE 5
void swap(S16_t *a, S16_t *b);

int main()
{

S16_t arr[SIZE]={0};
U8_t counter=0;
U8_t counter1=0;

printf("Enter 5 numbers\n");
for(counter=0;counter<SIZE;counter++)
{
scanf("%hd", &arr[counter]);
}

printf("Array before sorting:\n");
for(counter=0;counter<SIZE;counter++)
{
printf("%hd\t",arr[counter]);
}

for(counter=0;counter<SIZE;counter++)
{
    for(counter1=0;counter1<SIZE-1-counter;counter1++){
    if(arr[counter1]>arr[counter1+1])
    {
    swap( &arr[counter1], &arr[counter1+1]);
    }

    }
}

printf("Array after sorting:\n");
for(counter=0;counter<SIZE;counter++)
{
printf("%hd\t",arr[counter]);
}

return 0;
}

void swap(S16_t *a, S16_t *b){
    
    S16_t tmp=0;
    tmp=*a;
    *a=*b;
    *b=tmp;


}