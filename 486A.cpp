#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
using namespace std;

long long int n, sum=0;
int main()
{
    while(cin>>n)
    {
        if(n%2==0)
        {
            sum=n/2;
        }
        else
        {
            sum=-((n+1)/2);
        }
        cout<<sum<<endl;
    }
    return 0;
}
