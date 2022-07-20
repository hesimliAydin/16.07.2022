#pragma once

class IfDomenn
{
	string domen;
public:
	IfDomenn(string domen)
	{
		this->domen = domen;
	}

	void operator()(const Debtor& d)
	{
		if (d.getEmail().find(domen) != string::npos)
			cout << d << endl;
	}
};

class IfHasEightt
{
	string number;
public:
	IfHasEightt(string number)
	{
		this->number = number;
	}

	void operator()(const Debtor& d)
	{
		if (d.getPhone().find(number) == string::npos)
		{
			int a = d.getFullName().find('.');
			for (size_t i = a + 2; i < d.getFullName().size(); i++)
			{
				cout << d.getFullName()[i];
			}
			cout << endl;
			cout << "Age: " << 2022 - (d.getBirthDay().year) << endl;
			cout << "Total debt: " << d.getDebt() << endl;
			cout << endl << endl;
		}
	}

};


