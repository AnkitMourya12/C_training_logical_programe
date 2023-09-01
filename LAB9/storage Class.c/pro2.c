#include<stdio.h>
int g1,g2,g3;

int main()
{
    int l1,l2,l3;
    printf("%d %d %d\n",l1,l2,l3); //LOCAL VARIABLE default value hold garbage
    printf("%d %d %d\n",g1,g2,g3); // GLOBAL default value hold zero
}
