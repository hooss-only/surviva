#include <raylib.h>

#include "resources/texture.hpp"
#include "sprites/player.hpp"

int main() {
        InitWindow(1200, 600, "surviva");

        SetTraceLogLevel(LOG_ALL);
        
        Player player;

        float dt = GetFrameTime();
        while (!WindowShouldClose()) {
                dt = GetFrameTime();
                player.update(dt);

                BeginDrawing();
                ClearBackground(DARKGRAY);

                player.draw();

                DrawFPS(0, 0);

                EndDrawing();
        }

        unloadAllTexture();

        CloseWindow();

        return 0;
}
