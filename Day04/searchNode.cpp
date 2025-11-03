// search node in Linkedlist

int search(int target){
        Node* temp = head;
        int idx = 0;

        while(temp != NULL){
            if(temp->val == target){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
        delete temp;
    }