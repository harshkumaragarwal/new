#include<iostream>
//code by harsh kumar section C 20011889 28
using namespace std;
int main()
{
 int n;
 cin>>n;
 int p=0;
 for(int i=2;i<=(n/2);i++)
 {
  if(n%i==0)
  {cout<<"NOT A PRIME NUMBER.";
  p=1;
  break;
  }

 }
 if(p==0)
 cout<<"PRIME NUMBER";}