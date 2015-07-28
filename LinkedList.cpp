#include <iostream>
using namespace std;

class intList{
  private:
    struct ListNode{
      int value;
      struct ListNode *next; // next-pointer points to the value of the next node
    };
    ListNode* head; // head-pointer will serve as the head of the list

  public:
    intList(){ head = NULL; } // cunstructor will initialize head to NULL
                               // this will create an empty linked list

    void appendNode(int);
    void displayList(void);
    int listLength(struct)

};

void intList::appendNode(int num){
  ListNode *newNode; // newNode-pointer will be used to allocate
                    // & point to the new node

  ListNode *nodePtr; // nodePtr will be used to travel down the linked
                     //list, until last node

  newNode = new ListNode; // allocate memory for the new node

  newNode->value = num; // store the value of num inside the new node

  newNode->next = NULL; // this will eventually become the last node in the
                        // list, thus the next pointer must be set to NULL

  // if there are NO nodes in the list, set newNode as the 1st node in the list
  if(!head){
    head = newNode;
  }

  // otherwise append the newNode at the end of the list
  else {
    nodePtr = head; // nodePtr is used to travel down the list,
                    // so it initially has to point to the head

    // while True loop through all the nodes in the list,
    // when False it means it's the last node becasue
    // newNode->next points to NULL
    while(nodePtr->next)
      nodePtr = nodePtr->next;

      nodePtr->next = newNode; // append newNode as the last node
                               // reminder: newNode->next already point to NULL
  }

}

void intList::displayList(void){
  ListNode* nodePtr;
  nodePtr = head;

  while(nodePtr){
    cout << nodePtr->value << "->";
    nodePtr = nodePtr->next;
  }
  cout << "NULL" << endl << endl;
}

int intList::listLength(struct ListNode *head){
  struct ListNode *current = head;

  int count = 0;
  while(current != NULL){
    count++;
    current->next;
  }
  return count;
}




/*

int count(node *temp){
 if(temp == NULL)
     return(0);
 return(1 + count(temp->next));
}


public int length (LN 1){
  if (l == null)
    return 0;
    else
    return 1 + length(l.next);
}


#include <iostream>

struct Node
{
        Node* next;
        int payload;
};

Node* head = 0;

int count(Node* p)
{
        if (!p)
                return 0;
        if (!p->next)
                return 1;

        return 1 + count(p->next);
}

int main()
{
        head = new Node;
        head->next = new Node;
        head->next->next = new Node;

        int n = count(head);
        std::cout << n << std::endl;

        return 0;
}
*/


int main() {
  intList listObject;

  listObject.appendNode(15);
  listObject.appendNode(30);
  listObject.appendNode(6);
  listObject.appendNode(7);
  listObject.appendNode(4);

  listObject.displayList();

  return 0;
}
