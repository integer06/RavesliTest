#ifndef Point2D
#define Point2D

#include <iostream>

class Point2D {
private:
	int m_x;
	int m_y;

public:
	// ����������� �� ���������
	Point2D() 
		: m_x(0), m_y(0) {
	}

	// ������������� �����������
	Point2D(int x, int y)
		: m_x(x), m_y(y) {
	}

	// ���������� ��������� ������
	friend std::ostream& operator << (std::ostream& out, const Point2D& point) {
		out << "(" << point.m_x << ", " << point.m_y << ")";
		return out;
	}

	// ������� �������
	void setPoint(int x, int y) : x(x), y(y) {
	}
};


#endif