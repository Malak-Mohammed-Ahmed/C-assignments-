#include <stdio.h>
void scan_display_arr(char arr[],int SIZE){
int counter=0;
printf("Enter array characters\n");
for (counter=0; counter<5;counter++)
{
scanf(" %c", &arr[counter] );

}
printf("Scanned array:\n");
for (counter=0; counter<SIZE;counter++){
printf(" %c", arr[counter] );
}

}