#include <iostream>
#include <string> 
#include <vector> // Required for std::string
using namespace std;

int main() {
    vector<int> comp1;
    vector<int> comp10;
    vector<int> comp100;
    vector<int> comp1000;
    int total = 0, n1 = 0, n10 = 0, n100 = 0, n1000 = 0, n5 = 0, n50 = 0, n500 = 0;
  // Initialize to 0
   
    string num;
    cout << "Enter the Roman number: ";
    cin >> num;

    for (int i = 0; i < num.size(); i++) {  // Use semicolons
        if (num[i]=='V'){
            n5=i+1;
            total+=5;
        }
        else if (num[i]=='D'){
            n500=i+1;
            total+=500;
        }
        else if (num[i]=='L'){
            n50=i+1;
            total+=50;
            
        }
        else if (num[i]=='M'){
            n1000=i+1;
            total+=1000;
             
        }
        else if (num[i]=='C'){
            n100=i+1;
            total+=100;
         }   
         
        else if (num[i]=='X'){
            n10=i+1;
            total+=10;
                  
         }
        else if (num[i] == 'I') { 
            n1=i+1;
            total+=1;
        }
    }    
 
    if(n1 != 0 || n10 != 0 || n100 != 0){
        if(n1<n10 || n1<n5){
        total-=2;
        }
    
    
    
        if(n10<n100 || n10<n50){
        total-=20;
        }
    
    
        if(n100<n1000 || n100<n500){
        total-=200;
        }
    }
    
    
  
  
cout<<total;
return 0;
}


