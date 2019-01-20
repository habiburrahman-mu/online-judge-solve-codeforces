#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    string s;
    int len, lower=0, i;
    cin>>s;
    len = s.length();
    //cout<<len<<endl;
    for(i=0; i<len; i++)
    {
        if(islower(s[i]))
        {
            lower++;
        }
    }
    //cout<<lower<<endl;
    if(lower>=(len-lower))
    {
        for(i=0; i<len; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else
    {
        for(i=0; i<len; i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    cout<<s<<endl;
}
