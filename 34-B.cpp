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
    int tot_tv;
    cin>>tot_tv;
    int can_carry;
    cin>>can_carry;
    int prc[tot_tv], temp, coun=0;
    for(int i=0; i<tot_tv; i++)
    {
        cin>>temp;
        if(temp<0)
        {
            prc[coun++]=-temp;
        }
    }
    sort(prc, prc+coun);
    int sum=0;
    for(int i=coun-1; i>=0 && can_carry>0; i--)
    {
        can_carry--;
        sum=sum+prc[i];

    }
    cout<<sum<<endl;
}
