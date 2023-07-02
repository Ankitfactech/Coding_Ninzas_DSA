int length(Node *head)
{
	//Write your code here
    int count=1;
    if(head==NULL){
        return 0;
    }
    
    else {
        Node* temp = head;
        while (temp->next != NULL) {
          count++;
          temp=temp->next;
        }
        return count;
    }

    
}