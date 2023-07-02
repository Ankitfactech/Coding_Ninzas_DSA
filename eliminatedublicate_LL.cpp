Node *removeDuplicates(Node *head)
{
    //Write your code here
	
	

	Node*temp = head;
	if(head == NULL){
		return head;
	}
	while(temp->next !=NULL){
		if(temp->data==temp->next->data){
			temp->next = temp->next->next;
                } else {
                  temp = temp->next;
                }
        }
	return head;
}