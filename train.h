#pragma once

#include "bitmap.h"

enum CarDirection {
	North,
	East,
	South,
	West
};

class Level;

class TrainCar {
public:
	TrainCar(int x, int y) 
		: x(x), y(y), m_sprite("car.png") {}

	void update(Level&);
	void draw(Bitmap&, int, int);

	int x, y;
private:
	Bitmap m_sprite;
	int m_progress;
	CarDirection m_dir;
};