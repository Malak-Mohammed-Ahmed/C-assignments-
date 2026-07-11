#include <stdio.h>
#define SIZE 5

void array_reverser(char arr[]);

int main()
{
char arr[SIZE]={0};
int counter=0;

printf("Enter array elements\n");
for(counter=0;counter<SIZE;counter++){
scanf(" %c", &arr[counter]);
}

array_reverser(arr);


}


void array_reverser(char arr[]){
int counter=0;

printf("reversed array:\n");
for(counter=SIZE-1;counter>=0;counter--){
    printf(" %c\n", arr[counter]);

}




}