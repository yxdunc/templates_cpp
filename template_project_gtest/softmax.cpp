#include "softmax.hpp"

std::vector<double>				softmax(std::vector<double> input)
{
	unsigned int		size = input.size();
	double				sum = 0;
	std::vector<double>	probabilities(size);

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