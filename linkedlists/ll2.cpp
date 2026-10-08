#include <iostream>
using namespace std;

class Node {
    public :
    int data;
    Node* next;

    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1 ){
        data = data1;
        next = nullptr;
    }

};

void printLL (Node* head)  {
    Node* temp = head;
    while (temp) {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout<< "\n" ;
}

Node* removeTail (Node* head){
  if(head->next == NULL || head == NULL) return NULL;
  Node* temp = head;

  while(temp->next->next != NULL) {
    temp = temp->next;
  }
  free(temp->next);
  temp->next = nullptr;
  return head;
}


Node* removeK(Node* head, int k){
  if(head == NULL) return head;
  
  if(k==1) {
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
  }

  Node* temp = head;
  Node* prev ;
  while(k>1 && temp->next != NULL){
    prev = temp;
    temp = temp->next;
    k--;
  }
  if(k > 1 && temp->next == NULL) {
    return head;
  }
    prev->next = temp->next;
    free(temp);
  return head;

}

Node* removeEl(Node* head, int el){
  if(head == NULL) return head;
  
  if(head-> data == el) {
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
  }
  
  Node* temp = head;
  Node* prev;

  while(temp != NULL) {
    if(temp->data == el) {
        prev->next = temp->next;
        free(temp);
        break;
    }
    prev = temp;
    temp = temp->next;
  }

  
  return head;

}

int main () {
    Node* node3 = new Node(3);
    Node* node2 = new Node(2,node3);
    Node* node1 = new Node(1,node2);

    printLL(node1);
    Node* updatedLL = removeEl(node1,3);
    printLL(updatedLL);
    return 0;
}