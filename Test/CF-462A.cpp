#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,f=1,x;
    char ara[100][100];

    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>ara[i][j];
    }

    for(int i=0;i<n;i++)
    {
        x=0;
        for(int j=0;j<n;j++)
        {
            if(ara[i][j]=='x')
                x++;
        }

        if(x%2!=0)
        {
            f=0;
            break;
        }
    }

    if(f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
