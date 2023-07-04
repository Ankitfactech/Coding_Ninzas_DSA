int getLargeNodeCount(TreeNode<int>* root, int x) {
    // Write your code here
    int sum=0;
    if(root==NULL){
        return NULL;
    }
    for(int i=0;i<root->children.size();i++){
        sum += getLargeNodeCount(root->children[i],  x);
    }
    if(root->data>x){
        return 1+sum;
    }
    else {
        return sum;
    }
}