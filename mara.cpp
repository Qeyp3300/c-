#include <iostream>
#include<string.h>
using namespace std;
struct person{
char name[10];
int age;
int salary;
};
int main()
{
struct person emp;
strcpy(emp.name,"vincent");
       emp.age=20;
       emp.salary=5000;
cout<<"name="<<emp.name<<"\n""age="<<emp.age<<"\n""salary="<<emp.salary<<"\n";
return 0;
}
