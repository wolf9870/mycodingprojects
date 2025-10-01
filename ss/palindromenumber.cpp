#include <iostream>
#include <string>
using namespace std;
string num;
string pnum;
int i;
int main(){
    cout<<"Enter the number: ";
    cin>>num;
    int a=num.length()-1;
    for(i=0;i<num.length();i++)
    {
        int b=a-i;
        char c=num[b];
        pnum+=c;
        
        
        
    }
    if(num==pnum){
        cout<<"Palindrome number";
    }
    else{
        cout<<"Not a Palindrome number";
    }
    return 0;
}
