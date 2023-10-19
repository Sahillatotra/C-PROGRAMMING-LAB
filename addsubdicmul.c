#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,c,x;
  printf("enter the number=");
  scanf("%d%d",&a,&b);
  int w;
  printf("1=add,2=sub,3=multi,4=div:");
  scanf("%d",&w);
  if(x==1)
  {
    c=a+b;
    printf("add=%d",c);
  }
  else if(x==2) 
  {
    c=a-b;
    printf("sub=%d",c);
  }
  else if(x==3)
  {
    c=a*b;
    printf("multi=%d",c);
  }
  else if(x==4)
  {
     if(b==0)
     {
        printf("infinity");
     }
     else
     {
        c=a/b;
        printf("div=%d",c);
     }
  }
}