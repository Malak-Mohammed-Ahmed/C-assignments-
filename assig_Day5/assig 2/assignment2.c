#include<stdio.h>
#include "typedef2.h"

void modifyString(char *str, char *vowels_counter );


int main()

{
U8_t str[20]={0};
U8_t vowels_counter=0;

printf("Enter a single word\n");
scanf("%[^\n]s", str);

modifyString(str,&vowels_counter);

printf("Word after modification:%s\n", str);
printf("Number of vowels is:%d\n",vowels_counter );

return 0;

}

void modifyString(char *str,char *vowels_counter ){

while(*str!= '\0')
{
if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||
*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
{
(*vowels_counter)++;
}
if(*str<='z'&&*str>='a')
{
*str-=32;
}
str++;

}





}