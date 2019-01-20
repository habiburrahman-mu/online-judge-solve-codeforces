#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    long long k, n, w, total, borrow;
    while(cin>>k>>n>>w)
    {
        total=0;
        for(int i=1; i<=w; i++)
        {
            total+=i*k;
        }
        if(total>n)
        {
            borrow=total-n;
            cout<<borrow<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;
}
