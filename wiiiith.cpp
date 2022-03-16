#include<iostream>
using namespace std;
int sum(void);
int main()
{
int ans;
ans=sum();
cout<<ans;
}
int sum(void)
{
int a,b,res;
a=6;
b=10;
res=a+b;
return res;
}
