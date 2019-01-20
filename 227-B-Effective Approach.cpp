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

    map <int, int> indx;
    int num, temp;
    long long tot_a=0, tot_b=0;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        cin>>temp;
        indx[temp] = i;
    }
    int query;
    cin>>query;
    for(int i=0; i<query; i++)
    {
        cin>>temp;
        tot_a+=indx[temp];
        tot_b+=num-(indx[temp]-1);
    }
    cout<<tot_a<<" "<<tot_b<<endl;

    return 0;
}
