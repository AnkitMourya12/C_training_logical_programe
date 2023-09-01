#include<stdio.h>
int global=20;
int main()
{
    int loc=10;
    printf("%d\n%d\n",loc,global);
    mpec();
    printf("%d\n",global);
    return 0;
}
int mpec()
{
    printf("%d\n",global);
    global=88;
}
