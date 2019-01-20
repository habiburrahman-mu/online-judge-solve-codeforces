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
    int n, max=0;
    float m;
    cin>>n>>m;
    float a[n];
    int pos=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(max <= ceil(a[i]/m))
        {
            max = ceil(a[i]/m);
            //cout<<ceil(a[i]/m)<<endl;
            pos = i;
        }
    }
    cout<<pos+1<<endl;

    return 0;
}
