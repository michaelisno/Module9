#pragma once

class PositionPrinter;

class Position
{
	friend class PositionPrinter;

public:
	Position(float x = 0, float y = 0);

	Position operator+(const Position& other) const;
	void operator=(const Position& other);

private:
	float x, y;

};