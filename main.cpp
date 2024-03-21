// dump.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "List.h"
using namespace std;


//void mystery(stack::Stack* s1, stack::Stack* s2);
// void reverseString(char* str);

int main(){
#if 0
    type temp[10]{5, 6, 9, 10, 23, 69, 51, 78, 40, 3};
    singly::List* listA = new singly::List();

    for (int i{ 1 }; i <=10; i++)
        listA->insert(i, temp[i-1]);


    if (listA->swap(10))
        cout << "successful\n";
    else
        cout << "The requested data does not exist\n";

    singly::Node* current_node{ listA->head };

    for (int j{ 1 }; j <= listA->size(); j++) {
        cout << current_node->item;
        cout << " ";
        if (!(j % 5))
            cout << '\n';
        current_node = current_node->next;
    }
    std::cout << "\n";
#endif
#if 0
	stack::Stack s1;
	stack::Stack s2;
	string temp;

	string list[] = { 
						"Winter", 
						"Spring", 
						"Summer", 
						"Fall"  , 
						"Cold"  , 
						"Warm"  , 
						"Hot"   };

	for (int i = 0; i < 7; i++)
		s1.push(list[i]);

	// copying method
	mystery(&s1, &s2);

	// emptying the second stack and displaying each variable
	while (!s2.empty())
	{
		s2.pop(temp);
		cout << endl << temp << "\t";
	}
#endif
#if 0
	char word[10]{ "Hello" };
	reverseString(word);

#endif
#if 1
	queue::Queue q1;
	int temp;

	q1.enqueue(10);
	q1.enqueue(20);
	q1.dequeue(temp);
	cout << "\n" << temp << setw(5);
	q1.enqueue(2 * temp);
	q1.enqueue(8);
	q1.enqueue(9);
	q1.dequeue(temp);
	cout << temp << setw(5);
	q1.enqueue(temp - 2);
	while (!q1.empty())
	{
		q1.dequeue(temp);
		cout << temp << setw(5);
	}


#endif
    return 0;
}

// moves stack to another stack

//void mystery(stack::Stack* s1, stack::Stack* s2)
//{
//	// temporary variable to store string information
//	string str;
//
//	while (!s1->empty())
//	{
//		// removes the components starting from the top
//		s1->pop(str);
//		// insert into the second stack (3 characters)
//		s2->push(str.substr(0, 3));
//	}
//}

//void reverseString(char* str) {
//	
//	stack::Stack temp;
//	stack::Stack temp2;
//	char holder{};
//
//	for (int i{ 0 }; i < strlen(str); i++)
//		temp.push(str[i]);
//
//	while (!temp.empty()) {
//		temp.pop(holder);
//		cout << endl << holder << "\t";
//		//temp2.push(holder);
//	}

	//while (!temp2.empty())
	//{
	//	temp2.pop(holder);
	//	cout << endl << holder << "\t";
	//}
//}

