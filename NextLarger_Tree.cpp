TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    if(root==NULL){
        return NULL;
    }
    if(root->data>x){
        return root;
    }
    for(int i=0;i<root->children.size();i++){
        return getNextLargerElement(root->children[i], x);
    }

}