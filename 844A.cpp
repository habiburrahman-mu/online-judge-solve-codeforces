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
    int n, t, sum=0, coun=0;
    cin>>n>>t;
    int work[n];
    for(int i=0; i<n; i++)
    {
        cin>>work[i];
    }
    for(int i=0; i<n, sum<t; i++)
    {
        sum+=(86400-work[i]);
        coun++;
    }
    cout<<coun<<endl;
    return 0;
}
