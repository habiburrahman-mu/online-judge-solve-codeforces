#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int mem[100];
bool found(int num, int j)
{
    for(int i=0; i<=j; i++)
    {
        if(mem[i]==num)
        {
            return true;
            break;
        }
        else
        {
            if(i==j)
            {
                return false;
            }

        }
    }
}

int main()
{
    int num, j=0;
    scanf("%d", &num);
    int arr[num];
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<num; i++){
        if(!found(arr[i], j) && arr[i]!=0)
        {
            j++;
            mem[j]=arr[i];
        }
    }
    printf("%d\n", j);

}
