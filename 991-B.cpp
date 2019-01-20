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
#include<vector>
using namespace std;

float avr (const vector<int>& V)
{
    float sum=0, avr;
    for(int i=0; i < V.size(); i++)
        sum+=V[i];
    //cout<<sum<<endl;
    avr = sum/float(V.size());
    return avr;

}

int main()
{
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int n, input, chng=0;
    cin>>n;
    vector <int> inp;
    for(int i=0; i<n; i++)
    {
        cin>>input;
        inp.push_back(input);
    }
    sort(inp.begin(),inp.begin()+ n);
    for(int i=0; i < inp.size(); i++)
    {
        if(avr(inp)<4.5)
        {
            inp[i]=5;
            chng++;
        }
        else
        {
            //cout<<avr(inp)<<endl;
            break;
        }
    }
    cout<<chng<<endl;

}
