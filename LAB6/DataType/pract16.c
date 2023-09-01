#include<stdio.h>
int main()
{
    char ch='d';
    int i;
    float f;
    double d;
    long double ld;
    printf("%d %d %d %d %d \n", sizeof(ch),sizeof(i),sizeof(f),sizeof(d),sizeof(ld));
    printf("%d",sizeof('d'));
    return 0;
}
//  1 4 4 8 16 => 64 bit ENW
//  1 4 4 8 12    => 32 bit ENV
// 4 =>ONLY IN COMPLIER BUT in c++ output is 1;