#include<iostream>
using namespace std;
void sum(int x,int y);
int main()
{
int a,b;
a=3;
b=5;
sum(a,b);
}
void sum(int x,int y)
{
int result;
result=x+y;
cout<<result;
}
