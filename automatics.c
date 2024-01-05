#include<stdio.h>
void fun();
int main()
{
    auto int a=10;
    fun();
    printf("\n%d\n",a);
    fun();
    printf("\nhellow gopi");
    fun();
}
void fun(){
    auto int a=10;
    printf("  \n with gopi =%d",++a);
    
}
