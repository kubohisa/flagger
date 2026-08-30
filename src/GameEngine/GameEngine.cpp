module;

#include <SDL3/SDL.h>

module GameEngine;

import GameMode;

void GameEngine::exec()
{
    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        return;
    }

    if (!window.create())
    {
        SDL_Quit();
        return;
    }

    GameMode gameMode;

    gameMode.exec();

    SDL_Quit();
}