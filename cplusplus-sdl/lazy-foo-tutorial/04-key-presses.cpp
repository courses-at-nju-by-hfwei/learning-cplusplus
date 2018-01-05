/**
 * File: 04-key-presses.cpp
 *
 * Tuturial 04: Key Presses
 *
 * Created by hengxin on 17-12-28.
 */

#include <SDL2/SDL.h>

// Key press surfaces constants
enum KeyPressSurfaces {
    KEY_PRESS_SURFACE_DEFAULT,
    KEY_PRESS_SURFACE_UP,
    KEY_PRESS_SURFACE_DOWN,
    KEY_PRESS_SURFACE_LEFT,
    KEY_PRESS_SURFACE_RIGHT,
    KEY_PRESS_SURFACE_TOTAL
};

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

bool init();
bool loadMedia();
void close();

SDL_Surface *loadSurface(char const *path);

SDL_Window *gWindow = nullptr;
SDL_Surface *gScreenSurface = nullptr;
SDL_Surface *gKeyPressSurfaces[KEY_PRESS_SURFACE_TOTAL];
SDL_Surface *gCurrentSurface = nullptr;

int main(int argc, char *argv[]) {
    bool quit = false;
    SDL_Event e = nullptr;

    init();
    loadMedia();

    gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

    while (! quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            } else if (e.type == SDL_KEYDOWN) {
                switch (e.key.keysym.sym) {
                    case SDLK_UP:
                        gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];
                        break;
                    case SDLK_DOWN:
                        gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];
                        break;
                    case SDLK_LEFT:
                        gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];
                        break;
                    case SDLK_RIGHT:
                        gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];
                        break;
                    default:
                        break;
                }

                SDL_BlitSurface(gCurrentSurface, nullptr, gScreenSurface, nullptr);
                SDL_UpdateWindowSurface(gWindow);
            }
        }
    }

    close();
    return 0;
}

bool init() {
    bool success = true;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s.\n", SDL_GetError());
        success = false;
    } else {
        gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                   SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (gWindow == nullptr) {
            printf("Window could not be created! SDL_Error: %s.\n", SDL_GetError());
            success = false;
        } else {
            gScreenSurface = SDL_GetWindowSurface(gWindow);
        }
    }

    return success;
}

bool loadMedia() {
    bool success = true;

    gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT] = loadSurface("SDL-logo.bmp");
    gKeyPressSurfaces[KEY_PRESS_SURFACE_UP] = loadSurface("tank.bmp");
    gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN] = loadSurface("panda.bmp");
    gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT] = loadSurface("bmp-logo.bmp");
    gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT] = loadSurface("workshop.bmp");

    for (int i = 0; i < KEY_PRESS_SURFACE_TOTAL; ++i) {
        if (gKeyPressSurfaces[i] == nullptr) {
            success = false;
            printf("Failed to load the surface %d.\n", i);
        }
    }

    return success;
}

SDL_Surface *loadSurface(char const *path) {
    SDL_Surface *loadedSurface = SDL_LoadBMP(path);
    if (loadedSurface == nullptr) {
        printf("Unable to load image %s! SDL_Error: %s.\n",
            path, SDL_GetError());
    }

    return loadedSurface;
}

void close() {
    SDL_FreeSurface(gScreenSurface);
    gScreenSurface = nullptr;

    for (auto &gKeyPressSurface : gKeyPressSurfaces) {
        SDL_FreeSurface(gKeyPressSurface);
        gKeyPressSurface = nullptr;
    }

    SDL_DestroyWindow(gWindow);
    gWindow = nullptr;

    SDL_Quit();
}
