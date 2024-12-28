#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include "Hospital.h"

class Patient : public Hospital {
public:
    std::string P_name;
    int P_id;
    std::string contact;
};

#endif
