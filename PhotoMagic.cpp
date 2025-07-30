// Copyright 2025 Danny Nguyen
#include <iostream>
#include "FibLFSR.hpp"

using PhotoMagic::FibLFSR;

int main() {
    // Example seed string
    std::string seed = "0110100001010001";

    FibLFSR lfsr(seed);

    std::cout << "Initial seed: " << seed << std::endl;

    // Generate and print 10 bits from the LFSR
    std::cout << "Generated bits: ";
    for (int i = 0; i < 16; ++i) {
        int bit = lfsr.step();
        std::cout << bit;
    }
    std::cout << std::endl;

    return 0;
}
