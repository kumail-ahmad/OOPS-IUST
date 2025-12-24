#include <iostream>
using namespace std;

class horse
{
protected:
    float pos;

public:
    horse() : pos(0) {}
    virtual void tick() { pos += 1; }
    float getPos() { return pos; }
};

class comhorse : public horse
{
public:
    void tick()
    {
        pos += 1.5;
    }
};

int main()
{
    comhorse h;
    h.tick();
    cout << h.getPos();
    return 0;
}
