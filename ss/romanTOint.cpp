#include <bits/stdc++.h>
using namespace std;
int main(){
string n="";
cin>>n;
int n;
map<char,int> priority={
    {'I',1},
    {'V',5},
    {'X',10},
    {'L',50},
    {'C',100},
    {'D',500},
    {'M',1000},
    
  };
for(int i=0;i<n.size() && i+1!=n.size();i++){
    auto current=n[i];
    auto next=n[i+1];
    if(priority[current]<priority[next]){
      n=num-priority[current];
        }
    else{
      n=num+priority[current];
    }

  }
num=num+priority[n[n.size()-1]];
cout<<num;

  }
