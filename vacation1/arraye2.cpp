#include <bits/stdc++.h>
using namespace std;
int main(){
    int min_cost=1e9;
        int max_profit=0;
        for(int price:prices){
            if(price-min_cost>max_profit){
                max_profit=price-min_cost;
            }
            if(price<min_cost){
                min_cost=price;
            }
       }
       return max_profit;

        
        
}