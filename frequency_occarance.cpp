#include<iostream>
using namespace std;

int main()
{
int i,j,a[5]={2,3,2,5,3};
int freq=0;
for(i=0;i<5;i++)
{
freq=0;
for(j=0;j<5;j++)
{
if(a[i]==a[j])
{
freq++;
}
}
cout<<a[i]<<" occures "<<freq<<"times\n";

}

return 0;
}
