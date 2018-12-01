#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,s="";
    int val,ca=0,cd,len;

    cin>>str;
    len=str.size();

    for(int i=0; i<len; i++)
    {
        if(str[i]=='d' && str[i+1]=='o' && str[i+2]=='t')
        {
            if(s.size()>0)
                cout<<s;

            if(i==0 || i+2==len-1)
                cout<<"dot";

            else
                cout<<".";

            i+=2;

            s.clear();
        }

        else if(str[i]=='a' && str[i+1]=='t')
        {
            if(s.size()>0)
                cout<<s;

            if(i==0 || i+1==len-1)
                cout<<"at";

            else
            {
                if(ca==0)
                    cout<<"@";

                else
                    cout<<"at";

                ca++;
            }

            i++;

            s.clear();
        }

        else
            s+=str[i];
    }

    if(s.size()>0)
        cout<<s;

    cout<<endl;

    return 0;
}
