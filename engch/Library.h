//
// Created by engch on 15/4/2022.
//
#pragma once
#ifndef ENGCH_LIBRARY_H
#define ENGCH_LIBRARY_H

#include <iostream>
#include <Windows.h> // changeCmdTextColor
#include <ctime>
#include <random>
#include <chrono>
#include <string>

namespace Engch {

    class Library {
    private:
        /**
         * #include "Library.h"\n
         * int main() { Engch::Library ec; return 0; }
         */
        const std::string banner = "Welcome to Engch::library!";
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    protected:
    public:
        /**
         * highlight the next character onwards with colorChoice in cmd\n
         * 7 is the default cmd color
         */
        void changeCmdTextColor(int colorChoice);

        /**
         * return a random double from 0 to range
         */
        double getRand(double range);

        /**
         * return (value % toMod) w/floating number point error
         */
        double getDoubleModulus(double value, double toMod);

        /**
         * used in if condition to run only once\n
         * return true is not run before\n
         * return false if run before
         */
        bool isDoneBefore();
    };
}


#endif //ENGCH_LIBRARY_H
