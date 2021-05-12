#include<bits/stdc++.h>
using namespace std;

    int main()
{
 int n;int i,m; 
 //m=sqrt(n);
 cin>>n;
 for(i=2;i<=sqrt(n);i++)
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