#include <iostream>
using namespace std;
int main()
{
int a[5][2]={{1,2},{3,4},{5,6},{7,8},{9,0}};
int i,j;
for(i=0;i<5;i++){
for(j=0;j<2;j++){
cout<<"element at a=["<<i<<"]["<<j<<"]:"<<a[i][j]<<endl;
}
}
return 0;
}
