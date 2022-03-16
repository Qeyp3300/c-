#include<iostream>
#include<string.h>
using namespace std;
struct person{
char name[10];
int age;
int salary;
};
int main()
{
struct person emp1;//emp2;
strcpy(emp1.name,"vincent");
       emp1.age=20;
       emp1.salary=5000;
/*strcpy(emp2.name,"ken");
       emp2.age=25;
       emp2.salary=10000;*/
cout<<"Name="<<emp1.name<<"\n""age="<<emp1.age<<"\n""salary="<<emp1.salary;
//cout<<"age="<<emp1.age<<endl;
//cout<<"salary="<<emp1.salary<<endl;
return 0;
}
