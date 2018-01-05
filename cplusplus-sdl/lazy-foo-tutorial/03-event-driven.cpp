/**
 * File: 03-event-driven.cpp
 * Tutorial 3: Event Driven Programming
 *
 * Created by hengxin on 17-12-27.
 */

#include <SDL2/SDL.h>

bool init();
bool loadMedia(char const *image);
void close();

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

SDL_Window *gWindow = nullptr;
SDL_Surface *gScreenSurface = nullptr;
SDL_Surface *gHelloWorld = nullptr;

int main(int argc, char *argv[]) {
    bool quit = false;
    SDL_Event e;

    if (! init()) {
        printf("Failed to initialize!\n");
    } else {
        if (! loadMedia("SDL-logo.bmp")) {
            printf("Failed to load media!\n");
        } else {
            SDL_BlitSurface(gHelloWorld, nullptr, gScreenSurface, nullptr);
            SDL_UpdateWindowSurface(gWindow);

            while (! quit) {
                while (SDL_PollEvent(&e) != 0) {
                    switch (e.type) {
                        case SDL_QUIT:
                            printf("The SDL_Event is %d: quit.\n", e.type);
                            quit = true;
                            break;
                        default:
                            printf("The SDL_Event is %d.\n", e.type);
                    }
                }
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

bool loadMedia(char const *image) {
    bool success = true;

    gHelloWorld = SDL_LoadBMP(image);
    if (gHelloWorld == nullptr) {
        printf("Unable to load image %s! SDL_Error: %s.\n", image, SDL_GetError());
        success = false;
    }

    return success;
}

void close() {
    SDL_FreeSurface(gHelloWorld);
    gHelloWorld = nullptr;

    SDL_DestroyWindow(gWindow);
    gWindow = nullptr;

    SDL_Quit();
}
