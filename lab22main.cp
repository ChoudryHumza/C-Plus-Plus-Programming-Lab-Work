//
//  main.cpp
//  lab22
//
//  Created by Preferred Customer on 5/9/19.
//  Copyright © 2019 humza choudry. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;

// HUMZA CHOUDRY
// 23434188 ID

template<class T>
class Node {
private:
    T data;
    Node* next;
public:
    Node(T data) {
        this->data=data;
        this->next = 0;
    }
    T getData(){return data;}
    Node* getNext(){return next;}
    void setNext(Node* next){this->next=next;}
};
template <class T2>
class LinkedList {
private:
    Node<T2>* head = 0;
public:
    int isEmpty() {return head == 0;}
    void print() {
        Node<T2>* currNode = head;
        while(currNode!=0) {
            cout << currNode->getData() << endl;
            currNode = currNode->getNext();
        }
    }
    void append(int data) {
        if(head == 0)
            head = new Node<T2>(data);
        else{
            Node<T2>* lastNode = head;
            while(lastNode->getNext()!=0)
                lastNode = lastNode->getNext();
            
            Node<T2>* newNode = new Node<T2>(data);
            lastNode->setNext(newNode);
        }
    }
    void recursiveDeleteAll() {
        recursiveDeleteAll(head);
        head=0;
    }
    void recursiveDeleteAll(Node<T2>* currNode){
        if(currNode != 0){
            recursiveDeleteAll(currNode->getNext());
            delete currNode;
        }
    }
    ~LinkedList() {
        recursiveDeleteAll();
        /*
         Node* nodePtr = head;
         while(head!=0) {
         head = head->getNext();
         delete nodePtr;
         nodePtr = head;
         }
         */
    }
};
int main() {
    LinkedList<int> myList;
    myList.append(99);
    myList.append(4);
    myList.append(0);
    myList.append(5);
    myList.print();
}
