#include <iostream>
#include <cmath>

int main() {
    double angleError = 5.0 / 3600.0; 
    double totalError = 0.0;

    for (int i = 0; i < 7; i++) {
        totalError += std::pow(angleError, 2);
    }

    double finalError = std::sqrt(totalError);
    std::cout << "Допустимая невязка в 7-угольнике при измерении углов в 2 приема: " << finalError << " радиан" << std::endl;

    return 0;
}