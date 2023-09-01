#include<stdio.h>
#include"tm1.c"
#include"tm2.c"
#include"tm3.c"
#include"tm4.c"

int main()
{
    extern void add();
    extern void sub();
    extern void mul();
    extern void div();
    add();
    sub();
    mul();
    div();
    return 0;


}