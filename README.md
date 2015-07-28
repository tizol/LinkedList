# Simple implementation of a Single Linked List in C++

<h2> </h2>
``` cpp
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

```

<h3> Follow me on twitter or visit my blog<h3>
<ul>
  <li><a href="https://twitter.com/tizolj"> tizolj</a></li>
  <li><a href="http://josetizol.com/"> josetizol.com</a></li>
</ul>
