#include <bits/stdc++.h>
using namespace std;
int main(){
    //vec hai nums 
    vector<int> nums={1,1,1,2,2,4,4,3,3};
    vector<int> temp;
    sort(nums.begin(),nums.end());
    for(auto x : nums){
        if(find(temp.begin(),temp.end(),x)!=temp.end()){
            continue;
        }
        else{
            temp.emplace_back(x);
        }
        
    }
    nums.insert(nums.begin(),temp.begin(),temp.end());
    for(auto x : nums){
        cout<<x<<" ";
    }    
    int k=0;
    for(auto x:temp){
        cout<<x;
        k++;
    }
    cout<<k;
}