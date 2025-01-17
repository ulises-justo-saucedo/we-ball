#include "floor.h"
void draw_floor(struct Floor *floor) {
	DrawRectangle(floor->x, floor->y, floor->width, floor->height, RAYWHITE);
}