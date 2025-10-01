#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string>strs={""};
int y=10000;
string s="";
if(strs.empty()){
    cout<<s;
    return 0;
}

for (auto x : strs){
    
    if (x.size()<y){
        y=x.size();
    }
    else{
        continue;
    }
}
for(auto i=0;i<y;i++){
    char c=strs[0][i];
    s.push_back(c);
    for (auto x :strs){
        if(x[i]!=c){
            s.pop_back();
            cout<<s;
            return 0;
        }
        else{
            continue;
        }
    }
    
}
cout<<s;
return 0;

}
