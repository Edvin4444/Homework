#include <iostream>
#include <string>

bool is_palindrome (std::string);

int main ()
{
	// some code
}

bool is_palindrome (std::string str)
{	
	int k = 0;
	int size = str.size ();
	
	for (int i = 0; i < size; ++i)
	{
		if (str[i] >= 'A' && str[i] <= 'Z') { str[i] += 32; }
	}

	for (int i = 0; i < size - k; ++i)
	{
		for (int j = i + 1; j < size - k; ++j)
		{
			if (str[i] == str[j])
			{
				std::swap (str[i], str[k]);
				std::swap (str[j], str[size - k - 1]);
				++k;
				break;
			}
		}
	}

	for (int i = 0, j = size - 1; i < size / 2 ; ++i, --j)
	{
		if (str[i] == ' ')
		{
			++j;
			continue;
		}
		if (str[j] == ' ')
		{
			--i;
			continue;
		}
		if (str[i] != str[j]) { return false; }
	}
	return true;			
}


			

