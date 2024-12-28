#ifndef PRINTPATIENTDATA_H
#define PRINTPATIENTDATA_H

#include <iostream>
#include <vector>
#include <iomanip>
#include "Patient.h"
#include "Hospital.h"

void PrintPatientData(const std::vector<Patient>& patients, const std::vector<Hospital>& hospitals) {
    std::cout << "PRINT patients DATA:" << std::endl;
    std::cout << std::left << std::setw(20) << "Patient_Name"
              << std::setw(15) << "Patient_Id"
              << std::setw(20) << "Patient_Contact"
              << std::setw(20) << "Alloted_Hospital" << std::endl;

    for (size_t i = 0; i < patients.size(); i++) {
        std::cout << std::left << std::setw(20) << patients[i].P_name
                  << std::setw(15) << patients[i].P_id
                  << std::setw(20) << patients[i].contact
                  << std::setw(20) << hospitals[i].H_name << std::endl;
    }
    std::cout << std::endl;
}

#endif
