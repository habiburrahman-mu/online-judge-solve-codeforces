#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;
bool isdivide(int num)
{
    int lucky[14]= {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for(int i=0; i<14; i++)
    {
        if(num%lucky[i]==0)
        return true;

    }
    return false;
}
int main()
{
    std::string inp;
    int flag=0, intg;
    while(cin>>inp)
    {
        intg = atoi(inp.c_str());
        flag=0;
        for(int i=0; i<inp.size(); i++)
        {
            if(inp[i]!='4' && inp[i]!='7')
            {
                if(!isdivide(intg))
                {
                    flag=1;
                }
            }

        }
        if(flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
