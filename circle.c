#include "raylib.h"

int main(void) {

    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "raylib [core] 800x600 - basic window");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second

     // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(LIGHTGRAY);
            // Circle shapes and lines
            DrawCircle(screenWidth/5, 120, 35, DARKBLUE);
            DrawCircleGradient(screenWidth/5, 220, 60, GREEN, SKYBLUE);
            DrawCircleLines(screenWidth/5, 340, 80, DARKBLUE);
            DrawCircle(screenWidth/5, 400, 150, DARKBROWN);
            Color clr_inner = {60., 120., 100., 1.};
            Color clr_outer = {450., 70., 45., 16.};
            DrawCircleGradient(200,200, 120, clr_inner, clr_outer);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
