#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        int a[n][n];
        for(int i=0; i<n; i++){
            a[0][i]=1;
        }
        for(int i=0; i<n; i++){
            a[i][0]=1;
        }

        for(int j=1; j<n; j++)
        {
            for(int i=1; i<n; i++)
            {
                a[i][j]=a[i][j-1]+a[i-1][j];
            }
        }
        cout<<a[n-1][n-1]<<endl;

    }
}
