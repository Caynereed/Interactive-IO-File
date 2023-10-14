#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string inFile = "inMeanStd.dat";
const string outFile = "outMeanStd.dat";

float calculateMean(int x, int y, int z, int w);
float calculateStdDev(int m, int x, int y, int z, int w);

int main()
{
// Creating inFile
    ifstream inputFile(inFile);
    
// Integers
    int x, y, z, w, m;
    inputFile >> x >> y >> z >> w >> m;
    
// Close file
    inputFile.close();
    
// Creating outFile
    ofstream outputFile(outFile);

// Checking if file opens successfully
    if (!outputFile.is_open())
    {
        cerr << "Error opening output file" << endl;
        return 1;
    }
    
// Intro
    cout << "Welcome to the Population Standard Deviation Calculator. Please input your values." << endl;
    
// Writing Data to File
    cout << "Input four integers for population mean: ";
    cin >> x >> y >> z >> w;

    cout << "The population mean: " << x << ", " << y << ", " << z << ", and " << w << " is " << calculateMean(x, y, z, w) << endl;

    cout << "Type in your calculated mean: ";
    cin >> m;

    cout << "Population Standard Deviation is: " << calculateStdDev(m, x, y, z, w) << endl;

    // Reading Data from inFile
    ifstream inputFile2(outFile);
    string data, data2;
    
    getline(inputFile2, data);
    getline(inputFile2, data2);

    cout << data << endl << data2 << endl;

    inputFile2.close();
// Outputting Data to outFile
    cout << "Data has been written to outMeanStd.dat" << endl;

    return 0;
}

// Mean Calculator
float calculateMean(int a, int b, int c, int d)
{
    return (a + b + c + d) / 4.0;
}

// Standard Deviation Calculator
float calculateStdDev(int f, int a, int b, int c, int d)
{
    return sqrt((pow((a - f), 2) + pow((b - f), 2) + pow((c - f), 2) + pow((d - f), 2)) / 4.0);
}
