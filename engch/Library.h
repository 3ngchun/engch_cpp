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

namespace Engch {
    class Library {
    private:
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    protected:
    public:
        void changeCmdTextColor(int);

        double getRand(int);

        double getDoubleModulus(double, double);

        bool isDoneBefore();
    };
}

#endif //ENGCH_LIBRARY_H
