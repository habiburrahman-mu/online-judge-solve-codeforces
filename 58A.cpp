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
    while(cin>>s)
    {
        string word="hello";
        int len=s.size(), j=0, coun=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]==word[j])
            {
                coun++;
                j++;
            }
        }
        if(coun==5)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
