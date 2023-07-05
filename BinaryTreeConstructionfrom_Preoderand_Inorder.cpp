BinaryTreeNode<int> *Helper(int *preorder,int prestart,int preend,int *inorder,int instart,int inend){
	if(prestart>preend || instart>inend){
		return NULL;
	}
	
	int value = preorder[prestart];
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(value);
	int k=0;
	for(int i=instart;i<=inend;i++){
		if(preorder[prestart]==inorder[i]){
			k=i;
			break;
		}
	}
	root->left = Helper(preorder,prestart+1,prestart+(k-instart),inorder,instart,k-1);
	root->right =Helper(preorder,prestart+(k-instart)+1,preend,inorder,k+1,inend);
	return root;
}

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    // Write your code here
	int prestart=0;
	int preend=preLength-1;
	int instart=0;
	int inend = inLength-1;

	return Helper(preorder,prestart,preend,inorder,instart,inend);
}