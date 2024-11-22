#include <iostream>
#include "queueFolder/queue/queue.cpp"

using namespace std;

enum Priority {A, B, C, D};

int main() {
    
    Queue <string> queue = Queue<string>();

    queue.push("Andres", D);
    queue.push("Fernando", B);
    queue.push("Luis", C);
    queue.push("Vicente", A);
    queue.push("Maria", A);
    queue.push("Pedro", D);

    queue.print();

}