#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>


typedef double type;

template <typename T>
std::string		serialize(const std::vector<T> &vec)
{
	std::string str;
	str = "[";
	for (unsigned int i = 0; i < vec.size(); ++i)
	{
		str += std::to_string(vec[i]);
		str += (i + 1 < vec.size()) ? "," : "";
	}
	str += "]";
	return (str);
}

std::vector<type>				softmax(std::vector<type> input)
{
	unsigned int		size = input.size();
	double				sum = 0;
	std::vector<type>	probabilities(size);

	for (unsigned int o=0; o < size; ++o)
	{
		probabilities[o] = exp (input[o]);
		sum += probabilities[o];
	}

	for (unsigned int o=0; o < size; ++o)
	{
		probabilities[o] /= sum;
	}

	return (probabilities);
}
int main()
{
	std::vector<type>		value;
	std::vector<type>		result;
	type	test = 0;

	value.push_back(0.1);
	value.push_back(0.8);
	value.push_back(1.9);
	value.push_back(3.1);

	result = softmax(value);

	test = 0;
	for(int i = 0; i < result.size(); i++)
		test += result[i];

	std::cout << "Initiale values: " << serialize(value) << std::endl;
	std::cout << "Resulting values: " << serialize(result) << std::endl;
	std::cout << "Sum of result values(should be one): " << test << std::endl;

	return (0);
}
