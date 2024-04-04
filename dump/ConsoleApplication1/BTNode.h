#ifndef BTNode_type
#define BTNode_type

using type = int;

struct BTNode {

		type	item;
		BTNode	*left, *right;
		BTNode(type);
};


#endif