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
    int h[n], min=INT_MAX, pos=0, pos2;
    for(int i=0; i<n; i++)
    {
        cin>>h[i];
    }
    for(int i=0; i<n; i++)
    {
        if(i!=n-1)
        {
            int dif = abs(h[i]-h[i+1]);
            if(min>dif)
            {
                min=dif;
                pos=i;
            }
        }
        else if(i==n-1)
        {
            int dif = abs(h[i]-h[0]);
            if(min>dif)
            {
                min=dif;
                pos=i;
            }
        }
    }
    if(pos==n-1)
    {
        pos2 = 0;
    }
    else
    {
        pos2 = pos+1;
    }
    cout << pos+1 << " " << pos2+1 << endl;

    return 0;
}
