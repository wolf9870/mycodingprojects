#include <iostream>
#include <string>
using namespace std;
string needle;
string haystack;
string check;
int main(){
    cout<<"Enter Haystack: ";
    cin>>haystack;
    cout<<"Enter Needle: ";
    cin>>needle;
    int a =needle.length();
    for(int i=0;i<haystack.length();i++){
        for(int j=0;j<a;j++){
        check+=haystack[i+j];
        
        }


        if(check==needle){
            cout<<i;
            return i;

        }
        else{
            check.clear();
            continue;
        }
    }
    cout<<-1;
    return -1;
}

