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
    string s, out="";
    int len;
    cin>>s;
    len = s.length();
    for(int i = 0; i<len; i++)
    {
        if(s[i]=='.')
        {
            out = out + "0";
        }
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
               out = out + "1";
                i++;
                //continue;
            }
            else if(s[i+1]=='-')
            {
                out = out + "2";
                i++;
                //continue;
            }
        }
    }
    cout<<out<<endl;
    return 0;
}
