#include "Position.h"
#include "PositionPrinter.h"
#include <iostream>

using namespace std;

int main()
{
	Position pos1(2, 3);
	Position pos2(5, 1);

	Position pos3 = pos1 + pos2;

	PositionPrinter printer;
	printer.Print(pos3);

	pos1 = pos2;

	printer.Print(pos1);

	int u;
	cin >> u;

	return 0;
}