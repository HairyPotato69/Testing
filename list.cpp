#include <iostream>
#include "List.h"



using namespace std;

//typedef Person type;

singly::List::List() {
	head = NULL;
	count = 0;
}


bool singly::List::empty() {
	if (count == 0) return true;
	return false;
}


int singly::List::size() {
	return count;
}


singly::Node* singly::List::find(int position) {
	Node* cur;

	if (position > count) return NULL;
	cur = head;
	for (int count = 1; count < position; count++)
		cur = cur->next;
	return cur;
}


bool singly::List::get(int position, type& result) {
	if (position > count) return false;
	result = find(position)->item;
	return true;
}


bool singly::List::set(int position, type newItem) {
	if (position > count) return false;
	find(position)->item = newItem;
	return true;
}


bool singly::List::insert(int at, type newItem) {// Any simplification can be done on code below?
	Node* pre, * cur, * tmp = new Node(newItem);

	if (at < 1 || at > count + 1) return false;
	if (!tmp) return false;

	if (empty()) {
		head = tmp;
		count++;
		return true;
	}
	if (at == 1) {
		tmp->next = head;
		head = tmp;
		count++;
		return true;
	}
	pre = find(at - 1);
	cur = pre->next;
	tmp->next = cur;
	pre->next = tmp;
	count++;
	return true;
}


bool singly::List::remove(int from) {
	Node* pre, * cur;

	if (from < 1 || from > count) return false;
	if (from == 1) {
		cur = head;
		head = head->next;
		count--;
		free(cur);
		return true;
	}
	pre = find(from - 1);
	cur = pre->next;
	pre->next = cur->next;
	free(cur);
	count--;
	return true;
}

//insert in ascending
bool singly::List::insert(type newItem) {
	Node* pre, * cur, * tmp;

	tmp = new Node(newItem);

	if (!tmp) return false;
	if (empty()) {
		head = tmp;
		count++;
		return true;
	}
	count++;
	if (head->item >= newItem) {
		tmp->next = head;
		head = tmp;
		return true;
	}
	pre = head;
	cur = pre->next;
	for (; cur != NULL;) {
		if (cur->item >= newItem) break;
		pre = cur;	cur = cur->next;
	}
	tmp->next = cur;
	pre->next = tmp;
	return true;
}


bool singly::List::swap(type item) {
	// current_node and successor
	Node* cur = head, * succ;
	// Create a temporary to hold 
	type temp;

	// one node -> nothing to swap
	if (count < 2) return false; //less than 2 node
	
	// traversing through the list (FIND AN ALTERNATIVE)
	// starts from the beginning (SINGLY LINKED LIST)
	while (cur != NULL) {
		if (cur->item == item) {
			// If it is the last case
			if (cur->next == NULL)
				return false; 	// found as last

			succ = cur->next; 	// normal case
			temp = cur->item;
			cur->item = succ->item;
			succ->item = temp;
			return true;
		}
		cur = cur->next;
	}
	if (cur == NULL) return false; // cannot find
}

bool stack::Stack::empty() {
	return list.empty();
}


int stack::Stack::size() {
	return list.size();
}


bool stack::Stack::push(type newItem) {
	return list.insert(1, newItem);
}


bool stack::Stack::pop(type& container) {
	if (!list.get(1, container)) return false;
	return list.remove(1);
}


queue::Queue::Queue() {
	head = tail = NULL;
	count = 0;
}


bool queue::Queue::empty() {
	if (count == 0) return true;
	return false;
}


int queue::Queue::size() {
	return count;
}


bool queue::Queue::enqueue(type newItem) {// Any simplification can be done on code below?
	singly::Node* tmp = new singly::Node(newItem);

	if (!tmp) return false;
	if (empty()) {
		head = tail = tmp;
		count++;
		return true;
	}
	count++;
	tail->next = tmp;
	tail = tmp;
	return true;
}


bool queue::Queue::dequeue(type& itemExtracted) {
	singly::Node* cur = head;

	if (empty()) return false;
	count--;
	itemExtracted = head->item;
	head = head->next;
	free(cur);
	if (count == 0) tail = NULL;

	return true;
}


singly::Node* queue::Queue::find(int position) {
	singly::Node* cur{nullptr};

	if (position > count) return NULL;
	cur = head;
	for (int count = 1; count < position; count++)
		cur = cur->next;
	return cur;
}


bool queue::Queue::print()
{
	singly::Node* cur{nullptr};

	if (empty())
	{
		cout << "\nCannot print from empty queue.\n\n";
		return false;
	}

	cur = head; //start traverse from first node

	while (cur != NULL)
	{
		cout << cur->item << "\t";

		cur = cur->next; //move to next node
	}

	return true;
}

