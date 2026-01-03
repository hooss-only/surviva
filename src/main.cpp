#include <raylib.h>

int main() {
        InitWindow(1200, 600, "surviva");

        while (!WindowShouldClose()) {
                BeginDrawing();
                ClearBackground(BLACK);
                DrawText("HI", 10, 10, 20, WHITE);
                EndDrawing();
        }

        CloseWindow();

        return 0;
}
