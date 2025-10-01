#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    int m=n;
    
    for(int i =1;i<=2*n;i++){
        
    if(i<=n){
        for(int j=1;j<=m-1;j++){
            
            cout<<" ";
        }
        m=m-1;
        
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        
        cout<<"\n";
    }
    else{
        int m=n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<i;j++){
                cout<<" ";
            }
            for(int k=1;k<=2*m-1;k++){
                cout<<"*";
            }
            cout<<endl;
            m=m-1;
        }
        return 0;
    }
    
}
}