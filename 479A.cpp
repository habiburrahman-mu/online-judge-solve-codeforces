#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c, max;

    cin>>a>>b>>c;
    max=0;
    if(max<=(a+b*c))
        max=(a+b*c);
    if(max<=(a*(b+c)))
        max<=(a*(b+c));
    if(max<=(a*b*c))
        max=(a*b*c);
    if(max<=((a+b)*c))
        max=((a+b)*c);
    if(max<=(a+b+c))
        max=(a+b+c);
    if(max<=(a*(b+c)))
        max=(a*(b+c));

    cout<<max<<endl;
    return 0;
}
