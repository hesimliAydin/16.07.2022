#pragma once

bool debtorDebtASC(const Debtor& d1, const Debtor& d2) {
	return d1.getDebt() > d2.getDebt();
}

void IfDomen(const Debtor& d)
{
	if (d.getEmail().find("rhyta.com") != string::npos || d.getEmail().find("dayrep.com") != string::npos)
		cout << d << endl;
}

void IfHasEight(const Debtor& d)
{
	if (d.getPhone().find("8") == string::npos)
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

