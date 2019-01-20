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
    int n,m, ans(0);
    cin>>n>>m;
    for(int a=0; a*a<=n && a<=m; a++){
        int b = n-a*a;
        if(a+b*b == m)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}
