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
    int clm;
    cin>>clm;
    int ar[clm], i, j, temp;
    for(i=0; i<clm; i++)
    {
        cin>>ar[i];
    }
    for(i = clm-1 ; i > 0; i--)
    {
        for(j = i-1; j>=0; j--)
        {
            if(ar[j]>ar[i])
            {
                temp = ar[i];
                ar[i] = ar[i] + (ar[j] - ar[i]);
                ar[j] = ar[j] - (ar[j]-temp);
            }
        }
    }
    for(i=0; i<clm; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
