#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    int work, cdo, cdo_time, sum, work_time;
    while(cin>>work)
    {
        work_time=0;
        sum=0;
        int time[work];
        cin>>cdo>>cdo_time;

        for(int i=0; i<work; i++)
            cin>>time[i];

        for(int i=0; i<work-cdo; i++)
        {
            sum+=time[i];
        }
        work_time=(sum)+(cdo*cdo_time);
        cout<<work_time<<endl;

    }
    return 0;
}
