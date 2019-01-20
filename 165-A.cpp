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
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int n;
    cin>>n;
    int inp[n][2], x, y, x_p, y_p, coun=0;
    for(int i=0; i<n; i++)
    {
        cin>>inp[i][0]>>inp[i][1];
    }
    for(int i=0; i<n; i++)
    {
        int res[4]={0,0,0,0};
        x = inp[i][0];
        y = inp[i][1];
        for(int j=0; j<n; j++)
        {
            x_p = inp[j][0];
            y_p = inp[j][1];
            if (i==j)
            {
                continue;
            }
            if(x_p>x && y_p==y)
            {
                res[0]=1;
                //cout<<"R"<<endl;
            }
            else if(x_p<x && y_p==y)
            {
                res[1]=1;
                //cout<<"Le"<<endl;
            }
            else if(x_p==x && y_p<y)
            {
                res[2]=1;
                //cout<<"Lo"<<endl;
            }
            else if(x_p==x && y_p>y)
            {
                res[3]=1;
                //cout<<"U"<<endl;
            }
        }
        if(res[0]==1 && res[1]==1 && res[2]==1 && res[3]==1)
            coun++;
    }
    cout<<coun<<endl;

    return 0;
}
