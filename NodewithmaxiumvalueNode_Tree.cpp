TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
    TreeNode<int>* max_Node=root;
    

    for(int i=0;i<root->children.size();i++){
        TreeNode<int>*  max2= maxSumNode(root->children[i]);
        if(max2->data>max_Node->data){
            max_Node = max2;;
        }
    }
    return max_Node;

    
    
}