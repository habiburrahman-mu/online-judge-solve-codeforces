#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
using namespace std;

int main()
{
    string inp;
    while(cin>>inp)
    {
        int count=0;
        for(int i=0; i<inp.size(); i++)
        {
            if(isupper(inp[i]))
                count++;
        }

        if(count==inp.size())
        {
            for(int i=0; i<inp.size(); i++)
            {
                inp[i]=tolower(inp[i]);
            }
            cout<<inp<<endl;
            count=0;
            continue;
        }
        else if(islower(inp[0]))
        {
            count=0;
            for(int i=1; i<inp.size(); i++)
            {
                if(isupper(inp[i]))
                    count++;
            }
            if(count==(inp.size()-1))
            {
                for(int i=0; i<inp.size(); i++)
                {
                    if(islower(inp[i]))
                        inp[i]=toupper(inp[i]);
                    else
                        inp[i]=tolower(inp[i]);

                }
                cout<<inp<<endl;
                count=0;
                continue;
            }
            else
                cout<<inp<<endl;

        }
        else{
            cout<<inp<<endl;
        }
    }
}
