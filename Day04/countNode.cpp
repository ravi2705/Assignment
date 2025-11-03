//count nnumber of nodes
int size(Node* head){
    Node* temp = head;
    int size = 0;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    return size;
}