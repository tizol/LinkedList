# Simple implementation of a Single Linked List in C++
<h2>Concept</h2>
<p>A single linked list is a data structure consisting of a group of nodes which make a sequence. Each node in the sequence is composed of data (value) and a pointer (a link) to the next node in the sequence.</p>
<p>For example:</p>
<img src="https://upload.wikimedia.org/wikibooks/en/d/d6/DataStructuresLinkedListofN.png" >

<h2>Declare your class, node, and set head-pointer to NULL</h2>
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
