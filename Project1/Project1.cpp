#include <clipboardxx.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>
using namespace std;
string password;
int main()
{
    clipboardxx::clipboard clipboard;
    string characters = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()-_+=";
    srand(time(NULL));
    for (int i = 0; i < 17; ++i)
    {
        password += characters[rand() % characters.length()];
    }
    clipboard << password;
    exit(0);
}