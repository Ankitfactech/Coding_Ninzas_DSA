 if(root->data==NULL)
      return;
    
   
    queue<TreeNode<int>*> pendingnodes;
    pendingnodes.push(root);
   
   while(pendingnodes.size()!=0)
   {  
       TreeNode<int>*front=pendingnodes.front();
        pendingnodes.pop();
       cout<<front->data<<":";
       for (int i = 0; i < front->children.size(); i++) {
         pendingnodes.push(front->children[i]);
         if (i == front->children.size() - 1)
           cout << front->children[i]->data;

         else
           cout << front->children[i]->data << ",";
       }

       cout << endl;
   }
}