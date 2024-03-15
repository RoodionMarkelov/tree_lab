#pragma once

#include <iostream>
#include <vector>

using namespace std;

struct Node {
	int _data;
	Node* _left;
	Node* _right;
	Node(int data) : _data(data), _left(nullptr), _right(nullptr) {};
};

class Tree {
	Node* _root;

	void print(const Node* root) {
		if (!root) return;
		print(root->_left);
		cout << root->_data << " ";
		print(root->_right);
	}

	void remove(int key) {
		Node* current = _root;
		Node* prev = nullptr;
		while (current && current->_data != key) {
			prev = current;
			if (key < current->_data) {
				current = current->_left;
			}
			else {
				current = current->_right;
			}
		}
		if (!current) return;
		if (!current->_left) {
			if (prev && prev->_left == current) {
				prev->_left = current->_right;
			}
			if (prev && prev->_right == current) {
				prev->_right = current->_right;
			}
			if (!prev && !current->_data && !current->_right) _root = nullptr;
			delete current;
			return;
		}
		if (!current->_right) {
			if (prev && prev->_left == current) {
				prev->_left = current->_left;
			}
			if (prev && prev->_right == current) {
				prev->_right = current->_left;
			}
			delete current;
			return;
		}
		Node* replacement = current->_left;
		while (replacement->_right) {
			replacement = replacement->_right;
		}
		int replacement_data = replacement->_data;
		erase(replacement->_data);
		current->_data = replacement_data;
		return;
	}

	void clear(Node* root) {
		if (root) {
			clear(root->_left);
			clear(root->_right);
			remove(root->_data);
		}
		return;
	}

	void clear_tree() {
		clear(_root);
	}

	void add(int key) {
		if (!_root) {
			_root = new Node(key);
			return;
		}
		Node* current = _root;
		while (current) {
			if (key < current->_data && !current->_left) {
				current->_left = new Node(key);
				return;
			}
			if (key > current->_data && !current->_right) {
				current->_right = new Node(key);
				return;
			}
			if (key < current->_data) {
				current = current->_left;
			}
			else current = current->_right;
		}
	}

	void copy(Node* from_root) {
		if (!from_root) return;
		add(from_root->_data);
		copy(from_root->_left);
		copy(from_root->_right);
	}

public:
	Tree() : _root(nullptr) {};

	Tree(const Tree& other) {
		_root = nullptr;
		if (other._root) {
			copy(other._root);
		}
	}

	Tree operator=(const Tree& other) {
		clear_tree();
		if (other._root) {
			copy(other._root);
		}
	}

	~Tree() {
		clear_tree();
	}

	void print() {
		if (!_root) {
			cout << "BinaryTree is empty" << endl;
		}
		else {
			cout << "Elements of BinaryTree:" << endl;
			print(_root);
			cout << endl << endl;
			return;
		}
	}

	bool insert(int key) {
		if (contains(key)) return false;
		else {
			add(key);
			return true;
		}
	}

	bool contains(int key) {
		Node* current = _root;
		while (current) {
			if (key == current->_data) return true;
			if (key < current->_data) {
				current = current->_left;
			}
			else {
				current = current->_right;
			}
		}
		return false;
	}

	bool erase(int key) {
		if (contains(key)) {
			remove(key);
			return true;
		}
		return false;

	}
};

std::vector<int> find_repeat(std::vector<int> vec) {
	Tree tree;
	vector<int> result;
	for (int i = 0; i < vec.size(); ++i) {
		if ((tree.insert(vec[i]) == false) && (std::find(result.begin(), result.end(), vec[i]) == result.end() || result.size() == 0)) {
			result.push_back(vec[i]);
		}
	}
	return result;
}

///////////////////////////////////////////////////////////////////////////////////////////
//Additional Task
///////////////////////////////////////////////////////////////////////////////////////////
