#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;

int main()
{

    long long n, k, mid;
    while(cin>>n)
    {
        mid=ceil(n/2.0);
        //cout<<mid;
        cin>>k;
        if(k<=mid)
        {
            cout<<(2*k)-1<<endl;

        }
        else
        {
            cout<<(k-mid)*2<<endl;
        }

    }
    return 0;
}
