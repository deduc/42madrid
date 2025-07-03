#include <stdio.h>

int	is_space(char c)
{
	// \t \n \v \f \r o SPACE ' '
	if ((c >= 9 && c <= 13) || c == 32)
		return (0);
	else
		return (1);
}

int	is_sign(char c)
{
	if (c == '-')
		return (1);
	else
		return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	main()
{
	char	str[34] = "     \t-----------------3132132g21       ";
	int		positive;
	int		index;
	//  n*10 + num; 10 es por la base decimal
	int		number;
	int		out;

	positive = 1;
	index = 0;
	number = 0;
	out = 0;
	while (index < 34)
	{
		if (is_space(str[index]) == 0 && out == 0)
		{
			index++;
			continue;
		}
		else if (is_sign(str[index]) && out <= 1)
		{
			out = 1;
			positive = positive * -1;
		}
		else if (is_number(str[index]) && out <= 2)
		{
			out = 2;
			number = number * 10 + (int) str[index] - '0';
		}
		else if (is_alpha(str[index]) == 1 && out == 2)
			break;
		index++;
	}
	printf("%i\n", number);
	return (0);
}