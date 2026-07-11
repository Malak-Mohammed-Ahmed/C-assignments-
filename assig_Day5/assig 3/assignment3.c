#include<stdio.h>
#include "typedef3.h"

int sumMainDiagonal(int matrix[3][3]) ;
void searchElement(int *ptr, int target);

int main()
{
S16_t counter1=0;
S16_t counter2=0;
int matrix[3][3]={0};
S16_t target=0;

printf("Enter elements of matrix\n");
for(counter1=0;counter1<3;counter1++){

for(counter2=0;counter2<3;counter2++){
printf("Element [%d][%d]\n", counter1,counter2);
scanf("%d",&matrix[counter1][counter2] );
}

}

printf("Displaying matrix in grid form:\n");
for(counter1=0;counter1<3;counter1++){

for(counter2=0;counter2<3;counter2++){
printf("%d\t",matrix[counter1][counter2] );
}
printf("\n");
}

printf("sum of main diagonal elements:%d\n",sumMainDiagonal(matrix) );

printf("Enter a target number\n");
scanf("%hd", &target);

searchElement( &matrix[0][0], target);


return 0;   
}

int sumMainDiagonal(int matrix[3][3]) {
S16_t sum=0;
sum=matrix[0][0]+matrix[1][1]+matrix[2][2];

return sum;
}

void searchElement(int *ptr, int target){
S16_t row=0;
S16_t column=0;
if(ptr!=NULL){

for (row = 0; row < 3; row++) {
        for (column = 0; column < 3; column++) {
        if(target==*ptr)
           { 
            printf("Element is found at row:%d and column:%d\n", row+1, column+1);
            return;
           }
    
           ptr++;
        }
}
}
printf("Element is not found\n");

}


/*



1 2 3
5 2 6
7 9 4
*/