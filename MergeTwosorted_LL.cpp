Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
	Node* head;
	Node* temp ;
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){

		return head1;
	}
	if(head1->data < head2->data){
		head = head1;
		temp=head1;
		head1=head1->next;

	}
	else {
		head=head2;
		temp=head1;
		head2=head2->next;
	}
	while(head1 !=NULL && head2!=NULL){
		if(head1->data<head2->data){
			temp->next = head1;
			temp=temp->next;
			head1 = head1->next;

		}
		else{
			temp->next =head2;
			temp= temp->next;
			head2= head2->next;
		}
		}
		if(head1==NULL){
			temp->next =head2;
		}
		if(head2==NULL){
			temp->next = head1;
		}
	return head;

}