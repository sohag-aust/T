#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    stack<int>st;

    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        st.push(v);
    }

    while(st.size()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}
