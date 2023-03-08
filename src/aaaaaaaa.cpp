#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n,a,b;
int a1,b1;

int main()
{
    cin>>n;
    cin>>a;
    cin>>b;
    
    b=b/2;
    
    if(a!=1)
    {
        cout<<"Prev ";
    }
    
    for(int i=1;i<=b+b1;i++)
    {
        if(a+i>n)
        {
            a1++;
        }
    }
    
    for(int i=b+a1;i>=1;i--)
    {
        if(a-i<1)
        {
            b1++;
            continue;
        }
        else
        {
            cout<<a-i<<" ";
        }
    }
    
    cout<<""<<a<<" ";
    
    for(int i=1;i<=b+b1-a1&&a+i<=n;i++)
    {
        cout<<a+i<<" ";
    }
    
    if(a!=n)
    {
        cout<<"Next";
    }
}