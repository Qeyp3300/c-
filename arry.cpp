#include <iostream>
using namespace std;
int main()
{
int a[5][2]={{0,1},{2,3},{4,5},{6,7},{8,9}};
int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<2;j++){
cout << "Element at a[" << i<< "][" << j << "]: "<<a[i][j]<<"\n";
//cout<<a[i][j]<<"\n";
}
}
return 0;
}
