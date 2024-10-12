#include "../include/Integer.h"
#include "math.h"

Integer::Integer() :m_i(0) {};
Integer::Integer(int i) :m_i(i) {};

Integer Integer::operator+(const Integer r) 
{
	return m_i + r.m_i;
}

void Integer::operator+=(const Integer r) 
{
	m_i += r.m_i;
}

Integer Integer::operator-(const Integer r) 
{
	return m_i - r.m_i;
}
void Integer::operator-=(const Integer r) 
{
	m_i -= r.m_i;
}
Integer Integer::operator*(const Integer r) 
{
	return m_i * r.m_i;
}
void Integer::operator*=(const Integer r) 
{
	m_i *= r.m_i;
}
Integer Integer::operator/(const Integer r) 
{
	return m_i / r.m_i;
}
void Integer::operator/=(const Integer r) 
{
	m_i /= r.m_i;
}
Integer Integer::operator%(const Integer r) 
{
	return m_i % r.m_i;
}
void Integer::operator%=(const Integer r) 
{
	m_i %= r.m_i;
}
std::ostream& Integer::operator<<(std::ostream& os) 
{
	os << m_i;
	return os;
}

std::ostream& operator<<(std::ostream& os, const Integer& i) 
{
	os << i.m_i;
	return os;
}

void Integer::operator<<=(const Integer r) 
{
	m_i <<= r.m_i;
}

Integer Integer::operator^(const int p) {
	Integer i = m_i;
	i.pow(p);
	return i;
}

void Integer::pow(int pow) {

	if (pow == 0) {
		m_i = 1;
		return;
	}

	int s = m_i;
	int n = m_i;
	for (int i = 0; i < pow-1; i++) {
		n *= s;
	}

	pow > 0 ? m_i = n : m_i = 1 / n;
}