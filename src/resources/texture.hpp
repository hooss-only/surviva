#pragma once

#include <raylib.h>

#define MAX_TEXTURE_AMOUNT 1000

struct TextureResource {
        Texture2D texture;
        char* sourcePath;
        int userAmount;
};

Texture2D* useTexture(const char* sourcePath);
void unuseTexture(Texture2D* texture);

void unloadAllTexture();
