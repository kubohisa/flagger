module;

#include <SDL3/SDL.h>

module Window;

class Window::Impl
{
public:
    SDL_Window* window = nullptr;
};

Window::Window()
    : impl(new Impl)
{
}

Window::~Window()
{
    if (impl->window != nullptr)
    {
        SDL_DestroyWindow(impl->window);
    }

    delete impl;
}

bool Window::create()
{
    impl->window = SDL_CreateWindow(
        "SDL3 Test",
        800,
        600,
        0
    );

    return impl->window != nullptr;
}