#ifndef PRINTHOSPITALDATA_H
#define PRINTHOSPITALDATA_H

#include <iostream>
#include <vector>
#include <iomanip>
#include "Hospital.h"

void PrintHospitalData(const std::vector<Hospital>& hospitals) {
    std::cout << "PRINT hospitals DATA:" << std::endl;
    std::cout << std::left << std::setw(20) << "HospitalName"
              << std::setw(15) << "Beds_Available"
              << std::setw(15) << "Rating /10"
              << std::setw(20) << "Doctor_Name" << std::endl;

    for (const auto& hospital : hospitals) {
        std::cout << std::left << std::setw(20) << hospital.H_name
                  << std::setw(15) << hospital.available_beds
                  << std::setw(15) << hospital.rating
                  << std::setw(20) << hospital.doctor_name << std::endl;
    }
    std::cout << std::endl;
}

#endif
