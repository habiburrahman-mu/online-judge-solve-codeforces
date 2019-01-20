#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstring>
#include<string>
#include<array>
using namespace std;
int prime[15]= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
int frst_pos, last_pos;
int isinList(int num)
{
    for(int i=0; i<15; i++)
    {
        if(num==prime[i])
        {
            int pos=i;
            return pos;
        }

    }
    return -1;
}

int main()
{


    int frst, last;
    cin>>frst>>last;
    frst_pos = isinList(frst);
    if(frst_pos!=-1)
    {
        last_pos=isinList(last);
        if(last_pos!=-1)
        {
            if(frst_pos==last_pos-1)
                cout<<"YES";
            else
                cout<<"NO";
        }
        else
            cout<<"NO";
    }
    else
        cout<<"NO";
    return 0;
}
