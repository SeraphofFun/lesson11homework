#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	int min = -20;
	int max = 20;
	int mass1[10];
	cout << "tap1"<<endl;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		mass1[i] = random;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << mass1[i] << " ";

	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if (mass1[i]<0)
		{
			mass1[i] = -mass1[i];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << mass1[i] << " ";

	}
	cout << endl<<endl;
	cout << "tap2" << endl;
	min = 40;
	max = 100;
	char mass2[10];
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		mass2[i] = (char)random;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << mass2[i] << " ";

	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if ((int)mass2[i]<58&& (int)mass2[i]>46)
		{
			mass2[i] += 17;
		}

	}
	for (int i = 0; i < 10; i++)
	{
		cout << mass2[i] << " ";

	}



	cout << endl << endl;
	cout << "tap3" << endl;
	min = 0;
	max = 100;
	int mass3[10];
	int ededort = 0;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		mass3[i] = random;
		ededort += random;
	}
	ededort /= 10;
	for (int i = 0; i < 10; i++)
	{
		cout << mass3[i] << " ";

	}
	int yaxin = mass3[0];
	for (int i = 1; i < 10; i++)
	{
		if (ededort<mass3[i]&& ededort<yaxin)
		{
			if (mass3[i]-ededort<yaxin-ededort)
			{
				yaxin = mass3[i];
			}
		}
		else if (ededort > mass3[i] && ededort < yaxin)
		{
			if (ededort - mass3[i] < yaxin - ededort)
			{
				yaxin = mass3[i];
			}
		}
		else if (ededort > mass3[i] && ededort > yaxin)
		{
			if (ededort - mass3[i] < ededort-yaxin  )
			{
				yaxin = mass3[i];
			}
		}
		else if (ededort < mass3[i] && ededort > yaxin)
		{
			if ( mass3[i] - ededort < ededort - yaxin)
			{
				yaxin = mass3[i];
			}
		}

	}
	cout << endl << " ededi orta =" << ededort;
	cout << endl <<"en yaxin element"<< yaxin << endl << endl;



	cout << endl << endl;
	cout << "tap4" << endl;
	min = 0;
	max = 100;
	cout << "surusmeyi daxil edin" << endl;
	int sur;
	cin >> sur;
	int mass4[10];
	int mass4_1[10];
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		mass4[i] = random;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << mass4[i] << " ";

	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if (9-sur+i+1<10)
		{
			mass4_1[9-sur+i+1] = mass4[i];
		}
		else
		{
			mass4_1[i-sur] = mass4[i];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << mass4_1[i] << " ";

	}



	cout << endl << endl;
	cout << "tap5" << endl;
	min = 0;
	max = 100;
	double mass5[10];
	double mass5_1[10];
	int j = 0;
	for (int i = 0; i < 10; i++)
	{
		double random = min + rand() % (max - min + 1);
		mass5[i] = random/10;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << mass5[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if (mass5[i]-int(mass5[i])!=0)
		{
			mass5_1[j] = mass5[i];
			j++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (mass5[i] - int(mass5[i]) == 0)
		{
			mass5_1[j] = mass5[i];
			j++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << mass5_1[i] << " ";
	}
}
