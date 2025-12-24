#include <iostream>
#include <fstream>
using namespace std;

class dofile
{
    fstream file;

public:
    class FileError
    {
    public:
        string msg;
        FileError(string m) : msg(m) {}
    };

    dofile(string name)
    {
        file.open(name, ios::in | ios::out | ios::app);
        if (!file)
            throw FileError("File open error");
    }

    void write(string s)
    {
        if (!file)
            throw FileError("Write error");
        file << s << endl;
    }

    void read()
    {
        if (!file)
            throw FileError("Read error");
        file.seekg(0);
        string s;
        while (getline(file, s))
            cout << s << endl;
    }

    void reset()
    {
        file.clear();
        file.seekg(0);
    }

    ~dofile()
    {
        file.close();
    }
};

int main()
{
    try
    {
        dofile f("data.txt");
        f.write("Hello File");
        f.reset();
        f.read();
    }
    catch (dofile::FileError e)
    {
        cout << e.msg;
    }
    return 0;
}
