void printIthNode(Node *head, int i)
{
    //Write your code here
	int count =0;
	if(head==NULL){
		return;
	}
	
		Node*temp=head;
		while(count != i){
			count++;
			temp=temp->next;

		}
	
	cout <<temp->data;
}