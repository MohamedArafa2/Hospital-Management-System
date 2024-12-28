# 🏥 Hospital Management System

A professional C++ console application for managing hospital records and patient information.

## Overview

This Hospital Management System provides an efficient way to manage and track hospital data, patient records, and doctor assignments, with features for sorting and displaying comprehensive reports.

## ✨ Key Features

- 📝 Patient Record Management
- 🏨 Hospital Data Tracking
- 👨‍⚕️ Doctor-Patient Association
- ⭐ Hospital Rating System
- 📊 Data Visualization & Reports

## 🛠️ Technical Stack

- Language: C++ (C++11)
- Build System: Make
- Architecture: Object-Oriented Design
- Data Structures: STL Containers

## 📦 Installation

```bash
# Clone the repository
git clone https://github.com/MohamedArafa2/Hospital-Management-System.git

# Navigate to project directory
cd Hospital-Management-System

# Build the project
make

# Run the application
./hospital_management
```

## 💻 Usage Example

```plaintext
Enter the number of patients: 1

Enter details for Patient 1 and their Hospital:
Patient Name: John
Patient ID: 101
Patient Contact: 1234567890
Hospital Name: City General
Available Beds: 50
Rating (out of 10): 8.5
Doctor Name: Dr. Smith

PRINT hospitals DATA:
HospitalName        Beds_Available  Rating /10     Doctor_Name         
City General        50             8.5            Dr. Smith            

PRINT patients DATA:
Patient_Name        Patient_Id    Patient_Contact    Alloted_Hospital    
John               101           1234567890         City General        
```

## 🔧 Project Structure

```
Hospital-Management-System/
├── include/
│   ├── Hospital.h              # Hospital class definition
│   ├── Patient.h              # Patient class definition
│   ├── HospitalManagement.h   # Main management system
│   ├── PrintHospitalData.h    # Hospital data display
│   ├── PrintPatientData.h     # Patient data display
│   └── SortHospitalByRating.h # Rating-based sorting
├── src/
│   └── main.cpp               # Entry point
└── [Build & Config Files]
```

## 👤 Author

**Mohamed Arafa**
- GitHub: [@MohamedArafa2](https://github.com/MohamedArafa2)

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
