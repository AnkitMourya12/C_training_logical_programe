#include<stdio.h>
int main()
{int i,j;
for(i=1;i<3;i++)
{
    for(j=1;j<4;j++)
    {
        if(i==2) continue;
        printf("%d%d ",i,j);
    }
}
}
