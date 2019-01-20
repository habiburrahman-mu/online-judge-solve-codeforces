#include <iostream>
#include <cstdio>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    int n ;
    while(cin>>n)
    {
        int m, min=1001, max=0, over_dif=1001, dif=1001;
        cin>>m;
        int puz[m];
        for(int i=0; i<m; i++)
        {
            cin>>puz[i];
        }
        sort(puz, puz+m);
        for(int i=0, j=n-1; j<m; i++, j++)
        {
            min=1001;
            max=0;
            for(int k=i; k<=j; k++)
            {
                if(puz[k]>=max)
                {
                    max=puz[k];
                }

            }
            for(int k=i; k<=j; k++)
            {
                if(puz[k]<=min)
                {
                    min=puz[k];
                }

            }

            dif=max-min;
            //cout<<max<<" "<<min<<" "<<dif<<" "<<endl;
            if(dif<=over_dif)
            {
                over_dif=dif;
            }

        }
        cout<<over_dif<<endl;
    }

    return 0;

}
