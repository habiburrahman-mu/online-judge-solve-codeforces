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
    int k,l,m,n,d, coun=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1; i<=d; i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        {
            coun++;
        }
    }
    cout<<coun<<endl;
    return 0;
}
