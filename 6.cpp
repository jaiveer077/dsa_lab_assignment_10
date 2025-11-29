#include <bits/stdc++.h>
using namespace std;
struct TreeNode{int val; TreeNode* left; TreeNode* right; TreeNode(int v):val(v),left(nullptr),right(nullptr){}};
bool hasDuplicateInTree(TreeNode* root){
    if(!root) return false;
    unordered_set<int> seen;
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        TreeNode* cur=st.top(); st.pop();
        if(seen.count(cur->val)) return true;
        seen.insert(cur->val);
        if(cur->right) st.push(cur->right);
        if(cur->left) st.push(cur->left);
    }
    return false;
}
int main(){
    TreeNode* r=new TreeNode(5);
    r->left=new TreeNode(3);
    r->right=new TreeNode(7);
    r->left->left=new TreeNode(2);
    r->left->right=new TreeNode(3);
    cout<<(hasDuplicateInTree(r) ? "Duplicates Found" : "No Duplicates")<<"\n";
    delete r->left->left; delete r->left->right; delete r->left; delete r->right; delete r;
    return 0;
}