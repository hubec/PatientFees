#include "PatientAccount.h"
#include <iostream>
// #include <stdexcept>
using namespace std;

PatientAccount::PatientAccount()
{
	name = "";
	idNumber = 0;
}

PatientAccount::PatientAccount(string name, int idNumber) {
	name = name;
	idNumber = idNumber;
	//validate idNumber?
}

void PatientAccount::setDailyRate() {
	dailyRate= // whatever we decide the daily rate should be
}

int PatientAccount::getDailyRate() {
	return dailyRate;
}

void PatientAccount::setDaysInHospital() {

}

int PatientAccount::getDaysInHospital() {
	return numberDays;
}

void PatientAccount::setTotalCharges() {

}

int PatientAccount::getTotalCharges() {
	return charges;
}

void PatientAccount::print() {
	cout << "Patient's Name: " << name << endl;
	cout << "ID Number: " << idNumber << endl;
}