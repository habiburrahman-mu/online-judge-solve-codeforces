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
    int n; cin>>n;
    int f(0), z(0), t;
    for(int i=0; i<n; i++)
    {
        cin>>t;
        if(t==5)
        {
            f++;
        }
        else
        {
            z++;
        }
    }
    if(z==0)
    {
        cout<<-1<<endl;
    }
    else if(f<9)
    {
        cout<<0<<endl;
    }
    else
    {
        f = f - (f%9);
        for(int i=0; i<f; i++)
        {
            cout<<5;
        }
        for(int i=0; i<z; i++)
        {
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
