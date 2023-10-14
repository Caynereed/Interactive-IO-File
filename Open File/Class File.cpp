// Input and Output File CPP
#include "Class File.hpp"
#include <iostream>
#include <fstream>
#include <string>

class StandardDeviationCalculator {
private:
    int x, y, z, w, m;

public:
    // Constructors
    StandardDeviationCalculator() : x(0), y(0), z(0), w(0), m(0) {}

    StandardDeviationCalculator(int newX, int newY, int newZ, int newW, int newM)
        : x(newX), y(newY), z(newZ), w(newW), m(newM) {}

    // Getter methods
    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    int getZ() const {
        return z;
    }

    int getW() const {
        return w;
    }

    int getM() const {
        return m;
    }

    // Setter methods
    void setX(int newX) {
        x = newX;
    }

    void setY(int newY) {
        y = newY;
    }

    void setZ(int newZ) {
        z = newZ;
    }

    void setW(int newW) {
        w = newW;
    }

    void setM(int newM) {
        m = newM;
    }

    // Mean Calculator
    float calculateMean() const {
        return (x + y + z + w) / 4.0;
    }

    // Standard Deviation Calculator
    float calculateStdDev() const {
        return sqrt((pow((x - m), 2) + pow((y - m), 2) + pow((z - m), 2) + pow((w - m), 2)) / 4.0);
    }
};


