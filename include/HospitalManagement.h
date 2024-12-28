#ifndef HOSPITALMANAGEMENT_H
#define HOSPITALMANAGEMENT_H

#include <iostream>
#include <vector>
#include "Hospital.h"
#include "Patient.h"
#include "PrintHospitalData.h"
#include "PrintPatientData.h"
#include "SortHospitalByRating.h"

void HospitalManagement(int numPatients) {
    std::vector<Hospital> hospitals(numPatients);
    std::vector<Patient> patients(numPatients);

    for (int i = 0; i < numPatients; i++) {
        std::cout << "\nEnter details for Patient " << i + 1 << " and their Hospital:" << std::endl;

        std::cout << "Patient Name: ";
        std::cin >> patients[i].P_name;
        std::cout << "Patient ID: ";
        std::cin >> patients[i].P_id;
        std::cout << "Patient Contact: ";
        std::cin >> patients[i].contact;

        std::cout << "Hospital Name: ";
        std::cin >> hospitals[i].H_name;
        std::cout << "Available Beds: ";
        std::cin >> hospitals[i].available_beds;
        std::cout << "Rating (out of 10): ";
        std::cin >> hospitals[i].rating;
        std::cout << "Doctor Name: ";
        std::cin >> hospitals[i].doctor_name;

        // Link the patient with the hospital
        patients[i].doctor_name = hospitals[i].doctor_name;
    }

    std::cout << std::endl;

    PrintHospitalData(hospitals);
    PrintPatientData(patients, hospitals);
    SortHospitalByRating(hospitals);
}

#endif
