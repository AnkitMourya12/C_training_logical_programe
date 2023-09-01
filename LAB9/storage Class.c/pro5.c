#include<stdio.h>
int main()
{
int i=10 ;
printf("i=%d",i);
{
    int b=20;      // local variable
    printf("b=%d",b);
    printf("i=%d",i);
}
//printf("b=%d",b);   // do not use this value from outside of block------> o/p is error
return 0;
}




// #include<stdio.h>
// int main()
// {
// int i=10 ;
// printf("i=%d",i);
// {
//     int b=20;      // local variable
//     printf("b=%d",b);
//     printf("i=%d",i);
// }
// printf("b=%d",i);   // o/p--->  i=10 b=20 i=10 b=10
// return 0;
// }