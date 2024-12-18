#include "PositionPrinter.h"
#include <iostream>

void PositionPrinter::Print(Position position)
{
	std::cout << "X: " << position.x << ", Y: " << position.y << std::endl;
}