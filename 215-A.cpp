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
    int n,m;
    cin>>n;
    int n_ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>n_ar[i];
    }
    cin>>m;
    int m_ar[m];
    for(int i=0; i<m; i++)
    {
        cin>>m_ar[i];
    }

    int gear[m*n];
    int coun=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(m_ar[i]%n_ar[j]==0)
            {
                gear[coun++]=m_ar[i]/n_ar[j];
            }
        }
    }

    sort(gear, gear+coun);
    /*for(int i=0; i<coun; i++)
    {
        cout<<gear[i]<< " ";
    }
    cout<<endl;*/
    int c = 1;
    int max = gear[coun-1];
    for(int i=coun-2; i>=0; i--)
    {
        if(gear[i]==max)
        {
            c++;
        }
        else
        {
            break;
        }
    }
    cout<<c<<endl;
}
