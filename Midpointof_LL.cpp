Node *midPoint(Node *head)
{
    // Write your code here
	Node*fast = head;
	Node*slow = head;
	while(fast !=NULL){
		fast= fast->next->next;
		slow = slow->next;
	}
	return slow;
}