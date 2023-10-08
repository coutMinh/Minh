#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<windows.h>
#include"graphics.h"
using namespace std;
const int ROWS = 65;
const int COLS = 33;



void saveArrayToFile(const int array[][COLS], const std::string& filename) {
    std::ofstream file(filename);

    if (file.is_open()) {
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                file << array[i][j] << " ";
            }
            file << std::endl;
        }

        file.close();
        gotoXY(80, 26); 
        std::cout << "Array saved to " << filename << std::endl;
    }
    else {
        std::cout << "Unable to open file for writing." << std::endl;
    }
}

void loadArrayFromFile(int array[][COLS], const std::string& filename) {
    std::ifstream file(filename);

    if (file.is_open()) {
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                file >> array[i][j];
            }
        }

        file.close();
        std::cout << "Array loaded from " << filename << std::endl;
    }
    else {
        std::cout << "Unable to open file for reading." << std::endl;
    }
}

/*void save() {
    int array[ROWS][COLS] = { 0 };
    string name;  
    gotoXY(80, 20); cout << "Name the file: ";
    cin >> name;
    saveArrayToFile(array, name);
}
void load() {
    int array[ROWS][COLS] = { 0 };
    string filename;
    cin >> filename;
    loadArrayFromFile(array, filename);
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if ((array[i][j]) == 1)cout << "X";
            if ((array[i][j]) == 2)cout << "O";

        }
        std::cout << std::endl;
    }

}
*/