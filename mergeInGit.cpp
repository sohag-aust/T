#include<bits/stdc++.h>
using namespace std;

void reverse_name(string name){
    for(int i=name.size()-1;i>=0;i--){
        cout<<name[i];
    }
}

int main(){
    cout<<"Enter your name: ";
    string name;
    cin>>name;

    reverse_name(name);
    cout<<endl;
    return 0;
}
