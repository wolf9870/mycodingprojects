#include <bits/stdc++.h>
using namespace std;
int main(){
    //nums vector,target int
    vector<int>nums={1,3,4,5};
    int n=nums.size();
    int high=n-1,low=0,mid,target=2;
    while(high>=low){
        mid=low+(high-low)/2;
        if(nums[mid]==target){
            cout<<mid;
            return mid;
        }
        else if(target>nums[mid]){
            low=mid+1;
        }
        else high=mid-1;

    }
    cout<<low;
    

    
}