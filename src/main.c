#include <stdio.h>
#include "ball.h"
#define FPS                60
#define SCREEN_WIDTH       800
#define SCREEN_HEIGHT      600
#define TITLE              "We ball!"
int main() {
	struct Ball ball = {
		SCREEN_WIDTH / 2, //starting x position
		0,                //starting y position
		30,               //radius
		TRUE,             //is the ball falling?
		FALSE,            //is the ball jumping?
		5                 //movement speed
	};
	struct Floor floor = {
		0,                                //starting x position
		SCREEN_HEIGHT / 2,                //starting y position
		SCREEN_WIDTH,                     //width
		SCREEN_HEIGHT - SCREEN_HEIGHT / 2 //height
	};
	float jump_force = JUMP_FORCE_INITIAL;

	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TITLE);
	SetTargetFPS(FPS);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);
		
		draw_floor(&floor);
		draw_ball(&ball);

		check_collisions(&ball, &floor);
		apply_gravity(&ball);

		check_jump(&ball, &jump_force);
		move(&ball);

		EndDrawing();
	}
}