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
    int n, count=0, flag=1;
    cin>>n;
    string str;
    cin>>str;
    int max = n-(n/2);
    for(int i=0; i<n; i++)
    {
        if(i==n-1 && str[i]=='1')
        {
            count++;
        }
        if(str[i]=='1')
        {
            if(str[i+1]=='0')
            {
                count++;
            }
            else
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1 && count==max)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
