#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n,len,f=1,cnt=0;

    cin>>n>>str;
    len=str.size();

    for(int i=0,j=len-1; i<len/2; i++,j--)
    {
        if(isalpha(str[i]) && isalpha(str[j]))
        {
            if(str[i]!=str[j])
            {
                f=0;
                break;
            }
        }

        else if(str[i]=='?' && str[j]=='?')
        {
            str[i]='b';
            str[j]='b';
            cnt+=2;
        }

        else if(str[i]=='?' && isalpha(str[j]))
        {
            str[i]=str[j];
            cnt++;
        }


        else if(isalpha(str[i]) && str[j]=='?')
        {
            str[j]=str[i];
            cnt++;
        }
    }

    if(!f)
        cout<<"IMPOSSIBLE"<<endl;

    else
        cout<<str<<endl;

    return 0;
}
