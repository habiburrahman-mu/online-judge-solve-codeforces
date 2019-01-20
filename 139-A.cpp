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
    int day[7];
    for(int i=0; i<7; i++)
        cin>>day[i];
    int rem_n = n, i=0, last_day;
    while(rem_n>0)
    {
        rem_n=rem_n-day[i];
        //cout<<day[i]<<endl;
        last_day = i;
        i++;
        if(i==7)
            i=0;
    }
    cout<<last_day+1<<endl;

    return 0;
}
