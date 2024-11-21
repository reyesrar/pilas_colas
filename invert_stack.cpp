#include <iostream>
#include "stackFolder/stack/stack.cpp"

using namespace std;

int main(){

    stack<int> mainStack = stack<int>();
    stack<int> auxStack = stack<int>();

    int x[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0; i < 10; i++){
        mainStack.push(x[i]);
    }

    cout<<"Pila original"<<endl;
    mainStack.showStack();
    cout<<endl;

    mainStack.invert(auxStack, mainStack);

    cout<<"Pila invertida"<<endl;
    mainStack.print();
    cout<<endl;
}