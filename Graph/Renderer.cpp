#include "Renderer.hpp"
#include <stdexcept>

Renderer::Renderer() {
    if (!SDL_Init(SDL_INIT_VIDEO))
        throw std::runtime_error(SDL_GetError());
    
    mWindow = SDL_CreateWindow("Graph", 800, 800, SDL_WINDOW_VULKAN);
    if (mWindow == nullptr)
        throw std::runtime_error(SDL_GetError());
    
    mRenderer = SDL_CreateRenderer(mWindow, nullptr);
    if (mRenderer == nullptr)
        throw std::runtime_error(SDL_GetError());
}

Renderer::~Renderer() {
    SDL_DestroyRenderer(mRenderer);
    SDL_DestroyWindow(mWindow);
    SDL_Quit();
}

