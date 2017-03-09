#pragma once
#include <vector>

enum enumShapeType
{
	CIRCLE, SQUARE
};

struct Shape
{
	enumShapeType ShapeType;
};

struct Circle
{
	enumShapeType ShapeType;
	double Radius;
	std::pair<double, double> Center;

	Circle() : ShapeType(CIRCLE) {}
};

struct Square
{
	enumShapeType ShapeType;
	double Size;
	std::pair<double, double> TopLeft;

	Square() : ShapeType(SQUARE) {}
};