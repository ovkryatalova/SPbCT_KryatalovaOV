#include "MathLibrary.h"

void addToFile(const std::vector<char>& vec)
    {
        std::ofstream filestream("after.txt", std::ios::app);
        copy(vec.begin(), vec.end(), std::ostream_iterator<char>(filestream, " "));
        filestream << "\n";
        filestream.close();
    }


