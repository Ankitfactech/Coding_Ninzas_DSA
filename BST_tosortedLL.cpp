
Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
	// Write your code here
	if(root==NULL){
		return NULL;
	}
	Node<int>* lefthead =constructLinkedList(root->left);
	Node<int>* newnode = new Node<int>(root->data);
	if(root->left == NULL){
		newnode->next = constructLinkedList(root->right); 
		return newnode;
	}
	// if(root->right==NULL){
	// 	newnode->next = NULL;
	// 	Node<int> *temp1 =constructLinkedList(root->left);
	// 	while(temp1->next !=NULL){
	// 		temp1 =temp1->next;
	// 	}
	// 	temp1->next = newnode;
	// 	return temp1;
	// }
	
	Node<int>* temp = lefthead;
	Node<int>* temp2 = temp;
	while(temp->next !=NULL){
		temp=temp->next;
	}
	// constructLinkedList(root->right);
	
	temp->next =newnode;
	newnode->next =constructLinkedList(root->right);;
	return temp2;
}