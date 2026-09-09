class Solution{
	public:
		ListNode* middleList(ListNode* head){
                ListNode* slow = head;
	        ListNode* fast = head;
	          while(fast && fast->next){
	        slow = slow->next;
                fast = fast->next;
	          }  
                return slow;
		}
}		
