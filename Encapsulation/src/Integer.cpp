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
Integer Integer::operator<<(const Integer r) 
{
	return m_i << r.m_i;
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
	for (int i = 0; i < pow; i++) {
		m_i *= m_i;
	}
}