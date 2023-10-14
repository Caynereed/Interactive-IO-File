// Input and Output File HPP

#ifndef CLASS_H
#define CLASS_H
#include <vector>

using namespace std;

class StandardDevationCalculator {
private:
    int x, y, z, w, m;

public:
    // Constructors
    StandardDevationCalculator();
    StandardDevationCalculator(int newX, int newY, int newZ, int newW, int newM);

    // Getter methods
    int getX() const;
    int getY() const;
    int getZ() const;
    int getW() const;
    int getM() const;

    // Setter methods
    void setX(int newX);
    void setY(int newY);
    void setZ(int newZ);
    void setW(int newW);
    void setM(int newM);

    // Mean Calculator
    float calculateMean() const;

    // Standard Deviation Calculator
    float calculateStdDev() const;
};

#endif
