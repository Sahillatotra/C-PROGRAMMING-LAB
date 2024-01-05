#include<stdio.h>
void  display();
void main()
{
    display();
    extern int x;
    x=x+x;
    printf("ectern pgn x=%d",x);
}