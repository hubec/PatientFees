#include <iostream>
#include <string>
//#include "Surgery.h"
//#include "Pharmacy.h"
using namespace std;

class PatientAccount // :public Surgery/Pharmacy
{
public:
	PatientAccount();
	PatientAccount(string name, int idNumber);
	int setDailyRate();
	int getDailyRate();
	int setDaysInHospital();
	int getDaysInHospital();
	int setTotalCharges();
	int getTotalCharges();
	void print();
private:
	string name;
	int idNumber, charges, numberDays, dailyRate;
};