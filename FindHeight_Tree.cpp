int getHeight(TreeNode<int>* root) {
    // Write your code here
    // if(root==NULL){
    //     return 0;
    // }
    int ans = 0;
    for(int i=0;i<root->children.size();i++){
        int childrenHeight =getHeight(root->children[i]);
        if(childrenHeight > ans) {
            ans = childrenHeight;
        }
    }
    return ans +1;
}