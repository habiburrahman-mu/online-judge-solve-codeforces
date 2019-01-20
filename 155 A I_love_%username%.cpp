#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstring>
#include<string>
#include<array>
#include<list>
using namespace std;


int main()
{
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout)
    int num;
    cin>>num;
    int rat[num], inp, amg=0;
    for(int i=0; i<num; i++)
    {
        cin>>inp;
        if(i==0)
        {
            max=min=inp;
            continue;
        }
        else
        {
            if(inp>max)
            {
                max=inp;
                amg++;
            }
            else if(inp<min)
            {
                min=inp;
                amg++;
            }
        }
    }
    cout<<amg<<endl;
}
