#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> list1;
    list<int> list2;

    list1.emplace_back(1);
    list1.emplace_back(2);
    list1.emplace_back(4);
    list2.emplace_back(1);
    list2.emplace_back(2);
    list2.emplace_back(3);
    list1.insert(list1.begin(),list2.begin(),list2.end());
    list1.sort();
    for( auto x : list1){
        cout<<x;
    }


}