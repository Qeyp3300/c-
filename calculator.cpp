#include<iostream>
using namespace std;
int main()
{
    float x,y;
    char ch;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;
    cout<<"enter \n + for add \n - for subtract \n * for  product \n";
    cin>>ch;
    switch (ch)
    {
        case '+':
        cout<<"add"<<x+y;
        case '-':
        cout<<"add"<<x*y;
        default:
        cout<<"its good";
        break;
    }
    return 0;
}