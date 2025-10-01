#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> st={1,2,3,4,5};
    auto it1=st.find(2);
    auto it2=st.find(4);
    
    st.erase(2);
    for (auto x : st){
        cout<<x;
    }
}