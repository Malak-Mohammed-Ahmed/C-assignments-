#include<stdio.h>


int power(int base, int exponent);
int sumDigits(int n);

int main()

{
int Number1=0;
int Number2=0;
int Number3=0;
printf("Please enter base then exponent\n");
scanf("%d %d", &Number1, &Number2);
printf("Please enter another number\n");
scanf("%d",&Number3);

printf("Number1^Number2=%d\n", power(Number1,Number2));
printf("Sum of digits of the number you entered:%d\n", sumDigits(Number3));


}

int power(int base, int exponent){
if(exponent==0)
{
    return 1;
}
return base*power(base, exponent-1);

}

int sumDigits(int n){
if(n==0)
{
    return 0;

}
return (n%10)+sumDigits(n/10);


}

