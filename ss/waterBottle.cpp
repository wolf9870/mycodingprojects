#include <bits/stdc++.h>
using namespace std;
int res(int a , int b){
        return a/b;
    }
int main(){
    int numBottles,numExchange;
    cin>>numBottles>>numExchange;
    int count=numBottles;
    int div=numBottles;
    int residual=0;
    while(div>=numExchange){
        residual=div%numExchange;
        div=res(div,numExchange);
        count+=div;
        div=div+residual;
    }
    
    cout<<count;
    
    
}