// MathLibrary.h - Contains declarations of math functions
#pragma once
#include <vector>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>

#ifdef EDUCATIONALPRACTICEDLL_EXPORTS
#define EDUCATIONALPRACTICEDLL_API __declspec(dllexport)
#else
#define EDUCATIONALPRACTICEDLL_API __declspec(dllimport)
#endif


extern "C" EDUCATIONALPRACTICEDLL_API void addToFile(const std::vector<char> & data);




