#include<string>
#include<vector>
#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<climits>
#include<stack>
using namespace std;

struct ListNode {
    int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {

public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* previousTargetNode = nullptr;
        ListNode* targetNode = nullptr;
        ListNode* currentNode = head;
        stack<ListNode*> sequenceNodes;
        while(currentNode != nullptr) {
            sequenceNodes.push(currentNode);
            currentNode = currentNode->next;
        }

        for (int i = 0; i < n; i++) {
            targetNode = sequenceNodes.top();
            sequenceNodes.pop();
        }
        if (!sequenceNodes.empty()) {
            previousTargetNode = sequenceNodes.top();
            previousTargetNode->next = targetNode->next;
        } else {
            head = targetNode->next;
        }
        
        return head;
        
    }

    ListNode* removeNthFromEndFastest(ListNode* head, int n) {
        ListNode* start =new ListNode;
        start->next=head;

        ListNode* fast=start;
        ListNode* slow=start;

        for(int i=0;i<n;i++){
            fast=fast->next;
        }

        while(fast->next!=0){
            fast=fast->next;
            slow=slow->next;
        }
        
        slow->next=slow->next->next;

        return start->next;
    }

};


int main() {
    Solution s;
    ListNode n1;
    ListNode n2;
    ListNode n3;
    ListNode n4;
    ListNode n5;

    n1.val = 1;
    n2.val = 2;
    n3.val = 3;
    n4.val = 4;
    n5.val = 5;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    ListNode* head = s.removeNthFromEnd(&n1, 2);

    while(head !=nullptr) {
        cout << head->val << ' ';
        head = head->next;
    }


    ListNode n6;
    n6.val = 1;

    ListNode* head2 = s.removeNthFromEnd(&n6, 1);

    while(head2 !=nullptr) {
        cout << head2->val << ' ';
        head2 = head2->next;
    }

    return 0;
}