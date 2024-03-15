#include "tree_lab.h"
#include <vector>
#include <ctime>

using namespace std;

void print(vector<int> vec) {
	if (vec.size() == 0) {
		cout << "Vector is empty." << endl;
	}
	for (int i = 0; i < vec.size(); ++i) {
		cout << vec[i] << " ";
	}
	cout << endl;
}

vector<int> _random_vector(int size, int i) {
	std::vector<int> vector;
	srand(i);
	for (int i = 0; i < size; ++i) {
		vector.push_back(rand());
	}
	return vector;
}

Tree _random_tree(int size, int i) {
	Tree tree;
	srand(i);
	for (int i = 0; i < size; ++i) {
		tree.insert(rand());
	}
	return tree;
}



int main()
{
	//Tree tree;
	//tree.insert(0);
	//tree.insert(1);
	//tree.insert(-1);
	//tree.insert(2);
	//tree.insert(-2);
	//tree.insert(-2);
	//
	//tree.print();
	//
	////cout << tree.contains(3) << endl;
	///*tree.erase(2);
	//tree.erase(-2);
	//tree.erase(1);
	//tree.erase(-1);
	//tree.erase(0);*/
	//
	//Tree tree2(tree);
	//
	//tree2.print();

	//Tree tree3 = tree2;
	//tree3.print();

	////////////////////////////////////////////////////////////////////////////////////////////
	//Stats
	////////////////////////////////////////////////////////////////////////////////////////////

	//int count = 1000;
	//int length = 100000;

	//int time_vec = 0;
	//int time_tree = 0;

	/*for (int i = 0; i < count; ++i) {
		int start_time = clock();
		vector<int> vec = _random_vector(length, i);
		time_vec += clock();
	}*/

	/*for (int i = 0; i < count; ++i) {
		int start_time = clock();
		Tree tree = _random_tree(length, i);
		time_tree += clock();
	}*/

	/*//////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Vector insert time: " << double(time_vec) / count << "ms" << endl;
	//Vector 1000 = 4.2ms
	//Vector 10000 = 57.52ms
	//Vector 100000 = 528.52ms
	cout << "Tree insert time: " << double(time_tree) / count << "ms" << endl;
	//Tree 1000 = 71.02ms
	//Tree 10000 = 831.57ms
	//Tree 100000 =  7176.17ms
	*///////////////////////////////////////////////////////////////////////////////////////////////

	//vector<int> vector = _random_vector(length, 0);
	//Tree tree = _random_tree(length, 0);

	/*
	for (int i = 0; i < count; ++i) {
		int start_time = clock();
		srand(i);
		std::find(vector.begin(), vector.end(), rand());
		time_vec += clock();
	}

	for (int i = 0; i < count; ++i) {
		int start_time = clock();
		srand(i);
		tree.contains(rand());
		time_tree += clock();
	}

	cout << "Vector find time: " << double(time_vec) / count << "ms" << endl;
	//Vector 1000 = 1.767ms
	//Vector 10000 = 16.255ms
	//Vector 100000 = 283.544ms
	cout << "Tree find time: " << double(time_tree) / count << "ms" << endl;
	//Tree 1000 =  1ms
	//Tree 10000 = 12.554ms
	//Tree 100000 = 133.343ms
	*//////////////////////////////////////////////////////////////////////////////////////////////////////

	//for (int i = 0; i < count; ++i) {
	//	int start_time = clock();
	//	srand(i);
	//	vector.push_back(rand());
	//	auto found = std::find(vector.begin(), vector.end(), rand());
	//	if (found != vector.end()) {
	//		vector.erase(found);
	//	}
	//	time_vec += clock();
	//}
	//
	///*for (int i = 0; i < count; ++i) {
	//	int start_time = clock();
	//	srand(i);
	//	tree.insert(rand());
	//	tree.erase(rand());
	//	time_tree += clock();
	//}*/

	//cout << "Vector insert and delete time time: " << double(time_vec) / count << "ms" << endl;
	////Vector 1000 = 1ms
	////Vector 10000 = 17.031ms
	////Vector 100000 = 143.165ms
	//cout << "Tree insert and delete time: " << double(time_tree) / count << "ms" << endl;
	////Tree 1000 = 1.469ms
	////Tree 10000 = 12.415ms
	////Tree 100000 = 226.975ms

	////////////////////////////////////////////////////////////////
	//Task
	///////////////////////////////////////////////////////////////

	vector<int> vec1 = { 3, 2, 2, 4};
	vector<int> vec2 = { 2, 1, 2, 2, 3, 7, 2, 5, 4, 2, 3, 3, 4, 3 };
	vector<int> for_task1 = find_repeat(vec1);
	vector<int> for_task2 = find_repeat(vec2);

	print(for_task1);
	print(for_task2);

	//////////////////////////////////////////////////////////////////
	//Additional Task
	//////////////////////////////////////////////////////////////////
	
	

	return 0;
}
