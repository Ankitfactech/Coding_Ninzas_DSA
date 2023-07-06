BinaryTreeNode<int> *helper(int *input,int left,int right){
	if(left > right) {
		return NULL;
	}
	int mid =( left+right)/2;

	
	BinaryTreeNode<int> *root=new BinaryTreeNode<int>(input[mid]);
	root->left = helper(input,left, mid-1);
	root->right = helper(input,mid+1,right);
	return root;

}

BinaryTreeNode<int> *constructTree(int *input, int n) {
  // Write your code here
  return helper(input,0,n-1);
        

}