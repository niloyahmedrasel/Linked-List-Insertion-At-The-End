class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
       
        
     Node *temp;
     temp = new Node(x);
     
     if(head==NULL){
         return temp;
     }
     
     Node *current=head;
     
     while(current->next!=NULL){
         current = current->next;
     }
     
     current->next=temp;
     
     Node *value = head;
     while(value){
         return value;
     }
    }
};
