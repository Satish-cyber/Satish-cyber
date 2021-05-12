#include<iostream>
using namespace std;

int main()
{
 int n;int i,m;
 m=n/2;
 cin>>n;
 for(i=2;i<=m;i++)
    if(n%i==0)
    {
      cout<<"not a prime";
      break;
    }
 else
    {
     cout<<"prime";
     break;
    }
}