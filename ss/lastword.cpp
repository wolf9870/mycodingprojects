#include <iostream>
using namespace std;
#include<string>
int main (){
    string s;
    getline(cin,s);
    int b=0;
    int a=s.length()-1;
    cout<<a<<" ";
    for(int i=a;i>-1;i--){
        char c=s[i];
        if(isalpha(c)){
            int j=0;
            while(isalpha(s[i-j-1])){
                j++;
                b+=1;

            }
             
            
            break;
        }
     
         
        else{
           continue;
        }
    }
    cout<<b+1;
            return b+1;
   
} 