int findNode(Node *head, int n){
    // Write your code here.
    if(head == NULL){
        return -1;
    }
    Node* temp =head;
    int count =0;


while(temp->next !=NULL){
  if (temp->data == n) {
    return count;
  }
  temp= temp->next;
  count++;

}
return (-1);
}