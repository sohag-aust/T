#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    queue<int>q;

    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        q.push(v);
    }

    while(q.size()){
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}
