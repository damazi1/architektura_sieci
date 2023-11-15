#include <iostream>
#include <bitset>
#include <limits>
#include <iomanip>
template <typename T>
void show_32_bits(T tmp)
{
	const unsigned int tmpSize = 32;
	unsigned long int bits = *(unsigned long int *)(&tmp);
	std::bitset<(tmpSize)> tmpBits(bits);
	std::cout << tmpBits << " ; " << std::fixed << std::setprecision(20) << tmp << " ; " << tmpSize << " bits" << std::endl;
}
template <typename T>
void show_64_bits(T tmp)
{
	const unsigned int tmpSize = 64;
	unsigned long long int bits = *(unsigned long long int *)(&tmp);
	std::bitset<(tmpSize)> tmpBits(bits);
	std::cout << tmpBits << " ; " << std::fixed << std::setprecision(20) << tmp << " ; " << tmpSize << " bits" << std::endl;
}
int main()
{
	int a = 0;
	show_32_bits(a);
	int b = 91;
	show_32_bits(b);
	int c = -91;
	show_32_bits(c);
	int d = 49;
	show_32_bits(d);
	int e = 123456;
	show_32_bits(e);
	int f = -1111;
	show_32_bits(f);
	int g = std::numeric_limits<int>::min();
	show_32_bits(g);
	int h = std::numeric_limits<int>::max();
	show_32_bits(h);
	uint a1 = 0;
	show_32_bits(a1);
	uint b1 = 91;
	show_32_bits(b1);
	uint c1 = -91;
	show_32_bits(c1);
	uint d1 = 49;
	show_32_bits(d1);
	uint e1 = 123456;
	show_32_bits(e1);
	uint f1 = -1111;
	show_32_bits(f1);
	uint g1 = std::numeric_limits<uint>::min();
	show_32_bits(g1);
	uint h1 = std::numeric_limits<uint>::max();
	show_32_bits(h1);
	float a2 = 0.0f;
	show_32_bits(a2);
	float b2 = 91.0f;
	show_32_bits(b2);
	float c2 = -91.0f;
	show_32_bits(c2);
	float d2 = 0.3f;
	show_32_bits(d2);
	float e2 = 0.1f;
	show_32_bits(e2);
	float f2 = 1234567.1234567f;
	show_32_bits(f2);
	float g2 = std::numeric_limits<float>::min();
	show_32_bits(g2);
	float h2 = std::numeric_limits<float>::max();
	show_32_bits(h2);
	double a3 = 0.0;
	show_64_bits(a3);
	double b3 = 91.0;
	show_64_bits(b3);
	double c3 = -91.0;
	show_64_bits(c3);
	double d3 = 0.3;
	show_64_bits(d3);
	double e3 = 0.1;
	show_64_bits(e3);
	double f3 = 1234567.1234567;
	show_64_bits(f3);
	double g3 = std::numeric_limits<double>::min();
	show_64_bits(g3);
	double h3 = std::numeric_limits<double>::max();
	show_64_bits(h3);

	return 0;
}
