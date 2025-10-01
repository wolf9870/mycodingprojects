#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int> vec(5,100);
vec.emplace_back(5);
vector<int> vec2(vec);
vec2.emplace_back(7);
vector<int>::iterator it=vec2.begin();
it++;
cout<<*it<<"     "; 
auto v={10,20,30};
vec2.insert(vec2.begin()+1,v.begin(),v.end());

for(int i=0;i<vec2.size();i++){
    cout<<vec2[i]<<"  ";
}
list<int>l;
l.push_back(5);
l.push_front(6);
cout<<l.back();
for(auto it : l){
    cout<<it<<" ";
}
set<int>st={1,2,3,4};
auto it1=st.find(3);
cout<<*it1;

}

       
     
