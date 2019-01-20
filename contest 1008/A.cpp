#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstring>
#include<string>
#include<array>
#include<list>
#include<map>
using namespace std;

bool isVowel(char ch)
{
    if(ch=='a' || ch=='o' || ch=='u' || ch=='i' || ch=='e')
    {
        return true;
    }
    return false;
}

int main()
{
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    string s;
    cin>>s;
    int n = s.size(), flag=0;
    //cout<<n<<endl;
    for(int i=0; i<n; i++)
    {
        if(i!=n-1)
        {
            if(s[i]=='n')
                continue;
            if(isVowel(s[i]) && isVowel(s[i+1]))
            {
                flag = 1;
            }
            else if(isVowel(s[i]) && !isVowel(s[i+1]))
            {
                flag = 1;
            }
            else if(!isVowel(s[i]) && isVowel(s[i+1]))
            {
                flag = 1;
            }
            else if(!isVowel(s[i]) && !isVowel(s[i+1]))
            {
                flag = 0;
                break;
            }
        }
        else
        {
            if(isVowel(s[i]) || s[i]=='n')
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
