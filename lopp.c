#include<stdio.h>
void main()
{
int hindi, english,science, math,socialscience,total, avg;
char grade  ;
printf("enter the no of english hindi sciene\n");
scanf("%d\n%d\n%d\n%d\n%d",&hindi,&english,&science,&math,&socialscience);
total=hindi+english+science+math+socialscience;
avg=total/5;
if(avg>=80&& avg<=100){
grade='a';
printf("you scored %c grade",grade);}
else if(avg>=80&&avg<90){
grade='b';
printf("tou scored %c",grade);}
else if(avg>=70&&avg<=90){
grade='c';
printf("tou scored %c",grade);}

}
    
    
    

    



