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
    int n, gl1=0, gl2=0; cin>>n;
    string s, s1, s2;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(i==0)
        {
            s1 = s;
            gl1++;
        }
        else
        {
            if(s1.compare(s)==0)
            {
                gl1++;
            }
            else
            {
                s2 = s;
                gl2++;
            }
        }
    }
    if(gl1>gl2)
    {
        cout<<s1<<endl;
    }
    else
    {
        cout<<s2<<endl;
    }
}
