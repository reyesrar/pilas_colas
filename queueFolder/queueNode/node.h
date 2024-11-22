template<class T>
class Node{
    private:
        T data;
        int priority;
        Node<T> *next=NULL;
    public:
        Node(T,Node<T>*,int);
        ~Node();
        Node<T>* getNextNode();
        void setData(T);
        T getData();
        void setNextNode(Node<T>*);
        void print();
        void setPriority(int);
        int getPriority();
};