#include "queue.h"
int main(){
	queue q;
	q.enqueue(19);
	q.enqueue(60);
	q.enqueue(30);
	q.dequeue();
	q.enqueue(25);
	q.dequeue();
	q.peek();
	q.display();
}
