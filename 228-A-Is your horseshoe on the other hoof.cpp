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
    long int inp[4];
    int diff=0;
    for(int i=0; i<4; i++)
    {
        cin>>inp[i];
    }
    for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            if(inp[i]==inp[j])
            {
                diff++;
                break;
            }
        }
    }
    cout<<diff<<endl;
}
