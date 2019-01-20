#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    int temp,sum=0,k;
    while(cin>>n)
    {
        temp=n;
        int a[n+1],b[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
        }
        for(int j=1; j<n; j++)
        {
            for(int i=1; i<n; i++)
            {
                for(int k=1;; k++)
                {
                    sum=a[i]+(k-1)*b[i];
                    if(sum>a[i-1])
                    {
                        a[i]=sum;
                        break;
                    }
                }
            }
        }
        cout<<a[temp-1];
    }
    return 0;
}
