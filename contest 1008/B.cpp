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
    freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    long long n;
    cin>>n;
    long long w[n], h[n];
    int flag = 0;
    for(int i=0; i<n; i++)
    {
        cin>>w[i]>>h[i];
    }
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            if(w[i]>h[i])
            {
                swap(w[i], h[i]);
            }
        }
        else
        {
            if(h[i]>h[i-1])
            {
                swap(w[i], h[i]);
                if(h[i]<=h[i-1])
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
    }
    cout<<flag<<endl;
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
