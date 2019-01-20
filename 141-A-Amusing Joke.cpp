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
    string inp1, inp2, inp3, add;
    cin>>inp1>>inp2>>inp3;
    add = inp1+inp2;
    sort(add.begin(), add.end());
    sort(inp3.begin(), inp3.end());
    //cout<<add<<endl;
    //cout<<inp3<<endl;
    if(add.compare(inp3)==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
