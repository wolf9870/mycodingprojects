#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,2,2,4,5};
    int val =2;
    multiset<int>ms(nums.begin(),nums.end());
    nums.clear();
    ms.erase(val);
    nums.insert(nums.begin(),ms.begin(),ms.end());
    
    for(auto x: nums){
        cout<<x;
    }
    cout<<ms.size();
    
}