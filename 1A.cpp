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
    long long int n, m, a, res;
    while(cin>>n>>m>>a)
    {
        res=ceil(m/(double)a)*ceil(n/(double)a);
        cout<<res<<endl;
    }

    return 0;
}

