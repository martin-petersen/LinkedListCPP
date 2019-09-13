#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
class LinkedList {
    Node node;

    public:
        LinkedList();
        ~LinkedList();
        void insert(int value, int position);
        void insert_front(int value);
        void insert_back(int value);
        void remove(int position);
        void remove_front();
        void remove_back();
        int front();
        int back();
        int search();
        int size();
        bool empty();
};
#endif