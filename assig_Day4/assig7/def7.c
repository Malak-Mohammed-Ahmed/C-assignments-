#include <stdio.h>
void char_converter(char arr[] ){
int counter=0;
for(counter=0;counter<5;counter++)
{
scanf(" %c",&arr[counter]);
}

printf("Array of integers:\n");
for(counter=0;counter<5;counter++)
{
printf("%d\n", arr[counter]);
}
}