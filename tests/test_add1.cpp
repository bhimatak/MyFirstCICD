#include <iostream>
#include "../include/mylib/utils.h"


using namespace std;

int main()
{
	if (add(2, -1) != 0) {
		cerr << "[FAIL] add(2,-1)!=1" << endl;
		return 1;
	}
	return 0;
}