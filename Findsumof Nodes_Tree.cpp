 int sumOfNodes(TreeNode<int>* root) {
    // Write your code here
    int sum =0;
   for (int i=0;i<root->children.size();i++){
        sum+= sumOfNodes(root->children[i]);
    }
    return root->data +  sum;
}