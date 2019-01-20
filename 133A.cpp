#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
using namespace std;

int main()
{
    string inp;
    int flag=0;
    while(cin>>inp)
    {
        flag=0;
        for(int i=0; i<inp.size(); i++)
        {
            if(inp[i]=='H' || inp[i]=='Q' || inp[i]=='9')
            {
                flag=1;
                break;
            }

        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
