#include <iostream>
#include "../include/mylib/utils.h"


using namespace std;

int main()
{
	if (add(2, 3) != 5) {
		cerr << "[FAIL] add(2,-1)!=5" << endl;
		return 1;
	}
	return 0;
}