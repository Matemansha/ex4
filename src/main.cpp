#include <iostream>
#include "matrix.hpp"

int main() {
	Matrix m;
	m.print();
	std::cout << "det = " << m.det() << std::endl;
	return 0;
}

