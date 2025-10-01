#include <iostream>
#include<string>
using namespace std;
int main(){
    int x;
    int y;
    int REVx;
    string S;
    string revS;
    cin>>x;
    S=to_string(x);
    y=S.length();

    for(int i=0;i<y;i++){
        revS+=S[y-i-1];


    }
     if(x<0){
        revS.pop_back();
        cout<<revS;
        REVx=stoi(revS);
        cout<<-REVx;
        return -REVx;
        


    }
    else{
    REVx=stoi(revS);
    return REVx;
    }
    
    

}