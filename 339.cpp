#include<iostream>
#include<cstdio>
#include<cctype>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inp;
    int in[100], j=0, n;
    while(cin>>inp)
    {
        j=0;
        for(int i=0; i<inp.size(); i++)
        {
            if(i%2==0)
            {
                in[j]=inp[i]-'0';
                j++;
            }
        }
        n=sizeof(in)/sizeof(in[0]);
        sort(in, in+j);
        for(int i=0; i<j; i++)
        {
            if(i!=0){
                cout<<"+";
            }
            cout<<in[i];

        }
        cout<<"\n";

    }
}
