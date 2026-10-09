#include <iostream>
#include "matrix.hpp"

Matrix::Matrix() : data_{} {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cin >> data_[i][j];
		}
	}
}

void Matrix::print() const {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << data_[i][j] << '\t';
		}
		std::cout << '\n';
	}
}