int length(Node *head) {
    // Write your code here
	 if(head==NULL){
		return 0;
	}
	
	else if(head->next==NULL){
		return 1;
	}
	
	
	int smalloutput =  length (head->next);
	return smalloutput + 1;
}