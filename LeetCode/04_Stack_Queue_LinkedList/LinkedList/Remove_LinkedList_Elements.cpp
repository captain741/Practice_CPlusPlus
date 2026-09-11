class Solution{
	public:
		ListNode* removeElements(ListNode* head, int val){
			ListNode* dummy = new ListNode();
			ListNode* curr = dummy;
			dummy->next = head;
			while(curr->next){
				if(curr->next->val == val){
					curr->next = curr->next->next;
				}
				else{
					curr = curr->next;
				}
				}
			return dummy->next;
			}
};






