Node* InsertNode(Node *head, int pos, Node* newNode)
{
	if(head==NULL){
		return newNode;
	}
if(pos==0){
	newNode->next = head;
	head=newNode;
	return head;
}
head->next = InsertNode(head->next,pos-1,newNode);
return head;
	
}