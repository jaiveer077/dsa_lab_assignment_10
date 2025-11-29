#include <bits/stdc++.h>
using namespace std;
vector<int> commonElements(const vector<int>& A,const vector<int>& B){
    unordered_set<int> s(A.begin(),A.end()), out;
    for(int x:B) if(s.count(x)) out.insert(x);
    vector<int> res(out.begin(),out.end());
    sort(res.begin(),res.end());
    return res;
}
int main(){
    vector<int> A={1,2,3,4}, B={3,4,5,6}; // example
    auto ans=commonElements(A,B);
    for(size_t i=0;i<ans.size();++i){
        if(i) cout<<", ";
        cout<<ans[i];
    }
    cout<<"\n";
    return 0;
}