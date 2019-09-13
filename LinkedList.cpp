#include "LinkedList.h"

LinkedList::LinkedList(){
    node = new Node();
}
LinkedList::~LinkedList(){
    Node current = head;
    while(current->next != nullptr) {
        head = nullptr;
        current = current->next;
        head = current;
    }
    head = nullptr;
}
void LinkedList::insert(int value, int position);
    Node current = head;
    int cont = 0;
    while(current->next != nullptr && cont < position) {
        current = current->next;
    }
    Node node = new Node();
    node->value = value;
    node->head = current->head;
    node->next = current->next
    current->next = node
void LinkedList::insert_front(int value);
    Node node = new Node();
    node->head = nullptr;
    node->next = 
void LinkedList::insert_back(int value);
void LinkedList::remove(int position);
void LinkedList::remove_front();
void LinkedList::remove_back();
int LinkedList::front();
int LinkedList::back();
int LinkedList::search();
int LinkedList::size();
bool LinkedList::empty();