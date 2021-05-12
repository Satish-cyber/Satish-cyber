#include<iostream>
using namespace std;

int main()
{
 int n;int i;
 cin>>n;
 for(i=2;i<=n;i++)
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