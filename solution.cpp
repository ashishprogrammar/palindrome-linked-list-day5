#include<iostream>
using namespace std;
class ListNode{
  public:
  int data;
  ListNode* next;
  ListNode(int value){
    data=value;
    next=NULL;
  }
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        // Step 1: Find the middle of the list using slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list
        ListNode* prev = NULL;
        ListNode* curr = slow;
        while (curr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }

        // Step 3: Compare the first half and the reversed second half
        ListNode* firstHalf = head;
        ListNode* secondHalf = prev;
        while (secondHalf) {
            if (firstHalf->val != secondHalf->val)
                return false;
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};
int main(){
    // Example: Linked list = 1 -> 2 -> 2 -> 1 (Palindrome)
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    
    Solution sol; // creating a object of solution class
    bool isPalin = sol.isPalindrome(head);

    cout << "Is Palindrome ? " << (isPalin ? "Yes" : "No") << endl;

    // Clean up memory
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
