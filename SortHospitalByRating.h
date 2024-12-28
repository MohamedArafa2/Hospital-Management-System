#ifndef SORTHOSPITALBYRATING_H
#define SORTHOSPITALBYRATING_H

#include <algorithm>
#include <vector>
#include "Hospital.h"
#include "PrintHospitalData.h"

bool rating(const Hospital& A, const Hospital& B) {
    return A.rating > B.rating;
}

void SortHospitalByRating(std::vector<Hospital>& hospitals) {
    std::sort(hospitals.begin(), hospitals.end(), rating);
    std::cout << "SORT BY Rating:" << std::endl << std::endl;
    PrintHospitalData(hospitals);
}

#endif
