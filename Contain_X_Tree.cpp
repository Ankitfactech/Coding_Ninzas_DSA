bool isPresent(TreeNode<int>* root, int x) {
    // Write your code here
    bool smalloutput;
    if(root==NULL){
        return false;
    }
    if(root->data == x){
    return true;
}
else{
    for(int i=0;i<root->children.size();i++){
         smalloutput=isPresent(root->children[i],  x);
         if(smalloutput==true){
             return true;
         }
    }
    
}

}