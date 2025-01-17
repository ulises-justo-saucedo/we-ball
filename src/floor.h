#include "raylib.h"
struct Floor{
	int x;
	int y;
	int width;
	int height;
};
void draw_floor(struct Floor *floor);