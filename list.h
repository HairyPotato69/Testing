#ifndef List_type
#define List_type

#include	"Node.h"


using type = string;

namespace singly {
	struct List
	{
		int count;
		Node* head;
		Node* find(int);
		List(); 
		bool empty();
		int size();
		bool get(int, type&);
		bool set(int, type);
		bool insert(int, type);  // insert item according to the specified position
		bool remove(int);
		bool insert(type);  // insert item into ascending order
		bool swap(type);
	};
}

namespace stack{

	struct Stack {
		singly::List list;
		bool empty();
		int size();
		bool push(type);
		bool pop(type&);
	};
}

namespace queue {
	struct Queue {
		int count{};
		singly::Node* head{};
		singly::Node* tail{};
		Queue();
		bool empty();
		int size();
		bool enqueue(type);
		bool dequeue(type&);
		singly::Node* find(int);
		bool print();

	};
}

#endif
