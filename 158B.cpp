#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    int cs, lim, sum;
    while(cin>>cs)
    {
        lim=0;
        sum=0;
        int inp[cs], coin=0;
        for(int i=0; i<cs; i++)
        {
            cin>>inp[i];
            sum+=inp[i];
        }
        lim=sum/2;
        sort(inp, inp+cs);
        sum=0;
        for(int i=cs-1; i>=0; i--)
        {
            sum+=inp[i];
            coin++;
            if(sum>lim)
            {
                break;
            }
        }
        cout<<coin<<endl;
    }
    return 0;
}
