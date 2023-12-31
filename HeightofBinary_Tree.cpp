int height(BinaryTreeNode<int>* root) {
    // Write our code here
	if (root == NULL)
        return 0;
    else {
        /* compute the depth of each subtree */
        int lDepth = height(root->left);
        int rDepth = height(root->right);
 
        /* use the larger one */
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}