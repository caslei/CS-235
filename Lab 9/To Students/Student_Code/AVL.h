/*
 * AVL.h
 *
 *  Created on: Apr 12, 2015
 *      Author: Jason
 */

#ifndef TO_STUDENTS_STUDENT_CODE_AVL_H_
#define TO_STUDENTS_STUDENT_CODE_AVL_H_

#include "AVLInterface.h"
#include "Node.h"
#include <cmath>
#include <iostream>

namespace std {

class AVL: public AVLInterface {
public:
	AVL();
	virtual ~AVL();

	NodeInterface * getRootNode();
	bool add(int data);
	bool remove(int data);
	void clear();

	void clearNode(Node* currentNode);
	bool insert(int data_in, Node* currentNode);
	bool removeFromNode(int data_in, Node* currentNode);
	bool isBalanced(Node* currentNode);
	void balanceNode(Node* currentNode);
	void deleteChild(Node* currentNode);
	void checkNewBalance(Node* currentNode);
	void balanceLeftLeft(Node* currentNode);
	void balanceLeftRight(Node* currentNode);
	void balanceRightRight(Node* currentNode);
	void balanceRightLeft(Node* currentNode);


	void rotateRight(Node* currentNode);
	void rotateLeft(Node* currentNode);

private:
	Node *rootNode;
	int size, height;
};

} /* namespace std */

#endif /* TO_STUDENTS_STUDENT_CODE_AVL_H_ */
