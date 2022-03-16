#include <iostream>
using namespace std;
int main()
{
int a[10];
int i,j;
for(i=0;i<10;i++){
a[i]=i+100;
}
for(j=0;j<10;j++){
cout<<"Element a["<<j<<"]="<<a[j]<<endl;
}
return 0;
}
