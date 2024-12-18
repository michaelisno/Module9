#include "Position.h"

Position::Position(float _x, float _y)
{
	x = _x;
	y = _y;
}

Position Position::operator+(const Position& other) const
{
	return Position(x + other.x, y + other.y);
}

void Position::operator=(const Position& other)
{
	x = other.x;
	y = other.y;
}