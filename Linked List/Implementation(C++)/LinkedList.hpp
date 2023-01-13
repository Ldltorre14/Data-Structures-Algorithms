#include "Node.hpp"
#include <iostream>

using namespace std;

class LinkedList{
    public:
        Node* head;
    
    LinkedList(){
        head = NULL;
    }
    LinkedList(Node* n){
        head = n;
    }

    Node* nodeExists(int k){
        Node* temp = NULL;
        Node* ptr = head;
        while(ptr != NULL){
            if(ptr->key == k){
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;    
        /*Here, we simply create a Node pointer which we give it the first node(head)
        then we begin to iterate while ptr is different of NULL and next we compare if
        the key the user gave us is the same as one the key of one of the nodes in the list
        as we iterate; if the key is the same as one of the nodes in the list, then we asign that node
        another pointer (temp) and we return it to say, effectively a node with the same key exists*/
    }

    void appendNode(Node* n){
        if(nodeExists(n->key) != NULL){
            cout<<"Element already exists with key: "<<n->key<<endl;
        }
        else{
            if(head == NULL){
                head = n;
                cout<<"Element appended"<<endl;
            }
            else{
                
                Node* ptr = head;
                while(ptr->next != NULL){
                    ptr = ptr->next;
                }
                ptr->next = n;
                cout<<"Element appended"<<endl;
                /*What we do here, we create a pointer of Node type(ptr) and asign it
                the first Node which we can recognize it as the head.
                then we begin to iterate until ptr is NULL, which means that ptr reached the end
                of the list and to iterate, we asign to ptr the next of the same ptr.
                When we reach the last element, we simply assign it the node the user gave us (n) */
            }
        }
    }

    void preppendNode(Node* n){
        if(nodeExists(n->key) != NULL){
            cout<<"Element already exists with key: "<<n->key<<endl;
        }
        else{
            n->next = head;
            head = n;
            cout<<"Element Preppended"<<endl;
            /*what we are doing with this sentence, is to ask that the pointer next of the Node(N)
            points to the head, which RIGHT NOW is the first node; then we assign to the head the Node(N)

            It would look something like this:
                (1)n->next = head               (2)head = n
                [n]-                                [n(the new Node 1)]
                    |                               ^           |
                    --->[Node 1]                    |           --->[Previous Node 1]
                            ^                       |
                            |                       |
                         [head]                   [head]
            */
        }
    }

    void insertNodeAfter(int k, Node* n){
        Node *ptr = nodeExists(k);
        if(ptr == NULL){
            cout<<"Element doesn't exist in the list"<<endl;
        }
        else{
            if(nodeExists(n->key) != NULL){
                cout<<"Node already exist in the list"<<endl;
            }
            else{
                n->next = ptr->next;
                ptr->next = n;
                cout<<"Node inserted"<<endl;
            }
        }
    }

    void deleteNode(int k){
        if(head == NULL){
            cout<<"List is empty"<<endl;
        }
        else if(head != NULL){
            if(head->key == k){
                head = head->next;
                cout<<"Element Deleted from the list"<<endl;
            }
            else{
                Node* temp = NULL;
                Node* prevptr = head;
                Node* currentptr = head->next;
                while(currentptr != NULL){
                    if(currentptr->key == k){
                        temp = currentptr;
                        currentptr = NULL;
                    }
                    else{
                        prevptr = prevptr->next;
                        currentptr = currentptr->next;
                    }
                }
                if(temp != NULL){
                    prevptr->next = temp->next;
                    cout<<"Element Deleted from the list"<<endl;
                }
                else{
                    cout<<"Node doesn't exists"<<endl;
                }
            }
        }

    }

    void updateNodeByKey(int k, int d){
        Node* ptr = nodeExists(k);
        if(ptr != NULL){
            ptr->data = d;
            cout<<"Element updated succesfully"<<endl;
        }
        else{
            cout<<"Element doesn't exist"<<endl;
        }
    }

    void printList(){
        if(head == NULL){
            cout<<"List is empty"<<endl;
        }
        else{
            Node* ptr = head;
            while(ptr != NULL){
                cout<<"(Key: "<<ptr->key<<"|Data: "<<ptr->data<<")-->";
                ptr = ptr->next;
            }
        }
    }


};
