#include"organization.h"
#include"designer.h"
#include"developer.h"
#include"admin.h"

void main()
{
	organization o("ITstep", 1000);

	o.addEmployer(new developer("Petya", 25, 3, 5));
	o.addEmployer(new designer("Katya", 23, 0, 2));
	o.addEmployer(new admin("Fedya", 35, 10, 10, 2000));

	o.info();

	o.deleteEmployer(0);

	cout << "\n\n\n\n";

	o.info();

	system("pause");
}