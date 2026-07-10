#include<stdio.h>
void max_char(char arr[], int SIZE){
char max=arr[0];
int counter=0; 
for (counter=1; counter<SIZE; counter++)
{
if(arr[counter]>max)
max=arr[counter];

}
printf("Max char is: %c", max);
}