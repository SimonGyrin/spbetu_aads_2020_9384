/*
12. ��������� �������������� ���������� ��� ������� ������.
c�����::=���������� | ������� | ��������
����������::=[������� ��������] | +
�������::=(�������� ����������) | -
��������::={���������� �������} | 0
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

bool brackets(std::string expression, int& index);
bool isSquareBrackets(std::string expression, int& index);
bool isRoundBrackets(std::string expression, int& index);
bool isFiguredBrackets(std::string expression, int& index);


bool brackets(std::string expression, int& index)
{
	bool isExpression = false;
	if (expression[index] == '+' || expression[index] == '-' || expression[index] == '0')
	{
		index += 1;
		return true;
	}
	else if (expression[index] == '[')
	{
		index += 1;
		isExpression = isSquareBrackets(expression, index);
		if (expression[index] == ']')
		{
			index += 1;
			return true;
		}
	}
	else if (expression[index] == '(')
	{
		index += 1;
		isExpression = isRoundBrackets(expression, index);
		if (expression[index] == ')')
		{
			index += 1;
			return true;
		}
	}
	else if (expression[index] == '{')
	{
		index += 1;
		isExpression = isFiguredBrackets(expression, index);
		if (expression[index] == '}')
		{
			index += 1;
			return true;
		}
	}
	return isExpression;
}

bool isSquareBrackets(std::string expression, int& index)
{
	bool b = false;
	if (expression[index] == '(') {
		index += 1;
		b = isRoundBrackets(expression, index);
		index += 1;
		if (expression[index] == ')')
			return true;
	}
	else if (expression[index] == '{')
	{
		index += 1;
		b = isFiguredBrackets(expression, index);
		index += 1;
		if (expression[index] == '}')
			return true;
	}
	else if (expression[index] == '-')
	{
		index += 1;
		if (expression[index] == '0')
		{
			index += 1;
			return true;
		}
	}
	return b;
}

bool isRoundBrackets(std::string expression, int& index)
{
	bool b = false;
	if (expression[index] == '{') {
		index += 1;
		b = isFiguredBrackets(expression, index);
		index += 1;
		if (expression[index] == '}')
			return true;
	}
	else if (expression[index] == '[')
	{
		index += 1;
		b = isSquareBrackets(expression, index);
		index += 1;
		if (expression[index] == ']')
			return true;
	}
	else if (expression[index] == '0')
	{
		index += 1;
		if (expression[index] == '+')
		{
			index += 1;
			return true;
		}
	}
	return b;
}

bool isFiguredBrackets(std::string expression, int& index)
{
	bool b = false;
	if (expression[index] == '[') {
		index += 1;
		b = isSquareBrackets(expression, index);
		index += 1;
		if (expression[index] == ']')
			return true;
	}
	else if (expression[index] == '(')
	{
		index += 1;
		b = isRoundBrackets(expression, index);
		index += 1;
		if (expression[index] == ')')
			return true;
	}
	else if (expression[index] == '+')
	{
		index += 1;
		if (expression[index] == '-')
		{
			index += 1;
			return true;
		}
	}
	return b;
}

int main()
{
	int index = 0;
	std::string expression;
	std::string filePath;

	//std::cout << "Enter fileIn path: ";
	//std::cin >> filePath;

	std::ifstream fileIn("FileIn.txt");

	if (!fileIn)
	{
		std::cout << "File cannot be opened!\n";
		return 1;
	}

	int offset = 0;
	while (getline(fileIn, expression))
	{
		if (offset < expression.length())
			offset = expression.length();
	}
	offset += 5;

	fileIn.clear();
	fileIn.seekg(0);

	//std::cout << "Enter fileOut Path: ";
	//std::cin >> filePath;

	std::ofstream fileOut("FileOut");

	while (getline(fileIn, expression))
	{
		if (!brackets(expression, index) || expression.length() != index)
		{
			fileOut << std::endl << std::setw(offset) << std::left << expression << std::setw(offset) << std::left << "No";
			//std::cout << " = No\n";
			std::cout << std::endl << std::setw(offset) << std::left << expression << std::setw(offset) << std::left << "No";
		}
		else
		{
			fileOut << std::endl << std::setw(offset) << std::left << expression << std::setw(offset) << std::left << "Yes";
			//std::cout << " = Yes\n";
			std::cout << std::endl <<std::setw(offset) << std::left << expression << std::setw(offset) << std::left << "Yes";
		}


		expression.clear();
		index = 0;
	}

	fileIn.close();
	fileOut.close();

	return 0;
}