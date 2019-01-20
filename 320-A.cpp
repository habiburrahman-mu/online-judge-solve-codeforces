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

bool magical(string str)
{
    int len = str.length();
    for(int i=0; i<len; i++)
    {
        if(str[i]!='1' && str[i]!='4')
        {
            return false;
        }
        if(str[0]!='1')
        {
            return false;
        }
        if(str.find("444")!=str.npos)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    string s;
    cin>>s;
    if(magical(s))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
