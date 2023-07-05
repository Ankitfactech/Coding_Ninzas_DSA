 void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    // Write your code here
	 if(root==NULL)
       return;
    if(root->left==NULL && root->right==NULL)
        return;
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);
    
    BinaryTreeNode<int> * tempL = root->left;
    root->left=root->right;
    root->right=tempL;
}