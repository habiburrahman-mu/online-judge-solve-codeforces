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
    int n;
    while(cin>>n)
    {
        int a[n], max=-1, max_pos=101, min=101, min_pos=-1, temp, coun=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>=max)
            {
                max=a[i];

            }
            if(a[i]<=min)
            {
                min=a[i];

            }
        }
        for(int i=0; i<n; i++)
        {
            if(max==a[i])
            {
                if(i<=max_pos)
                {
                    max_pos=i;
                }
            }
        }
        //cout<<max<<endl<<max_pos<<endl<<min<<endl<<min_pos;
        for(int i=max_pos; i>0; i--)
        {
            swap(a[i], a[i-1]);
            coun++;
        }
        for(int i=0; i<n; i++)
        {
            if(min==a[i])
            {
                if(i>=min_pos)
                {
                    min_pos=i;
                }
            }
        }
        for(int i=min_pos; i<n-1; i++)
        {
            swap(a[i], a[i+1]);
            coun++;
        }

        cout<<coun<<endl;

    }
    return 0;
}
