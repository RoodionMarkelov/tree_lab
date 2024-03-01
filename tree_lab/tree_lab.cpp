#include "tree_lab.h"

using namespace std;

int main()
{
	Tree tree;
	tree.insert(0);
	tree.insert(1);
	tree.insert(-1);
	tree.insert(2);
	tree.insert(-2);
	tree.insert(-2);
	
	tree.print();
	
	//cout << tree.contains(3) << endl;
	/*tree.erase(2);
	tree.erase(-2);
	tree.erase(1);
	tree.erase(-1);
	tree.erase(0);*/
	
	Tree tree2(tree);
	
	tree2.print();

	Tree tree3 = tree2;
	tree3.print();

	return 0;
}
