#include<stdio.h>
#define N 3

int main()
{
    int i,j;
    int c=0;
     int ar[N][N]={{1,2,3},
                {4,5,6},
                {7,8,0}};
  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
        if(ar[i][j]==0)
        {
            c++;
        }
    }
  }  
  if(c!=0)
  {
    printf("array is have zero element");
  }            
  else
  {
    printf("array are none zero");
  }

}