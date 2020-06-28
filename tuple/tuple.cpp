#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    tuple<int, string, double> student;
    vector<tuple<int, string, double> >v;

    for(int i=0;i<n;i++){
        int id;
        string name;
        double mark;

        student = make_tuple(id, name, mark);
        v.push_back(student);
    }

    for(int i=0;i<v.size();i++){
        cout<<get<0>(v[i])<<" "<<get<1>(v[i])<<" "<<get<2>(v[i])<<endl;
    }

    return 0;
}
