#include <iostream>
#include <string>
using namespace std;
string s;
int i=0;
char c;
char e;
char d;
int main(){
    cout<<"Enter Vanity license plate in uppercase : ";
    cin>>s;
    if(s.size()<=6 && s.size()>=2){
        for(i=0;i<s.size();i++){
            char c=s[i];
            if(ispunct(c)){
                cout<<"Invalid";
                return 0;
            }
            if(isdigit(c)){
                char d=s[i+1];
                char e=s[i-1];
                if(c=='0' && isalpha(e)){
                    
                    cout<<"Invalid";
                    return 0;
                }
                
                if(isalpha(d)){
                     
                     cout<<"Invalid";
                     return 0;
                }
                else{
                    continue;
                }
            }
        }
        cout<<"Valid";
        return 1;
    }
        else{
            cout<<"Invalid";
            return 0;
        }
}

