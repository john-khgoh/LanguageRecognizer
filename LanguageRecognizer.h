#pragma once

#pragma execution_character_set("utf-8")

#include "checked.h"
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <execution>
#include <random>
#include <map>
#include <mutex>
#include <chrono>
using namespace std;
using namespace std::chrono;

vector<string> stringSplitter(string input, string splitter);
int randomInt(int a, int b);
vector <tuple<string, double>> languageRecognizer(const std::string& text, bool allLanguages, int maxResults, float sampleRatio);
