/////////////////////////////////////////////////////////////////////////////
//																									//
// Code framework for lecture computer graphics WS 2025/26 assignment 1 	//
//																									//
// A generic class for n-dimensional coordinate vectors							//
//																									//
// (c) Georg Umlauf																			//
//																									//
/////////////////////////////////////////////////////////////////////////////
#pragma once

class Point {
public:

	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}

	int x, y;
};
