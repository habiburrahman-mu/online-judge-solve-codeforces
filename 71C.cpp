#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    int cs, len;
    string inp, out;
    while(cin>>cs)
    {
        for(int i=0; i<cs; i++)
        {
            cin>>inp;
            len = inp.size();
            if(len>10)
            {
                cout<<inp[0]<<len-2<<inp[len-1]<<endl;
            }
            else
            {
                out=inp;
                cout<<out<<endl;
            }
        }
    }
}
