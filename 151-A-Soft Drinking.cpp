#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstring>
#include<string>
#include<array>
#include<list>
using namespace std;


int main()
{
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout)

    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int tot_l = k*l, tot_d = c*d;
    cout<<min(tot_l/nl,min(tot_d, p/np)) / n<<endl;
    return 0;
}
