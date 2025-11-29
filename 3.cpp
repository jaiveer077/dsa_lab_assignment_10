#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> frequencyCount(const vector<int>& a){
    unordered_map<int,int> freq;
    for(int x:a) ++freq[x];
    return freq;
}
int main(){
    vector<int> v={2,3,2,4,3,2}; 
    auto freq=frequencyCount(v);
    vector<pair<int,int>> items(freq.begin(),freq.end());
    sort(items.begin(),items.end());
    for(auto &p:items) cout<<p.first<<" -> "<<p.second<<" times\n";
    return 0;
}