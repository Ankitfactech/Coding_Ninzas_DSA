int getLargeNodeCount(TreeNode<int>* root, int x) {
    // Write your code here
    int count=0;
    if(root->data>x){
        count++;
    }
    for(int i=0;i<root->children.size();i++){
         count = count + getLargeNodeCount(root->children[i],  x);
        
    }
    return count;
}