#include "Span.hpp"
#include <iterator>

int	main(void)
{
	Span	empty(0);
	Span	hello(5);

//try
//{
//empty.addNumber(5);
//}
//catch (std::exception &e)
//{
//	std::cout << e.what() << std::endl;
//}
	try
	{
		Span	test(5);
	
//	test.addNumber(10);
//	test.addNumber(20);
//	test.addNumber(30);
//	test.addNumber(40);
//	test.addNumber(50);
		std::cout << "shortest span = " << test.shortestSpan() << std::endl;
		std::cout << "greatest span = " << test.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		int	arr[] = {2, 3, 5, 7, 8};
		int	size = sizeof(arr) / sizeof(arr[0]);
	
		std::vector<int>	vec(arr, arr + size);
		hello.addRange(vec.begin(), vec.end());
		std::cout << "shortest span = " << hello.shortestSpan() << std::endl;
		std::cout << "greatest span = " << hello.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	
//	try
//	{
//		int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//		int	size = sizeof(arr) / sizeof(arr[0]);
//	
//		std::vector<int>	vec(arr, arr + size);
//		hello.addRange(vec.begin(), vec.end());
//		std::cout << "shortest span = " << hello.shortestSpan() << std::endl;
//		std::cout << "greatest span = " << hello.longestSpan() << std::endl;
//	}
//	catch (std::exception &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
	return (0);
}
