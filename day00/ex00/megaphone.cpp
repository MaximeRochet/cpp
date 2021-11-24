#include <string>
#include <iostream>

int main(int ac, char **av)
{
	ac = 1;
	if(av[1])
	{
		while(av[ac])
		{
			std::string str = av[ac];
			for(size_t i = 0; i < str.size(); i++)
			 	str.at(i) = std::toupper(str.at(i));
			std::cout << str;
			ac++;;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return(0);
}
