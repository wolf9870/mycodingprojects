#include <bits/stdc++.h>
using namespace std;
string reverse(string s){
    
    
    reverse(s.begin(),s.end());
    return s;
}



int main(){
    string s1;
    int n;
    cin>>n;
    int m=2*n;
    for(int i=1;i<=n;i++){
        m=m-2*i;
        s1="";
        for(int j=1;j<=i;j++){
            s1+=to_string(j);
        }
        cout<<s1;
        for(int j=1;j<=m;j++){
            cout<<" ";

        }
        cout<<reverse(s1);
        cout<<endl;
        m=2*n;
}
}