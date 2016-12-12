#include <iostream> 
#include <string> 
using namespace std;

int main()
{
	short i1, i2, i3, i4, i5, i6;
	double C;
	C = 0;
	for (i1 = 0; i1 < 10; i1++)
		for (i2 = 0; i2 < 10; i2++)
			for (i3 = 0; i3 < 10; i3++)
				for (i4 = 0; i4 < 10; i4++)
					for (i5 = 0; i5 < 10; i5++)
						for (i6 = 0; i6 < 10; i6++)
							if (i1 + i2 + i3 == i4 + i5 + i6)
								C = C + 1;
	setlocale(LC_ALL, "Russian");
	cout << "Количество счастливых билетов " << C;
	system("pause");
	return 0;
}