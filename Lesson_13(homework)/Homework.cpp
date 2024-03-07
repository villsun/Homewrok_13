#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	// Завдання 1

	FILE* p_file_1 = fopen(R"(D:\file_1.txt)", "r");
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
	fclose(p_file_2);

	return 0;
}
