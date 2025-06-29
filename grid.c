#include "raylib.h"

int main(void)
{
    // Dimensioni della finestra
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "raylib [shapes] - grid test");

    // Parametri della griglia e degli oggetti
    const int gridSizeX = 20;
    const int gridSizeY = 15;
    const float shapeWidth = 30.0f;
    const float shapeHeight = 30.0f;
    const int padding = 5;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Grid of Rhombuses", 10, 10, 20, DARKGRAY);

        for (int y = 0; y < gridSizeY; y++)
        {
            for (int x = 0; x < gridSizeX; x++)
            {
                // Calcola la posizione del centro del rombo
                float posX = (shapeWidth + padding) * x + shapeWidth / 2 + padding;
                float posY = (shapeHeight + padding) * y + shapeHeight / 2 + padding + 40; // Offset per il testo

                // Vertici del rombo
                Vector2 v1 = { posX, posY - shapeHeight / 2 }; // Alto
                Vector2 v2 = { posX + shapeWidth / 2, posY }; // Destra
                Vector2 v3 = { posX, posY + shapeHeight / 2 }; // Basso
                Vector2 v4 = { posX - shapeWidth / 2, posY }; // Sinistra

                // Disegna il rombo pieno
                DrawTriangle(v1, v4, v2, GREEN);
                DrawTriangle(v3, v2, v4, GREEN);
            }
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
