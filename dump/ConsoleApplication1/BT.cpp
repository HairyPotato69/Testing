#include <iostream>
#include <cstdlib>
#include <algorithm>
#include "BT.h"

using namespace std;


BT::BT() {
	root = NULL;
	count = 0;
}


bool BT::empty() {
	if (count == 0) return true;
	return false;
}


int BT::size() {
	return count;
}

bool BT::insert(type father, type son) {
	BTNode	*cur = new BTNode(son);

	if (!cur) return 0;
	if (root == NULL) {
		root = cur;
		count++;
		return true; // special case
	}

	return insert2(root, father, cur); // normal
}



bool BT::insert2(BTNode *cur, type father, BTNode *son){
	// based on the TT method
	if (cur == NULL) return false;  // Not successful 
	if (father == cur->item) {// cur is father?
		if (cur->left == NULL) { // can insert as left son?
			cur->left = son;
			count++;
			return true;
		}
		if (cur->right == NULL) { // can insert as right son?
			cur->right = son;
			count++;
			return true;
		}
		return false; // cannot insert
	}
	if (insert2(cur->left, father, son)) return true;
	return insert2(cur->right, father, son);
}



void BT::preOrderPrint() {
	if (root == NULL) return;// handle special case
	else preOrderPrint2(root);// do normal process
	cout << "\n";
}


void BT::preOrderPrint2(BTNode *cur) {
	if (cur == NULL) return;
	cout << cur->item << ' ';
	preOrderPrint2(cur->left);
	preOrderPrint2(cur->right);
}


void BT::inOrderPrint() {
	if (root == NULL) return;// handle special case
	else inOrderPrint2(root);// do normal process
	cout << endl;
}


void BT::inOrderPrint2(BTNode *cur) {
	if (cur == NULL) return;
	inOrderPrint2(cur->left);
	cout << cur->item << ' ';
	inOrderPrint2(cur->right);
}


void BT::postOrderPrint() {
	if (root == NULL) return;// handle special case
	else postOrderPrint2(root);// do normal process
	cout << endl;
}


void BT::postOrderPrint2(BTNode *cur) {
	if (cur == NULL) return;
	postOrderPrint2(cur->left);
	postOrderPrint2(cur->right);
	cout << cur->item << ' ';
}


int BT::countNode() {
	int	counter = 0;
	if (root == NULL) return 0;
	countNode2(root, counter);
	return counter;
}


void BT::countNode2(BTNode *cur, int &count) {
	if (cur == NULL) return;
	countNode2(cur->left, count);
	countNode2(cur->right, count);
	count++;
}


bool BT::findGrandsons(type grandFather) {
	if (root == NULL) return false;
	return (findGrandsons2(grandFather, root));
}


bool BT::findGrandsons2(type grandFather, BTNode *cur) {
	if (cur == NULL) return false;
	if (cur->item == grandFather) {
		cout << endl << "Grandfather " << cur->item << " has grandsons" << endl;
		fGS3(cur, 0); // do another TT to find grandsons
		return true;
	}
	if (findGrandsons2(grandFather, cur->left))
		return true;
	return findGrandsons2(grandFather, cur->right);
}


void BT::fGS3(BTNode *cur, int level) {
	if (cur == NULL) return;
	if (level == 2) {
		cout << '\t' << cur->item;
		return;  // No need to search downward
	}
	fGS3(cur->left, level + 1);
	fGS3(cur->right, level + 1);
}


void BT::topDownLevelTraversal() {
	BTNode	*cur;
	Queue	q;

	if (empty()) return; 	// special case
	q.enqueue(root);		// Step 1: enqueue the first node
	while (!q.empty()) { 	// Step 2: do 2 operations inside
		q.dequeue(cur);
		if (cur != NULL) {
			cout << cur->item << ' ';
			if (cur->left != NULL) q.enqueue(cur->left);
			if (cur->right != NULL) q.enqueue(cur->right);
		}
	}
}

bool BT::sumValue(type& data) {
	if (root == NULL)
		return false;
	sumValue2(root, data);
	return true;
}

void BT::sumValue2(BTNode* node, type& data)
{
	if (node == NULL) return;
	sumValue2(node->left, data);
	sumValue2(node->right, data);
	data += node->item;
}