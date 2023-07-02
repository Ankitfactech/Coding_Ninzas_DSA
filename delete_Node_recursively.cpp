
Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
	if(head==NULL){
		return NULL;
	}
	if(pos==0){
		head=head->next;
		return head;
	}
// if(pos==1){
// 	Node*temp=head;
// 	temp=temp->next;
// 	head->next=head->next->next;
	
// 	return head;
// }
 
 head->next= deleteNodeRec(head->next,pos-1);
 return head;
}