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
    int m, n, coun, boug;
    cin>>n>>m;
    boug = n/m;
    coun = n+boug;
    while((coun-n)>=m)
    if( (coun-n)>=m )
    {
        boug = (coun-n)/m;
        coun+= boug;
    }
    if(coun%m == 0)
    {
        coun++;
    }
    cout << coun << endl;
    return 0;
}
