#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <msclr\marshal_cppstd.h>

using namespace std;

//sin==q
//cos==w
//tg==e
//ctg==r
//exp==t
//log==y

double triga(double a, char b)
{
	if (b == 'q')
		return sin(a);
	if (b == 'w')
		return cos(a);
	if (b == 'e')
		return sin(a) / cos(a);
	if (b == 'r')
		return cos(a) / sin(a);
	if (b == 't')
		return exp(a);
	if (b == 'y')
		return log(a);
}

double operations(double a, double b, char c)
{
	if (c == '+')
		return a + b;
	if (c == '-')
		return b - a;
	if (c == '*')
		return a * b;
	if (c == '/')
		return b / a;
	if (c == '^')
		return  pow(b, a);
}

int check(char a)
{
	if (a == '(')
		return 1;
	if (a == 'q' || a == 'w' || a == 'e' || a == 'r' || a == 't' || a == 'y')
		return 5;
	if (a == '+' || a == '-')
		return 2;
	if (a == '*' || a == '/')
		return 3;
	if (a == '^')
		return 4;
}

string ansI(string s)
{
	string ans, a;
	string result = "";
	int prior = 0;
	double double1, double2, double3;
	vector <char> stack;
	int k = 0, m = 0, z = 0;
	string oper = "+ - / * ^ sin cos tg ctg log ( ) exp";
	string tmp = "";

	while (s.find('E') != -1)
	{
		int pos = s.find('E');
		if (pos >= 0)
		{
			for (int k = pos + 1; k < s.length() && oper.find(s[k] == -1); k++)
				tmp += s[k];
			s.erase(pos, tmp.length() + 1);
			if (tmp[0] == '+')
				tmp.erase(0, 1);
			s.insert(pos, ("*10^" + tmp));
		}
		tmp = "";
	}

	while (s.find("pi") != -1)
	{
		int pos = s.find("pi");
		if (pos >= 0)
		{
			s.erase(pos, 2);
			s.insert(pos, "3.141592653589793");
		}
	}

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'c' || s[i] == 's' || s[i] == 't' || s[i] == 'e' || s[i] == 'l')
		{
			a = s.substr(i, s.find('(', i) - i);
			if (a == "cos")
			{
				s[i] = 'w';
				s.erase(i + 1, s.find('(', i) - i - 1);
			}
			if (a == "sin")
			{
				s[i] = 'q';
				s.erase(i + 1, s.find('(', i) - i - 1);
			}
			if (a == "tg")
			{
				s[i] = 'e';
				s.erase(i + 1, s.find('(', i) - i - 1);
			}
			if (a == "ctg")
			{
				s[i] = 'r';
				s.erase(i + 1, s.find('(', i) - i - 1);
			}
			if (a == "exp")
			{
				s[i] = 't';
				s.erase(i + 1, s.find('(', i) - i - 1);
			}
			if (a == "log")
			{
				s[i] = 'y';
				s.erase(i + 1, s.find('(', i) - i - 1);
			}
		}
	}

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '/' && s[i + 1] == '0' && s[i + 2] != '.') z++;
		if (s[i] == '(') k++;
		if (s[i] == ')') m++;
	}

	if (k != m || z != 0)
		return "Error";

	if (k == m && z == 0)
	{
		if (isdigit(s[0]))
			result += s[0];
		else
		{
			if (s[0] == '-')
				result += s[0];
			else
			{
				stack.push_back(s[0]);
				prior = check(stack.back());
			}
		}
		for (int i = 1; i < s.length(); i++)
		{
			if (s[i] == '-' && isdigit(s[i - 1]) == 0)
			{
				result += s[i];
				continue;
			}
			if (isdigit(s[i]) || s[i] == '.')
				result += s[i];
			else
			{
				if (s[i] == ')')
				{
					while (stack.back() != '(')
					{
						char tmp = stack.back();
						stack.pop_back();
						result += " ";
						result += tmp;

					}
					stack.pop_back();
				}
				else
				{
					if (prior < check(s[i]) || s[i] == '(')
					{
						stack.push_back(s[i]);
						if (s[i] != '(' && s[i] != 'q' && s[i] != 'w' && s[i] != 'e' && s[i] != 'r' && s[i] != 't' && s[i] != 'y')
							result += " ";
					}
					else if (prior >= check(s[i]))
					{
						while (prior >= check(s[i]) && stack.back() != '(')
						{
							char tmp = stack.back();
							stack.pop_back();
							result += " ";
							result += tmp;
							if (!stack.empty())
								prior = check(stack.back());
							else
								prior = 0;
						}
						stack.push_back(s[i]);
						prior = check(stack.back());
						result += " ";
					}
				}
				if (!stack.empty())
					prior = check(stack.back());
				else
					prior = 0;
			}
		}

		while (!stack.empty())
		{
			char tmp = stack.back();
			stack.pop_back();
			result += " ";
			result += tmp;
		}
		result = result + ' ';
		if (result[0] == ' ')
			result.erase(0, 1);
		vector<double> stack2;
		while (result.length() > 0)
		{
			a = result.substr(0, result.find(' '));
			if (isdigit(a[0]) || (a[0] == '-' && isdigit(a[1])))
				stack2.push_back(stod(a));
			else
			{
				if (a[0] == 'q' || a[0] == 'w' || a[0] == 'e' || a[0] == 'r' || a[0] == 't' || a[0] == 'y')
				{
					double1 = stack2.back();
					stack2.pop_back();
					double2 = triga(double1, a[0]);
					stack2.push_back(double2);
				}
				else
				{
					if (stack2.size() == 0)
						return "Error";
					double1 = stack2.back();
					stack2.pop_back();
					if (stack2.size() == 0)
						return "Error";
					double2 = stack2.back();
					stack2.pop_back();
					double3 = operations(double1, double2, a[0]);
					stack2.push_back(double3);
				}
			}
			result.erase(0, result.find(' ') + 1);
		}
		ans = to_string(stack2.back());
		if (ans[ans.size() - 1] == '0')
			for (size_t i = ans.size() - 1; ans[i] == '0'; i--)
				ans.erase(i, 1);
		if (ans[ans.size() - 1] == '.')
			ans.erase(ans.size() - 1, 1);
	}
	return ans;
}