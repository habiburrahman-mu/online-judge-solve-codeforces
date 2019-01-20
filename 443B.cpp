#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long k;
    cin>>k;
    int a[n], flag=1, cn=0, i, max=0, temp;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
        }

    }
    if(k>=n)
    {
        cout<<max<<endl;
        return 0;
    }
    for(i=1; i<n; i++)
    {
        if(a[0]>a[i])
        {
            cn++;
            if(cn>=k)
            {
                cout<<a[0]<<endl;
                return 0;
            }
            continue;
        }
        else
        {
            temp=a[0];
            for(int j=0; i<n-1; i++)
            {
                a[j]=a[j+1];
            }
            a[n-1]=temp;
            cn=0;
        }
        i=1;
    }

    return 0;
}
