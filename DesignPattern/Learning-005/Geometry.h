#pragma once
#include <iostream>

struct Point
{
	double X;
	double Y;

	Point() : X(0), Y(0) {}
};

class CRectangle
{
public:
	CRectangle() : m_Width(0), m_Height(0) {}

	virtual void setWidth(double vWidth) {m_Width = vWidth;}
	virtual void setHeight(double vHeight) {m_Height = vHeight;}
	double getWidth() const {return m_Width;}
	double getHeight() const {return m_Height;}

	double area() const { return m_Height*m_Width;}

private:
	Point m_TopLeft;
	double m_Width;
	double m_Height;
};

class CSquare : public CRectangle
{
public:
	void setWidth(double vWidth)
	{
		CRectangle::setWidth(vWidth);
		CRectangle::setHeight(vWidth);
	}
	
	void setHeight(double vHeight)
	{
		CRectangle::setWidth(vHeight);
		CRectangle::setHeight(vHeight);
	}
};