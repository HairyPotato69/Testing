#pragma once
#ifndef Node_type
#define Node_type
using namespace std;

using type = string;

namespace singly {
	struct Node {
		type item;
		Node* next;
		Node(type);
	};
}
#endif
