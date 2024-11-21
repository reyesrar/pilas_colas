#include "../node/node.cpp"
template<class T>
class stack{
    private:
        Node<T> *head=NULL;
        int length=0;
    public:
        int getLength();
        void push(T);
        T pop();
        bool isEmpty();
        void print();
        void invert(stack<T> &, stack<T> &);
        void showStack();
    

};