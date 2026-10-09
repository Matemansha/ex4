#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
private:
    int data_[3][3];
public:
    Matrix();
    void print() const;
    double det() const;
};

#endif
