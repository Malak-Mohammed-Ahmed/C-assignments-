//with sorting
#include <stdio.h>
void get_max(int arr[],int SIZE){
int counter1=0;
int counter2=0;
int tmp=0;
for (counter1=0; counter1<SIZE;counter1++){

    for (counter2=0; counter2<SIZE-1-counter1;counter2++)
{
if(arr[counter2]>arr[counter2+1])
{
tmp=arr[counter2];
arr[counter2]=arr[counter2+1];
arr[counter2+1]=tmp;

}

}


}

printf("Max no in this array is :%d",arr[SIZE-1] );



}














//without sorting:
/*#include <stdio.h>
void get_max(int arr[], int SIZE){
int max=0;
int counter=0;
for (counter=0; counter<SIZE;counter++){
if (arr[counter]>max)
{
  max=arr[counter];
}
}
printf("Max number in this array is %d", max);

}*/