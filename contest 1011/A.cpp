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

#define fr(a,b) for(int i=a; i<b; i++)
#define fr_e(a,b) for(int i=a; i<=b; i++)
#define fr_rev(a,b) for(int i=a-1; i>=b; i--)

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int len = n;
    string s;
    cin>>s;
    if(n<=k)
    {
        cout<<-1<<endl;
        return 0;
    }
    sort(s.begin(), s.end());
    int w_coun=0, maxim=0, last_take=0;
    for(int i=0; i<len; i++)
    {

        if(w_coun>=k)
        {
            cout<<maxim<<endl;
            return 0;

        }
        if(int(s[i])-last_take>1)
        {
            last_take = int(s[i]);
            w_coun++;
            maxim = maxim+int(s[i])-96;
        }

    }
}
