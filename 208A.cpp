#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<string>
#include<cstring>

using namespace std;

string str;
char strout[200];;
int len, j, flag=0;
int main()
{
    while(cin>>str)
    {
        j=0, flag=0;
        len = str.size();
        j=0;
        for(int i=0; i<len;)
        {
            if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
            {

                if(i!=0 && j!=0 && flag!=1)
                {
                    strout[j]=' ';
                    j++;
                }

                i=i+3;
                flag=1;
            }
            else
            {
                strout[j]=str[i];
                j++;
                i=i+1;
                flag=0;
            }
        }
        for(int i=0; i<j; i++)
        {
            cout<<strout[i];
        }
        cout<<endl;
    }

    return 0;
}

