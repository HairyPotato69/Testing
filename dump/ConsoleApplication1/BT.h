#ifndef BT_type
#define BT_type

#include	"BTNode.h"
#include	"Queue.h"


struct BT {
		int		count;
		BTNode	*root;

		bool insert2(BTNode *, type, BTNode *);
		void countNode2(BTNode *, int &);
		void preOrderPrint2(BTNode *);
		void inOrderPrint2(BTNode *);
		void postOrderPrint2(BTNode *);
		bool findGrandsons2(type, BTNode *);
		void fGS3(BTNode *, int);
		void sumValue2(BTNode *, type& data);
		
		BT();
		bool empty(); //check if tree is empty
		int size(); //tree size
		bool insert(type, type);	// insert into a BT, a son item if father item is known
		void preOrderPrint();	// print BT node in pre-order manner
		void inOrderPrint();    // print BT node in in-order manner
		void postOrderPrint();  // print BT node in post-order manner
		int countNode();	// count number of tree nodes		
		bool findGrandsons(type);	// find the grandsons of an input father item
		void topDownLevelTraversal();// traverse BT in level by level manner
		bool sumValue(type &data);
};


#endif