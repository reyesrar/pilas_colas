#include<iostream>
#include "./Queue.h"
template<class T>
bool Queue<T>::isEmpty(){
    return this->head==NULL;
}
template<class T>
void Queue<T>::push(T data,int priority){
       
        Node <T> *node = new Node<T>(data,NULL,priority);
         if(isEmpty()){
            head=node;
            tail=node;
            this->length++;
            return;
        }
        tail->setNextNode(node);
        tail=node;
        this->length++;
   
}

template<class T>
T Queue<T>::pop(){
    T data;
    if(isEmpty()) return NULL;
    Node<T> *priorityNode = head;
    Node<T> *node = head->getNextNode();
    while(node!=NULL){
        if(node->getPriority()<priorityNode->getPriority()){
            priorityNode=node;
        }
        node=node->getNextNode();
    }
    data = priorityNode->getData();

    if(priorityNode==head){
        head=head->getNextNode();
    }else{
        Node<T> *prev=head;
        while(prev->getNextNode()!=priorityNode){
            prev=prev->getNextNode();
        }
        prev->setNextNode(priorityNode->getNextNode());
    }
    delete priorityNode;
    this->length--;
    return data;
}
template<class T>
void Queue<T>::print(){

      while(!isEmpty()) {

       std::cout<<pop()<<endl;
      }
}
template<class T>
int Queue<T>::getLength(){
    return this->length;
}