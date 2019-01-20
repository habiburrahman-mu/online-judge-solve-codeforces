#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    int n, num, cap, coun;
    while(cin>>n)
    {
        coun=0;
        for(int i=0; i<n; i++)
        {
            cin>>num>>cap;
            if(num!=cap && (cap-num)>=2)
            {
                coun++;
            }
        }
        cout<<coun<<endl;
    }
    return 0;
}
