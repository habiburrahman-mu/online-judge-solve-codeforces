#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstring>
#include<string>
#include<array>
#include<list>
#include<map>
using namespace std;


int main()
{
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int d;
    d = a+b+c-(c*2);
    if(n-d>0)
    {
        cout<<n-d<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }

    return 0;
}
