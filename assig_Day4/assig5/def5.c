#include <stdio.h>
void get_frequency(char arr[], int SIZE, char search_char){
int frequency=0;
int counter=0;
for(counter=0; counter<SIZE; counter++) 
{
if(arr[counter]==search_char)
frequency++;

}

printf("No of iterations of your input char: %d", frequency);



}