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

    int inp[3][3];
    bool out[3][3];
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            out[i][j] = true;
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin >> inp[i][j];
        }
    }

    if(inp[0][0]%2 != 0)
    {
        out[0][0] = !out[0][0];
        out[1][0] = !out[1][0];
        out[0][1] = !out[0][1];
    }
    if(inp[1][0]%2 != 0)
    {
        out[0][0] = !out[0][0];
        out[1][0] = !out[1][0];
        out[2][0] = !out[2][0];
        out[1][1] = !out[1][1];
    }
    if(inp[2][0]%2 != 0)
    {
        out[2][0] = !out[2][0];
        out[2][1] = !out[2][1];
        out[1][0] = !out[1][0];
    }
    if(inp[0][1]%2 != 0)
    {
        out[0][0] = !out[0][0];
        out[0][1] = !out[0][1];
        out[1][1] = !out[1][1];
        out[0][2] = !out[0][2];
    }
    if(inp[1][1]%2 != 0)
    {
        out[1][1] = !out[1][1];
        out[0][1] = !out[0][1];
        out[2][1] = !out[2][1];
        out[1][0] = !out[1][0];
        out[1][2] = !out[1][2];
    }
    if(inp[2][1]%2 != 0)
    {
        out[1][1] = !out[1][1];
        out[2][0] = !out[2][0];
        out[2][1] = !out[2][1];
        out[2][2] = !out[2][2];
    }
    if(inp[0][2]%2 != 0)
    {
        out[0][1] = !out[0][1];
        out[0][2] = !out[0][2];
        out[1][2] = !out[1][2];
    }
    if(inp[1][2]%2 != 0)
    {
        out[0][2] = !out[0][2];
        out[1][1] = !out[1][1];
        out[1][2] = !out[1][2];
        out[2][2] = !out[2][2];
    }
    if(inp[2][2]%2 != 0)
    {
        out[2][2] = !out[2][2];
        out[2][1] = !out[2][1];
        out[1][2] = !out[1][2];
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(out[i][j])
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}
