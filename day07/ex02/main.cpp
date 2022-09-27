#include "array.hpp"
#include <iostream>

int		main(void)
{
	std::cout << "||  EMPTY ARRAY  ||" << std::endl;
	try
	{
		Array<int>	test;

		std::cout << test[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

	std::cout << std::endl << "||  INT ARRAY  ||" << std::endl;
	try
	{
		Array<int>	test(10);

		test[0] = 5;
		test[1] = 9;
		std::cout << test[0] << std::endl;
		std::cout << test[1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

	std::cout << std::endl << "||  CHAR ARRAY  ||" << std::endl;
	try
	{
		Array<char>	test(10);

		test[0] = 'a';
		test[1] = 'b';
		test[2] = 'c';
		std::cout << test[0] << std::endl;
		std::cout << test[1] << std::endl;
		std::cout << test[2] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

	std::cout << std::endl << "||  STRING ARRAY + SIZE()  ||" << std::endl;
	try
	{
		Array<std::string>	test(10);

		test[0] = "salut";
		test[1] = "coucou";
		test[2] = "oui";
		std::cout << test[0] << std::endl;
		std::cout << test[1] << std::endl;
		std::cout << test[2] << std::endl;
		std::cout << test.size() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

	std::cout << std::endl << "||  DEEP COPY  ||" << std::endl;
	try
	{
		Array<std::string>	test(10);

		test[0] = "salut";
		test[1] = "coucou";
		test[2] = "oui";
		test[3] = "J'ai ma propre zone memoire";

		Array<std::string>	copy(test);

		copy[3] = "Et moi aussi !";
		std::cout << test[0] << std::endl;
		std::cout << test[1] << std::endl;
		std::cout << test[2] << std::endl;
		std::cout << test[3] << std::endl << std::endl;
		std::cout << copy[0] << std::endl;
		std::cout << copy[1] << std::endl;
		std::cout << copy[2] << std::endl;
		std::cout << copy[3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}


	return (0);
}
