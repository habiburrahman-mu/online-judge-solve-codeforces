#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstring>
#include<string>
#include<array>
using namespace std;


int main()
{
    int num;
    cin>>num;
    if(num%2!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=1; i<=num; i+=2)
        {
            cout<<i+1<<" "<<i<<" ";
        }
    }
}
