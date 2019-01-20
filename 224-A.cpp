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
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int s1,s2,s3, a, b, c;
    cin>>s1>>s2>>s3;
    a = sqrt((s1*s3)/s2);
    b = sqrt((s1*s2)/s3);
    c = sqrt((s2*s3)/s1);
    cout<<4*(a+b+c)<<endl;

    return 0;
}
