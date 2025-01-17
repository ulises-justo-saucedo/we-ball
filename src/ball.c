#include "ball.h"
void draw_ball(struct Ball *ball) {
	DrawCircle(ball->x, ball->y, ball->radius, RAYWHITE);
}
void apply_gravity(struct Ball *ball) {
	if(ball->falling == TRUE)
		ball->y += GRAVITY;
}
void check_collisions(struct Ball *ball, struct Floor *floor) {
	if(ball->falling == FALSE)
		return;

	if(ball->y + ball->radius >= floor->y) {
		ball->falling = FALSE;
		ball->y = floor->y - ball->radius;
		return;
	}
}
void check_jump(struct Ball *ball, float *jump_force) {
	if(ball->falling == TRUE)
		return;

	if(IsKeyPressed(KEY_UP)) {
		ball->jumping = TRUE;
	}

	if(ball->jumping == TRUE && *jump_force > 0) {
		ball->y -= *jump_force;
		*jump_force -= 0.2;
	}

	if(*jump_force <= 0) {
		ball->jumping = FALSE;
		ball->falling = TRUE;
		*jump_force = JUMP_FORCE_INITIAL;
	}
}
void move(struct Ball *ball) {
	if(IsKeyDown(KEY_LEFT))
		ball->x -= ball->speed;

	if(IsKeyDown(KEY_RIGHT))
		ball->x += ball->speed;
}