#include <iostream>
using namespace std;
int a=0;
int b=0;
int main(){
    cout<<"Enter the number: ";
    cin>>a;
    for(int i=0;i>-1;i++){
        b=i*i;
        if(b<=a){
            continue;
        }
        else{
            cout<<i-1;
            return 0;
        }

    }
}