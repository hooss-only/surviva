#include "texture.hpp"

#include <stdlib.h>
#include <string.h>

TextureResource textureResources[MAX_TEXTURE_AMOUNT] = { 0 };


void unloadTexture(int index);

Texture2D* useTexture(const char* sourcePath) {
        for (int i=0; i<MAX_TEXTURE_AMOUNT; i++) {
                if (textureResources[i].userAmount == 0) continue;
                if (!strcmp(sourcePath, textureResources[i].sourcePath)) {
                        textureResources[i].userAmount++;
                        return &textureResources[i].texture;
                }
        }

        for (int i=0; i<MAX_TEXTURE_AMOUNT; i++) {
                if (textureResources[i].userAmount == 0) {
                        textureResources[i].userAmount++;
                        textureResources[i].sourcePath = 
                                (char*) malloc(sizeof(char) * strlen(sourcePath));
                        strcpy(textureResources[i].sourcePath, sourcePath);
                        textureResources[i].texture = LoadTexture(sourcePath);
                        return &textureResources[i].texture;
                }
        }

        TraceLog(LOG_WARNING, "REACHED MAXIMUM TEXTURE AMOUNT!!");
        return NULL;
}

void unuseTexture(Texture2D* texture) {
        for (int i=0; i<MAX_TEXTURE_AMOUNT; i++) {
                if (textureResources[i].userAmount == 0) continue;
                if (&textureResources[i].texture == texture) {
                        textureResources[i].userAmount--;

                        if (textureResources[i].userAmount == 0) {
                                unloadTexture(i);
                        }
                }
        }
}

void unloadTexture(int index) {
        UnloadTexture(textureResources[index].texture);
        free(textureResources[index].sourcePath);
}

void unloadAllTexture() {
        for (int i=0; i<MAX_TEXTURE_AMOUNT; i++) {
                if (textureResources[i].userAmount != 0)
                        unloadTexture(i);
        }
}
