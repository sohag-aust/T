#include<bits/stdc++.h>
using namespace std;

void reverse_name(string name){
    if(name.size() == 0) return ;
    cout<<name[name.size()-1];
    reverse_name(name.erase(name.size()-1));
}

int main(){
    cout<<"Enter your name: ";
    string name;
    cin>>name;

    reverse_name(name);
    cout<<endl;
    return 0;
}

