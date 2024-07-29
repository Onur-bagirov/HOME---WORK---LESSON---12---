#include <iostream>

using namespace std;

int main()
{
	cout << "=========================================================";
	srand(time(NULL));
	cout << "=========================================================";
	cout << "\n\n";
	cout << "Tap - 1";
	cout << "\n\n\n\n";

	unsigned int number_one[5] = { 1,2,3,4,5 };

	for (int w = 0; w < 5; w++)
	{
		cout << (number_one[w]) << ",";
	}

	cout << "\n";

	for (int q = 4; q >= 0; --q)
	{
		cout << (number_one[q]) << ",";
	}
	cout << "\n\n\n";
	cout << "=========================================================";
	cout << "\n\n";
	cout << "Tap - 2";
	cout << "\n\n\n\n";

	int max_number = 100;
	int min_number = 1;
	int	const num = 20;

	unsigned int number_two[num] = {};

	for (int e = 0; e < num; ++e)
	{
		number_two[e] = rand() % (max_number - min_number + 1) + min_number;
	}

	for (int e = 0; e < num; ++e)
	{
		cout << number_two[e] << "," << endl;
	}

	for (int e = 0; e < num; e += 2)
	{
		cout << "\nIndex - " << e << "-" << number_two[e];
	}
	cout << "\n\n\n";
	cout << "=========================================================";
	cout << "\n\n";
	cout << "Tap - 3";
	cout << "\n\n\n\n";

	int min_number_3 = -20;
	int max_number_3 = 20;

	const int num_3 = 10;
	int number_three[num_3] = {};

	for (int r = 0; r < num_3; r++) {
		number_three[r] = rand() % (max_number_3 - min_number_3 + 1) + min_number_3;
	}
	cout << "Numbers : ";
	for (int r = 0; r < num_3; ++r) {
		std::cout << number_three[r] << ", ";
	}
	cout << endl;

	int p_c = 0;
	int p_s = 0;

	for (int r = 0; r < num_3; ++r)
	{
		if (number_three[r] > 0) {
			p_s += number_three[r];
			p_c++;
		}
	}

	if (p_c > 0) {
		int average = (p_s) / p_c;
		cout << "Numerical average : " << average;
	}
	else {
		cout << "Any couple number";
	}
	cout << "\n\n\n";
	cout << "=========================================================";
	cout << "\n\n";
	cout << "Tap - 4";
	cout << "\n\n\n\n";

	int min_number_4 = -5;
	int max_number_4 = 5;

	const int num_4 = 20;
	int number_four[num_4] = {};

	for (int t = 0; t < num_4; t++) {
		number_four[t] = rand() % (max_number_4 - min_number_4 + 1) + min_number_4;
	}
	cout << "Numbers : ";
	for (int t = 0; t < num_4; ++t) {
		cout << number_four[t];
		if (t < num_4 - 1) {
			cout << ", ";
		}
	}
	cout << endl;

	int single_num_4 = 0;
	int couple_num_4 = 0;
	int zero_num_4 = 0;

	for (int t = 0; t < num_4; t++) {
		if (number_four[t] > 0) {
			couple_num_4++;
		}
		else if (number_four[t] < 0) {
			single_num_4++;
		}
		else {
			zero_num_4++;
		}
	}
	cout << "Positive numbers: " << couple_num_4 << endl;
	cout << "Negative numbers: " << single_num_4 << endl;
	cout << "Zero numbers: " << zero_num_4 << endl;
	cout << "\n\n\n";
	cout << "=========================================================";
	cout << "\n\n";
	cout << "Tap - 5";
	cout << "\n\n\n\n";

	int number_5[10] = { 2, 5, 8, 3, 6, 9, 4, 7, 1, 0 };

	int s_n = 0;
	int c_n = 0;
	int topla = 0;
	int orta = 0;

	for (int i = 0; i < 10; ++i) {
		if (i % 2 == 0) {
			s_n += number_5[i];
			topla++;
		}
		else {
			c_n += number_5[i];
			orta++;
		}
	}

	int a_n = (topla == 0) ? 0 : s_n / topla; 
	int a_d = (orta == 0) ? 0 : c_n / orta;

	cout << "\tCouple index plural : " << s_n << "\n";
	cout << "\tSimple number numerical average : " << a_d;
	cout << "\n\n\n";
	cout << "=========================================================";
	cout << "\n\n";
	cout << "Tap - 7";
	cout << "\n\n\n\n";

	int	min_numer_7 = 1;
	int max_number_7 = 100;
	int number_7_;
	const int num_7 = 50;
	int number_7[num_7] = {};

	for (int y = 0; y < num_7; y++)
	{
		number_7[y] = rand() % (max_number_7 - min_numer_7 + 1) + min_numer_7;
	}
	cout << "Number : ";
	for (int y = 0; y < num_7; y++)
	{
		cout << number_7[y] << ",";
	}
	cout << "\n";
	cout << "\tEnter number :";
	cin >> number_7_;

	int count = 0;
	if (number_7_ >= 1 && number_7_ <= 100)
	{
		for (int y = 0; y < num_7; y++) {
			if (number_7[y] == number_7_) {
				count++;
			}
		}
	}
	cout << "\tAnswer : " << count;
	cout << "\n\n\n";
	cout << "=========================================================";
	cout << "\n\n";
	cout << "Tap - 8";
	cout << "\n\n\n\n";

	int min_number_8 = 1;
	int max_number_8 = 100;
	const int num_8 = 10;
	int number_8[num_8] = {};

	for (int u = 0; u < num_8; u++)
	{
		number_8[u] = rand() % (max_number_8 - min_number_8 + 1) + min_number_8;
	}
	cout << "Number : ";
	for (int u = 0; u < num_8; u++)
	{
		cout << number_8[u] << ",";
	}
	cout << "\n";
	int bol_7 = 0;
	int bol_5 = 0;
	int bol_3 = 0;

	for (int u = 0; u < num_8; u++)
	{
		if (number_8[u] % 7 == 0)
		{
			bol_7++;
		}
		else if (number_8[u] % 5 == 0)
		{
			bol_5++;
		}
		else if (number_8[u] % 3 == 0)
		{
			bol_3++;
		}
	}
	cout << "\t7 divide - " << bol_7 << "\n";
	cout << "\t5 divide - " << bol_5 << "\n";
	cout << "\t3 divide - " << bol_3 << "\n";
	cout << "\n\n\n";
	cout << "=========================================================";
	cout << "\n\n";
	cout << "Tap - 9";
	cout << "\n\n\n\n";

	int min_number_9 = 1;
	int max_number_9 = 100;
	const int num_9 = 10;
	int number_9[num_9] = {};

	for (int o = 0; o < num_9; o++)
	{
		number_9[o] = rand() % (max_number_9 - min_number_9 + 1) + min_number_9;
	}
	cout << "Number : ";
	for (int o = 0; o < num_9; o++)
	{
		cout << number_9[o] << ",";
	}
	int bol_3_5 = 0;
	for (int o = 0; o < num_9; o++)
	{
		if (number_9[o] % 3 == 0 && number_9[o] % 5 == 0)
		{
			bol_3_5++;
		}
	}
	cout << "\n";
	cout << "3 and 5 are the number of simultaneous divisions :" << bol_3_5;
	cout << "\n\n\n";
	cout << "=========================================================";
	cout << "\n\n";
	cout << "Tap - 10";
	cout << "\n\n\n\n";

	int min_number_10 = -10;
	int max_number_10 = 30;
	const int num_10 = 10;
	int number_10[num_10] = {};

	for (int p = 0; p < num_10; p++)
	{
		number_10[p] = rand() % (max_number_10 - min_number_10 + 1) + min_number_10;
	}
	cout << "Number : ";
	for (int p = 0; p < num_10; p++)
	{
		cout << number_10[p] << ",";
	}
	int nega = -1;
	for (int p = 0; p < num_10; p++) 
	{
		if (number_10[p] < 0) {
			nega = p;
			break;
		}
	}
	int  __number__10__= 0;
	if (nega != -1) 
	{
		for (int p = nega+ 1; p < num_10; p++) {
			__number__10__+= number_10[p];
		}
	}
	cout << "\n";
	cout << "\tAnswer : " << __number__10__;
	cout << "\n\n\n";
	cout << "=========================================================";

}
