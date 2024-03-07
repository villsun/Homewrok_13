#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	// Завдання 1

	/*FILE* p_file_1 = fopen(R"(D:\file_1.txt)", "r");
	FILE* p_file_2 = fopen(R"(D:\file_2.txt)", "r");
	char c_file_1;
	char c_file_2;
	char str_file_1[50];
	char str_file_2[50];

	if (p_file_1 == nullptr || p_file_2 == nullptr)
	{
		cout << "Error!\n";
		return -1;
	}

	do
	{
		if (fgets(str_file_1, 50, p_file_1) == nullptr || fgets(str_file_2, 50, p_file_2) == nullptr)
		{
			break;
		}

		if (strcmp(str_file_1, str_file_2) != 0)
		{
			cout << str_file_1 << endl;
			cout << str_file_2 << endl;
		}

	} while (true);

	fclose(p_file_1);
	fclose(p_file_2);*/

	// Завдання 2

	FILE* p_file_1 = fopen(R"(D:\file_1.txt)", "r");
	FILE* p_file_2 = fopen(R"(D:\file_3.txt)", "w");
	char c_file_1;
	int counter_1 = 0;
	int counter_2 = 0;
	int counter_3 = 0;
	int counter_4 = 0;
	int counter_5 = 0;

	do
	{
		c_file_1 = fgetc(p_file_1);
		counter_1++;
		if (c_file_1 == '\n')
		{
			counter_2++;
		}
		if (c_file_1 == 'a' || c_file_1 == 'e' || c_file_1 == 'i' || c_file_1 == 'o' || c_file_1 == 'u' || c_file_1 == 'y')
		{
			counter_3++;
		}
		if (c_file_1 == 'p' || c_file_1 == 'b' || c_file_1 == 'm' || c_file_1 == 'w' || c_file_1 == 'f' || c_file_1 == 't' || c_file_1 == 'd' || c_file_1 == 'n' || c_file_1 == 's' || c_file_1 == 'z' || c_file_1 == 'r' || c_file_1 == 'j' || c_file_1 == 'k' || c_file_1 == 'g' || c_file_1 == 'h')
		{
			counter_4++;
		}
		if (c_file_1 >= '0' && c_file_1 <= '9')
		{
			counter_5++;
		}
	} while (c_file_1 != EOF);

	fprintf(p_file_2, "%i\n%i\n%i\n%i\n%i\n", counter_1, counter_2, counter_3, counter_4, counter_5);

	fclose(p_file_1);
	fclose(p_file_2);

	return 0;
}
