
#include<stdio.h>
int main()
{
    int arr[2][5]={{11,22,33,44,55},{99,88,77,66,55}};
   int *p1=NULL;
   int (*p2)[5];
   int (*p3)[2][5]=NULL;
   //printf("%d %d",*p2,*(*(p3+1)+1));

p3=&arr;/// 2d ko point karegaa
p1=&arr[0][0];//1 row ko point karega
p2=&arr[0];//e1 row ke first eiment ko
printf("%d\n",*(p1+0));
printf("%d\n",*(*(p2)+1));
printf("%d\n",*(*(*(p3)+1)+1));

}


