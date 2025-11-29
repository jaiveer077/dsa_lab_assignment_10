#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(const vector<int>& a){
    unordered_set<int> s;
    for(int x:a){
        if(s.find(x)!=s.end()) return true;
        s.insert(x);
    }
    return false;
}
int main(){
    vector<int> v={1,2,3,1}; 
    cout<<(containsDuplicate(v) ? "true" : "false")<<"\n";
    return 0;
}