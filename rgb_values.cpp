// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon Lee
// Created on: Nov 2019
// This program prints out all the valid RGB values

#include <iostream>

main() {
    // this function prints out all the valid RGB values
    int counterR;
    int counterG;
    int counterB;

    // process & output
    for (counterR = 0; counterR < 256; counterR++) {
        for (counterG = 0; counterG < 256; counterG++) {
            for (counterB = 0; counterB < 256; counterB++) {
                std::cout << "RGB (" << counterR << "," << counterG << "," 
                          << counterB << ")" << std::endl;
            }
        }
    }
}
