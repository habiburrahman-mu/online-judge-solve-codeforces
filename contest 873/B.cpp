#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    string s;
    int n, one, zero, maxlen, len;
    while(cin>>n)
    {
        cin>>s;
        maxlen=0;
        for(int i=0; i<n; i++)
        {

            for(int j=i+1; j<n; j++)
            {
                one=0;
                zero=0;
                for(int k=i; k<=j; k++)
                {
                    if(s[k]=='1')
                        one++;
                    if(s[k]=='0')
                        zero++;
                }
                if(one==zero)
                {
                    len=j-i+1;
                    if(len>maxlen)
                    {
                        maxlen=len;
                    }
                }
            }
        }
        cout<<maxlen<<endl;
    }
    return 0;
}
