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
    int num;
    cin>>num;
    int inp[num];
    for(int i=0; i<num; i++)
    {
        cin>>inp[i];
    }
    int prev = inp[0], coun=1;
    for(int i=1; i<num; i++)
    {
        if(inp[i]!=prev)
        {
            prev=inp[i];
            coun++;
        }

    }
    cout<<coun<<endl;

    return 0;
}
