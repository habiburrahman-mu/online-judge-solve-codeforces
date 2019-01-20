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
    int a, b, a_temp, rem=0;
    int hr=0;
    cin>>a>>b;
    a_temp = a;
    for(int i=0; i<a; i++)
    {
        if(a_temp>b)
            rem += a_temp%b;
        a_temp = (a_temp/b)+(rem/b);
        hr = hr + a_temp;
    }
    hr = hr + a;
    cout<<hr<<endl;
}
