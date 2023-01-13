#include <iostream>
#include <conio.h>
#include "LinkedList.hpp"
using namespace std;

int main(){
	LinkedList s;
    int option, key1, k1, data1;

    do{
        system("cls");
        cout<<" [0] Quit"<<endl;
        cout<<" [1] Append"<<endl;
        cout<<" [2] Preppend"<<endl;
        cout<<" [3] Insert Node After"<<endl;
        cout<<" [4] Delete"<<endl;
        cout<<" [5] Update"<<endl;
        cout<<" [6] Print"<<endl<<endl;

        cout<<"Select an option: "; cin>>option;
        Node* node = new Node();

        switch(option){
            case 0: exit(-1);
            
            case 1:
                system("cls");
                cout<<"Input the key of the Node: "; cin>>key1;
                cout<<"\nInput the data of the Node: "; cin>>data1;
                node->key = key1;
                node->data = data1;
                s.appendNode(node);
                getch();
                break;
            
            case 2:
                system("cls");
                cout<<"Input the key of the Node: "; cin>>key1;
                cout<<"\nInput the data of the Node: "; cin>>data1;
                node->key = key1;
                node->data = data1;
                s.preppendNode(node);
                getch();
                break;
            
            case 3:
                system("cls");
                cout<<"Input the the key after the Node will be inserted: "; cin>>k1;
                system("cls");
                cout<<"Input the key of the Node: "; cin>>key1;
                cout<<"\nInput the data of the Node: "; cin>>data1;
                node->key = key1;
                node->data = data1;
                s.insertNodeAfter(k1, node);
                getch();
                break;
            
            case 4:
                system("cls");
                cout<<"Input the key of the Node which you want to delete: "; cin>>k1;
                s.deleteNode(k1);
                getch();
                break;
            
            case 5:
                system("cls");
                cout<<"Input the key of the Node which you want to update: "; cin>>k1;
                cout<<"\nInput the data of the Node: "; cin>>data1;
                s.updateNodeByKey(k1, data1);
                getch();
                break;
            
            case 6:
                system("cls");
                s.printList();
                getch();
                break;
            
            default:
                cout<<"Invalid option";
                getch();
                break;
        }

    }while(option != 0);
}
