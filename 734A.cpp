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
    int len, a=0, d=0;
    cin>>len>>s;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if(a>d)
    {
        cout << "Anton" << endl;
    }
    else if(a<d)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}
