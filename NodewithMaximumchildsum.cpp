int helper(TreeNode<int>* root){
    int sum=0;
    for(int i=0;i<root->children.size();i++){
        sum += root->children[i]->data;
    }
    return root->data + sum;
}
TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return NULL;
    }
    if(root->children.size()==0){
        return root;
    }
    int max =helper(root);
    int max2;
    TreeNode<int>* ans=root;
    for(int i=0;i<root->children.size();i++){
        TreeNode<int>* smalloutput = maxSumNode(root->children[i]);
        if(helper(smalloutput)> max){
            max=helper(smalloutput);
            ans = maxSumNode(smalloutput);
        }
    }
    return ans;

}