#pragma once

class Debtor {

	string fullName = "";
	DateTime birthDay;
	string phone = "";
	string email = "";
	string adress = "";
	int debt = 0;

public:

	Debtor(string fullName, DateTime birthDaystring, string phone, string email, string adress, int debt)
		:fullName(fullName), birthDay(birthDay), phone(phone), email(email), adress(adress), debt(debt) {}

	string getFullName()const { return fullName; }
	string getPhone()const { return phone; }
	DateTime getBirthDay()const { return birthDay; }
	string getEmail()const { return email; }
	int getDebt()const { return debt; }
	string getAdress()const { return adress; }




	friend ostream& operator<<(ostream& out, const Debtor& d);

};

ostream& operator<<(ostream& out, const Debtor& d) {
	cout << setw(10) << "FullName: " << d.fullName << endl
		<< setw(10) << "Phone: " << d.phone << endl
		<< setw(10) << "Birthday: " << d.birthDay.day << "/" << d.birthDay.month << "/" << d.birthDay.year << endl
		<< setw(10) << "Email: " << d.email << endl
		<< setw(10) << "Adress: " << d.adress << endl
		<< setw(10) << "Debt: " << d.debt << endl;

	return out;
}
