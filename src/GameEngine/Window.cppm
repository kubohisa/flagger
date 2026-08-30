export module Window;

export class Window
{
public:
    Window();
    ~Window();

    bool create();

private:
    class Impl;
    Impl* impl;
};