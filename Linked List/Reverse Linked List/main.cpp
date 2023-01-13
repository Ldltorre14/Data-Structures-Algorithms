#include <iostream>
#include "linkedList.hpp"






int main(){
    linkedList list;

    Node* node = new Node(5);
    list.push(node);
    node = new Node(10);
    list.push(node);
    list.pop();
    list.pop();
    node = new Node(2000);
    list.push(node);

    list.print();



    return 0;
}
