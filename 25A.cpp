#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
bool isSame (int num1, int num2)
{
    if((num1%2)==0 && (num2%2)==0)
        return true;
    if((num1%2)!=0 && (num2%2)!=0)
        return true;
    else
        return false;
}
int main()
{
    int tot;
    cin>>tot;
    int arr[tot], i , found, j;
    for(i=0; i<tot; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<tot-1; i++)
    {
            if(isSame(arr[i], arr[i+1]))
            {
                continue;
            }
            else
            {
                found = i+1;
            }
    }
    cout<<found<<endl;
}
