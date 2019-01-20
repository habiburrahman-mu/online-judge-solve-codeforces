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
    double num;
    cin>>num;
    double sum = 0, per;
    for(int i=0; i<num; i++)
    {
        cin>>per;
        sum+=per;
    }
    //cout<<sum<<" "<<sum/num;
    printf("%.10f\n", double(sum/num));
}
