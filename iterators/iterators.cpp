
#include <iostream>
#include <vector>

template<typename T>
void print_collection_buff(const T& elem, size_t beg, size_t end)
{
	auto beggining = elem.begin() + beg;
	auto ending = elem.end() - end;

	while (beggining != ending)
	{
		std::cout << *beggining << std::endl;
		++beggining;
	}
}
template<typename T>
void print_reverse(const T& elem)
{
	auto start = elem.rend();
	auto end = elem.rbegin();

	while (end != start)
	{
		std::cout << *end << std::endl;
		++end;
	}
}

template<typename T>
void print_const(const T& elem)
{
	auto start = elem.cbegin();

	while (start != elem.cend())
	{
		std::cout << *start << std::endl;
		++start;
	}
}

int main()
{
	std::vector<int> first_vec{ 1,2,3,4 };

	print_reverse(first_vec);
	print_const(first_vec);
}
