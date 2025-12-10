class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,cnum=0;
        for(int num:nums){
            if(count==0){
                cnum=num;
            }
            if(cnum==num){
                count++;
            }
            else count--;
        }
        return cnum;
    }
};