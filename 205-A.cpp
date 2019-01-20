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
    long long dis[n], sor_dis[n];
    for(int i=0; i<n; i++)
    {
        cin>>dis[i];
        sor_dis[i] = dis[i];
    }
    sort(sor_dis, sor_dis+n);
    if(sor_dis[0]==sor_dis[1])
    {
        cout<<"Still Rozdil"<<endl;
    }
    else
    {
        long long min = sor_dis[0];
        for(int i=0; i<n; i++)
        {
            if(dis[i]==min)
            {
                cout<<i+1<<endl;
            }
        }
    }

    return 0;
}
