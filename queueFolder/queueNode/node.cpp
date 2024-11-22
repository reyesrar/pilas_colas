#include<iostream>
#include "./node.h"
using namespace std;

template <class T>
Node<T>::Node(T data, Node<T>* next, int priority){
    this->data=data;
    if(next!=NULL){
        this->next=next;
    }
    this->priority=priority;
}
template <class T>
Node<T>* Node<T>::getNextNode(){
    return this->next;
}

template <class T>
void Node<T>::setNextNode(Node<T>* next){
     if(next!=NULL){
        this->next=next;
    }
}

template <class T>
void Node<T>::setData(T data){
    this->data=data;
}


template <class T>
T Node<T>::getData(){
   return this->data;
}



template<class T>
void Node<T>::print(){
    cout<<this->data<<endl; //solo para datos simples
}
template <class T>
Node<T>::~Node(){
    next=NULL;
}

template <class T>
void Node<T>::setPriority(int priority){
    this->priority=priority;
}

template <class T>
int Node<T>::getPriority(){
   return this->priority;
}