#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t, revers;
    while(cin>>s>>t)
    {
        reverse(s.begin(), s.end());
        if(s==t){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
