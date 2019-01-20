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
    int friends, tot_fing=0;
    cin>>friends;
    int frnd_fing[friends];
    for(int i=0; i<friends; i++)
    {
        cin>>frnd_fing[i];
        tot_fing+=frnd_fing[i];
    }
    int ans=0;
    for(int i=1; i<=5; i++)
    {
        if(friends==1)
        {
            if( (tot_fing+i) % (friends+1) == 0)
            {
                ans++;
            }
        }
        else
        {
            if( (tot_fing+i) % (friends+1) !=1)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}
