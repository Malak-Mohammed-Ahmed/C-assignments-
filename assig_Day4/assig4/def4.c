#include <stdio.h>

void get_frequency(int arr[], int SIZE, int search_no){
int frequency=0;
int counter=0;
for(counter=0; counter<SIZE; counter++) 
{
if(arr[counter]==search_no)
frequency++;

}

printf("No of iterations of your input no: %d", frequency);



}