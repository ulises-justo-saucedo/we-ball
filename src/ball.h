#include "floor.h"
#define JUMP_FORCE_INITIAL 5
#define GRAVITY            3.14
#define TRUE               1
#define FALSE              0
struct Ball{
	float x;
	float y;
	int radius;
	int falling;
	int jumping;
	int speed;
};
void draw_ball(struct Ball *ball);
void apply_gravity(struct Ball *ball);
void check_collisions(struct Ball *ball, struct Floor *floor);
void check_jump(struct Ball *ball, float *jump_force);
void move(struct Ball *ball);