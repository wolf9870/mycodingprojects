#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j=(log10(n)+1);
    int x=0;
    while(n>0){
        int ld=n%10;
        x+=ld*(pow(10,j-1));
        n=n/10;
        j--;
    }
    cout<<x;

}