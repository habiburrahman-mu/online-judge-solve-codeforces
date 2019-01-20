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
    int n,a,b;
    cin>>n>>a>>b;
    cout<<n-max(a+1, n-b)+1<<endl;
}
