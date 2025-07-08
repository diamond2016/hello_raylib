#include "raylib.h"
#include <math.h>

int main(void)
{
    const int screenWidth = 600;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - red spiral");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        Vector2 center = { screenWidth / 2.0f, screenHeight / 2.0f };
        float maxRadius = fminf(screenWidth, screenHeight) / 2.0f - 20;
        int coils = 5;
        
        Vector2 previousPoint = center;

        for (int i = 0; i <= 360 * coils; i++)
        {
            float angle = DEG2RAD * i;
            float radius = maxRadius * (i / (360.0f * coils));
            
            Vector2 currentPoint = { 
                center.x + radius * cosf(angle), 
                center.y + radius * sinf(angle) 
            };

            if (i > 0)
            {
                DrawLineV(previousPoint, currentPoint, RED);
            }
            previousPoint = currentPoint;
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
