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

#define fr(a,b) for(int i=a; i<b; i++)
#define fr_e(a,b) for(int i=a; i<=b; i++)
#define fr_rev(a,b) for(int i=a-1; i>=b; i--)

using namespace std;

int main()
{
    int k, month[12], count(0);
    cin>>k;
    fr(0,12)
    {
        cin>>month[i];
    }
    sort(month, month+12);
    fr_rev(12, 0)
    {
        if(k<=0)
            break;
        k=k-month[i];
        count++;
    }
    if(k>0)
        count=-1;
    cout<<count<<endl;
}
