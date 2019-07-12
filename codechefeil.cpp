#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{int n;
cin>>n;
for(int j=1;j<=n;j++)
{
long int x;
cin>>x;
int a[12];
for(int i=0;i<12;i++)
{a[i]=pow(2,i);
}
long int num,sum=0;
for(int i=11;i>=0;i--)
{num=0;
    if(x>=a[i])
{num=x/a[i];
x-=num*a[i];
}
sum+=num;
}
cout<<sum<<endl;
}
 return 0;   
}