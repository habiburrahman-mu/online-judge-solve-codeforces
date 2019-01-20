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

    char inp1[1000], inp2[1000], out[1000];
    scanf("%s", inp1);
    scanf("%s", inp2);
    int len = strlen(inp1);
    for(int i=0; i<len; i++)
    {
        if(inp1[i]==inp2[i])
        {
            out[i]='0';
        }
        else
        {
            out[i]='1';
        }
    }

    for(int i=0; i<len; i++)
    {
        printf("%c", out[i]);
    }
    cout<<endl;
    return 0;
}
