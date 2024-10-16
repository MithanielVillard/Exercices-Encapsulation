#pragma once
#include <ostream>
class Integer
{
public:
	Integer();
	Integer(int i);
	~Integer() = default;

	Integer operator+(const Integer r);
	Integer operator-(const Integer r);
	Integer operator^(const int pow);
	Integer operator*(const Integer r);
	Integer operator/(const Integer r);
	Integer operator%(const Integer r);

	friend std::ostream& operator<<(std::ostream& os, const Integer& i);
	std::ostream& operator<<(std::ostream& os);

	void operator+=(const Integer r);
	void operator-=(const Integer r);
	void operator*=(const Integer r);
	void operator/=(const Integer r);
	void operator%=(const Integer r);
	void operator<<=(const Integer r);

	void pow(int pow);
private:
	int m_i;
};

