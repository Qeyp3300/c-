#include<iostream>
using namespace std;
int main()
{
int x,y;
char ch;
cout<<"Enter the first number \n";
cin>>x;
cout<<"Enter the second number \n";
cin>>y;
cout<<"Enter \n + for add \n - for subtraction \n * for multiplication \n / for division \n % for modulous \n";
cin>>ch;
switch (ch)
{
case '+':
cout<<"Add="<<(x+y);
break;
case '-':
cout<<"sub="<<(x-y);
break;
case '*':
cout<<"mult="<<(x*y);
break;
case '%':
cout<<"modulous="<<(x%y);
break;
case '/':
cout<<"division="<<(x/y);
break;
default:
cout<<"its runs succuceful";
break;
}
return 0;
}
