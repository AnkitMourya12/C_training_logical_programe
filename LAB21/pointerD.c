#include<stdio.h>
int main()
{
    int arr[2][5]={{11,22,33,44,55},{99,88,77,66,55}};
   int *p=&arr[0][0];
   int (*ptr)[5]=arr;
   int (*ptr)[2][5]=&arr;


printf("\n%d %d",p,ptr);
p++;
ptr++;
printf("\n%d %d",p,ptr);
printf("\n%d %d",*p);
}
