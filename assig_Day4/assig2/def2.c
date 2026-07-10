#include <stdio.h>
void sorting_arr(int arr[],int SIZE){
int count1=0;
int count2=0; 
int tmp=0;
for (count1=0; count1<5;count1++){

for(count2=0; count2<4-count1;count2++){
if(arr[count2]<arr[count2+1])// replacing < with > for ascending sorting
{
tmp=arr[count2];
arr[count2]=arr[count2+1];
arr[count2+1]=tmp;
}
}

}
printf("Sorted array:\n");
for (count1=0; count1<5;count1++){
printf("%d\n", arr[count1]);

}

}