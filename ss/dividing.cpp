#include <iostream>
using namespace std;
int x;
int y;
int j=0;
int z=0;
int main(){
    cout<<"Enter dividend ";
    cin>>x;
    cout<<"Enter divisor ";
     cin>>y;
    int px=abs(x);
    int py=abs(y);
     
     for(int i=0;i<px+1;i++){
       
        
        if(z<=px){
            z+=py;
            j++;
        }
        
    
     }
    
    
    if(x<0 || y<0){
        cout<<-j+1;
    }
    else{
        cout<<j-1;
    }






}