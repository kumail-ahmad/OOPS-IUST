#include <iostream>
using namespace std;

class MediaFile
{
public:
    virtual void play() = 0;
};

class Audio : public MediaFile
{
public:
    void play() { cout << "Playing Audio" << endl; }
};

class Video : public MediaFile
{
public:
    void play() { cout << "Playing Video" << endl; }
};

class Image : public MediaFile
{
public:
    void play() { cout << "Showing Image" << endl; }
};

int main()
{
    MediaFile *m[3];
    m[0] = new Audio();
    m[1] = new Video();
    m[2] = new Image();

    for (int i = 0; i < 3; i++)
        m[i]->play();
    return 0;
}
