#include "ComplexNum.cpp"

int main() {
	ComplexNum c1, c2, a;
	c1.Input();
	c2.Input();
	if ((c1.module() == 0) || (c2.module() == 0)) cout << "ERROR";
	else
	{
		a = (c1 + c2) * (c2 - 2 * c1) / (c1 - 4 * c2);
		a.Output();
	}

	system("pause");
	return 0;
}