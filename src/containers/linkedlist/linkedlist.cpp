#include <string>
#include <iostream>

using namespace std;

template <class T>
class LinkedList {
  private:
    struct Node {
      T data;
      Node* next;
    };

  public:
    int numElems;
    Node* start = NULL;
    Node* end = NULL;

    LinkedList() {
      numElems = 0;
    }

    void append(T elem) {
      /* cout << start << endl; */
      /* cout << end << endl; */
      Node* newNode = new Node{elem, NULL};
      numElems++;
      if (end == NULL) {
        start = newNode;
        end = newNode;
        return;
      }

      end->next = newNode;
      end = end->next;
    }

    T operator[](int index) {
      return traverse(index)->data;
    }

    Node* traverse(int index) {
      Node* current = start;
      for (int i = 0; i < index; i++) {
        current = current->next;
      }

      return current;
    }

    string toString() {
      string out = "[ ";
      Node* current = start;

      for (int i = 0; i < numElems; i++) {
        cout << i << endl;
        cout << current->data << endl;
        out += to_string(current->data) + " ";
        current = current->next;
        cout << out << endl;
      }

      return out + "]";
    }
};
