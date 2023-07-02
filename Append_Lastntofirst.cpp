Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
	Node* temp=head;
	Node*prev=head;
	int count =1;
	while(temp->next != NULL){
		temp= temp->next;
		count++;
	}
	int m = count-n;
	for(int i=1;i<m;i++){
		prev = prev->next;
	}
	temp->next = head; 
	head = prev->next;
	prev->next = NULL;	
	
return head;
}