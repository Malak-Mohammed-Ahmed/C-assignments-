#include <stdio.h>
#include "typedef1.h"

void processTransaction(float *balance, char type);

int main(){
F32_t balance=0;
U8_t type=0;

processTransaction(&balance, type);

return 0;
}

void processTransaction(float *balance, char type){
static int storage_duration=0;
float amount=0;
do{
printf("1. Deposit, 2. Withdraw,3. Check Balance,4. Exit. \n");
scanf("%hhd", &type);

switch(type){
case 1: 
printf("Enter the amount to deposit\n");
scanf("%f",&amount);
*balance+=amount;
storage_duration++;
break;

case 2:
printf("Enter the amount to withdraw\n");
scanf("%f",&amount );
*balance-=amount;
storage_duration++;
break;

case 3:
printf("Your balance is: %f\n",*balance );
break;
}

}while(type!=4);

printf("Number of transactions is:%d\n",storage_duration);
}