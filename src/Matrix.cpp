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

double Matrix::det() const {
	return data_[0][0] * (data_[1][1] * data_[2][2] - data_[1][2] * data_[2][1])
	     - data_[0][1] * (data_[1][0] * data_[2][2] - data_[1][2] * data_[2][0])
	     + data_[0][2] * (data_[1][0] * data_[2][1] - data_[1][1] * data_[2][0]);
}

