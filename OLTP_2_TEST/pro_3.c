#include<stdio.h>
int main()
{
   int i;
   char s[]="hello";
   for(i=0;s[i];++i)
   {
   printf("%d ",i);
}
printf("\n");
i=0;
while(s[i++]);
printf("%d ",i);   // o/p 0 1 2 3 4 \n 6
}