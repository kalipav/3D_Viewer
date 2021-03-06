﻿#ifndef _FIELD_H_
#define _FIELD_H_

#include <vector>
#include "Dot.h"
#include "defines.h"

class Field
{
private:
	// вектор точек
	std::vector <Dot*> m_dots;

	// пространство
	char m_space[FIELD_LENGTH][FIELD_WIDTH];

	// расстояние между двумя соседними символами
	double m_length_behind;

	// реальные координаты центральной точки
	double m_center_real_coord[2];

public:
	// конструктор
	Field();

	// деструктор
	~Field();

	// добавить точку
	void Add_dot(const double&, const double&);

	// отрисовка
	void Draw();

	// добавить отрезок
	void Add_line_segment(const double&, const double&, const double&, const double&);


};

#endif
