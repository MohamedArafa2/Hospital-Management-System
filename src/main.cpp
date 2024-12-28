#include "HospitalManagement.h"
#include <iostream>

int main() {
    int numPatients;
    std::cout << "Enter the number of patients: ";
    std::cin >> numPatients;

    HospitalManagement(numPatients);

    return 0;
}
