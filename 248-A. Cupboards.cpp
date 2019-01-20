#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstring>
#include<string>
#include<array>
#include<list>
using namespace std;


int main()
{
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout)
    int num, chng01 = 0, chng10 = 0, chng00=0, chng11=0;
    cin>>num;
    int arr[num][2];
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>arr[i][j];
        }

    }

    for(int i=0; i<num; i++)
    {
        //for 0 1 condition
        //for 1 0 condition
        if(arr[i][0]==0 && arr[i][1]==0)
        {
            chng01 += 1;
            chng10 += 1;
            chng00 += 0;
            chng11 += 2;
        }
        else if(arr[i][0]==0 && arr[i][1]==1)
        {
            chng01 += 0;
            chng10 += 2;
            chng00 += 1;
            chng11 += 1;
        }
        else if(arr[i][0]==1 && arr[i][1]==0)
        {
            chng01 += 2;
            chng10 += 0;
            chng00 += 1;
            chng11 += 1;
        }
        else if(arr[i][0]==1 && arr[i][1]==1)
        {
            chng01 += 1;
            chng10 += 1;
            chng00 += 2;
            chng11 += 0;
        }
    }
    cout<<min(chng00,min(chng10,min(chng01, chng11)))<<endl;
}
