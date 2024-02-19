#pragma once

#include <iostream>

struct Node {
	int _data;
	Node* _left;
	Node* _right;
	Node(int data) : _data(data), _right(nullptr), _left(nullptr) {};
};

class Tree {
	Node* _root;
	int _size;
public:
	Tree() : _root(nullptr), _size(0) {};
	Tree(const Tree& other) {
		_root = nullptr;
		_size = 0;
	}

	void print() {
		if (!_root) return;
		print(_root->_left);
		cout << _root->data;
		print(_root->rigt);
	}

	int height() {
		int left_h, right_h, h = 0;
		if (_root) {
			left_h = height(_root->_left);
			right_h = height(_root->_right);
			h = ((left_h > right_h) ? left_h : right_h) + 1;
		}
		return h;
	}

	bool insert(int key) {

	}

};