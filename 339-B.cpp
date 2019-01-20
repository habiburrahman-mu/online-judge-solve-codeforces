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
    int m,n; cin>>m>>n;
    int pos[n];
    for(int i=0; i<n; i++)
    {
        cin>>pos[i];
    }
    int ans=0;
    ans = pos[0]-1;
    for(int i=1; i<n; i++)
    {
        if(pos[i]-pos[i-1] < 0)
        {
            ans = ans+(m-pos[i-1]+pos[i]);
        }
        else
        {
            ans = ans+(pos[i]-pos[i-1]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
