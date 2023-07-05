BinaryTreeNode<int>* Helper(int* postorder,int pstart , int pend ,int* inorder , int instart ,int inend){
	if(pstart > pend || instart > inend){
		return NULL;
	}
	int k =0;
	int data = postorder[pend];
	BinaryTreeNode<int>* root = new  BinaryTreeNode<int>(data);
	for(int i=instart;i<=inend;i++){
		if(inorder[i]==postorder[pend]){
			k=i;
			break;
		}
	}
	root->left = Helper(postorder,pstart,pstart+(k-instart-1),inorder,instart,k-1);
	root->right =Helper(postorder,pstart+(k-instart),pend-1,inorder,k+1,inend);
	return root;
}

BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
    // Write your code here
	int pstart = 0;
	int pend= postLength-1;
	int instart =0;
	int inend = inLength-1;

	return Helper(postorder,pstart,pend,inorder,instart,inend);

}