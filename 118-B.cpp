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

#define fr(a,b) for(int i=a; i<b; i++)
#define fr_e(a,b) for(int i=a; i<=b; i++)
#define fr_rev(a,b) for(int i=a-1; i>=b; i--)

using namespace std;

int main()
{
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int n; cin>>n;
    for(int i=0; i<2*n+1; i++) {
        for(int j=0; j<abs(2*n-2*i); j++) {
            cout<< " ";
        }
        if(i>n) {
            for(int j=0; j<=abs(i-2*n); j++) {
                cout<<j;
                if(i!=abs(2*n-2*i))
                    cout<<" ";
            }
            for(int j=2*n-i-1; j>=0; j--) {
                cout<<j;
                if(j!=0)
                    cout<<" ";
            }
        }
        else
        {
            for(int j=0; j<=i; j++) {
                cout<<j;
                if(i!=0)
                    cout<< " ";
            }
            for(int j=i-1; j>=0; j--) {
                cout<<j;
                if(j!=0)
                    cout<<" ";
            }
        }
        cout<<endl;
    }
}
