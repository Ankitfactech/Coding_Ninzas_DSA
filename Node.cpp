class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data =data;
        next = NULL;
    }
    Node* takeinput(){
    Node*head = NULL;
    int data;
    while(data != -1){
        Node* newnode = new Node(data);
    if(head == NULL){
        head = newnode;
        }
        else{
            Node* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cin >> data;
    }

    void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
    }

};
};

