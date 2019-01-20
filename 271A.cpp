#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    int y;
    while(cin>>y)
    {
        int sep[4], remainder,j, flag=0, i=3;
        for(j=y+1; flag!=1; j++)
        {
            int year=j;
            i=3;
            while(year>0)
            {
                remainder=year%10;
                year=year/10;
                sep[i]=remainder;
                i--;
            }
            for(int k=0; k<4; k++)
            {
                for(int l=k+1; l<4; l++ )
                {
                    if(sep[k]!=sep[l])
                    {
                        flag=1;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==0)
                {
                    break;
                }
            }

        }
        cout<<j-1<<endl;
    }

    return 0;
}
