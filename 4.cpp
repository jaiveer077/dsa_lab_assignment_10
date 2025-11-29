#include <bits/stdc++.h>
using namespace std;
int firstNonRepeating(const vector<int>& a){
    unordered_map<int,int> freq;
    for(int x:a) ++freq[x];
    for(int x:a) if(freq[x]==1) return x;
    return INT_MIN; // sentinel meaning "no non-repeating"
}
int main(){
    vector<int> v={4,5,1,2,0,4}; // example
    int ans=firstNonRepeating(v);
    if(ans!=INT_MIN) cout<<ans<<"\n"; else cout<<"No non-repeating element\n";
    return 0;
}