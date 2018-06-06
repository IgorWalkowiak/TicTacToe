#ifndef WYJATEK_H_INCLUDED
#define WYJATEK_H_INCLUDED

#include <exception>
#include <iostream>
#include <string>

class Wyjatek : public std::exception
{

    public:
    Wyjatek(std::string a):_errorText(a)
    {
    }

    what(void)
    {
        std::cout<<_errorText;
    }

    private:
        std::string _errorText;
};

#endif // WYJATEK_H_INCLUDED
