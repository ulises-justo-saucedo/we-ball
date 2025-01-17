![image](https://github.com/user-attachments/assets/296b4bf2-73e0-401b-a767-fb7a7090f7ab)

## We Ball
A simple "game" made in C using [raylib](https://github.com/raysan5/raylib). In We Ball, you are just a ball that can move and jump around.

## Set-Up
In order to play We Ball, you can simply execute the .exe file inside of src/ folder. But if you want to compile it by yourself, do the following:

```
git clone https://github.com/ulises-justo-saucedo/we-ball
cd we-ball/src
gcc main.c floor.c ball.c -lraylib -lgdi32 -lwinmm -I"C:\raylib\path\here" -o "We_Ball"
```
Make sure to match your raylib's installation path in the command. In my case it would look like this:
```
gcc main.c floor.c ball.c -lraylib -lgdi32 -lwinmm -I"C:\raylib\raylib\src" -o "We_Ball"
```
