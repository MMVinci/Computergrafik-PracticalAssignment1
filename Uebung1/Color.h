/////////////////////////////////////////////////////////////////////////////
//																									//
// Code framework for lecture computer graphics WS 2025/26 assignment 1 	//
//																									//
// A generic class for n-dimensional coordinate vectors							//
//																									//
// (c) Georg Umlauf																			//
//																									//
/////////////////////////////////////////////////////////////////////////////
class Color {
public:

	Color(float r = 1.0f, float g = 1.0f, float b = 1.0f) {
		this->r = r;
		this->g = g;
		this->b = b;
	}

	float r, g, b;
};