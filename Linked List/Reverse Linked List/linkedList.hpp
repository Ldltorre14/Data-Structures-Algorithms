#include <iostream>

class Node{
    public:
        int value;
        Node* next;

        Node(int value){
            this->value = value;
            this->next = NULL;
        }


};


class linkedList{
    public:
        Node* head;

        linkedList(Node* node){
            head = node;
        }

        linkedList(){
            head = NULL;
        }

        void print(){
            Node* ptr = head;
            while(ptr != NULL){
                std::cout<<"(Data:"<<ptr->value<<")--->";
                ptr = ptr->next;
            }
        }


        void push(Node* n){
            if(head == NULL){
                head = n;
            }
            else if(head->next == NULL){
                head->next = n;
            }
            else{
                Node* ptr = head;
                while(ptr->next != NULL){
                    ptr = ptr->next;
                }
                ptr->next = n;
            }
        }

        void pop(){
            Node* ptr = head;
            Node* prev;
            if(head->next == NULL){
                head = NULL;
                
            }
            else{
                while(ptr->next != NULL){
                    prev = ptr;
                    ptr = ptr->next;
                }
                prev->next = NULL;
            }
            std::cout<<"Node with value("<<ptr->value<<") deleted"<<std::endl;
            delete ptr;
            
            
        }
};


