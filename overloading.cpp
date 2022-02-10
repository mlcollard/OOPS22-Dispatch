/*
    overloading.cpp

    Example for demo of name mangling in C++
*/

#include <vector>

void action(int n) {}
void action(double x) {}
void action(char c) {}

void action(double& x) {}
void action(double* x) {}

void action(const double& x) {}
void action(const double* x) {}

void action(std::vector<int>&) {}
void action(const std::vector<int>&) {}

int main() {

    return 0;
}
