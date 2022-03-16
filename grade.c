#include<stdio.h>
int main(){
int grade;
printf("Enter your Grade please\n");
scanf("%d",&grade);
switch(grade){
case 40:
  printf("fail");
  break;
case 50:
  printf("pass");
  break;
case 60:
  printf("average");
  break;
case 70:
  printf("goood");
  break;
case 80:
  printf("goood");
  break;
return 0;
}
