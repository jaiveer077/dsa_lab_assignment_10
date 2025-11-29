#include <bits/stdc++.h>
using namespace std;
struct ListNode{int val; ListNode* next; ListNode(int v):val(v),next(nullptr){}};
bool hasCycle(ListNode* head){
    // Hashset approach (O(n) time,O(n) space)
    unordered_set<ListNode*> seen;
    while(head){
        if(seen.count(head)) return true;
        seen.insert(head);
        head=head->next;
    }
    return false;
}
// helper to build example list with cycle 1->2->3->4->2
ListNode* buildExampleWithCycle(){
    ListNode* n1=new ListNode(1);
    ListNode* n2=new ListNode(2);
    ListNode* n3=new ListNode(3);
    ListNode* n4=new ListNode(4);
    n1->next=n2; n2->next=n3; n3->next=n4; n4->next=n2;
    return n1;
}
int main(){
    ListNode* head=buildExampleWithCycle();
    cout<<(hasCycle(head) ? "true" : "false")<<"\n";
    return 0;
}