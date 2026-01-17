#include <raylib.h>

#include "resources/texture.hpp"
#include "scene.hpp"
#include "sprites/player.hpp"
#include "sprites/chest.hpp"

int main() {
        InitWindow(1200, 600, "surviva");

        SetTraceLogLevel(LOG_ALL);
        
        Scene scene;
        scene.add_sprite(new Player());
        scene.add_sprite(new Chest());

        float dt = GetFrameTime();
        SetTargetFPS(120);
        while (!WindowShouldClose()) {
                dt = GetFrameTime();
                scene.update(dt);

                BeginDrawing();
                ClearBackground(DARKGRAY);

                scene.draw();

                DrawFPS(0, 0);

                EndDrawing();
        }

        unloadAllTexture();

        CloseWindow();

        return 0;
}
