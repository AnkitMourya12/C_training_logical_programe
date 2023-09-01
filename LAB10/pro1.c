#include<stdio.h>
int main()
{
    char ch1,ch2;
    printf("enter the first char:");
    scanf("%c",&ch1);
     printf("enter the second char:");
     fflush(stdin); //    IS INPUTE BUFFUR STREAM
    scanf("%c",&ch2);  //scanf("%c",&ch2);
    printf("U entred %c %c",ch1,ch2);


}