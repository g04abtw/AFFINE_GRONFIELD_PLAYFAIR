
#pragma once
#ifndef COMMON_H
#define COMMON_H

#include <string>
#include <fstream>
#include <stdexcept>

// ќбъ€влени€ функций дл€ работы с файлами
std::string readFile(const std::string& filename);
bool writeToFile(const std::string& filename, const std::string& content);
bool createFile(const std::string& filename, const std::string& content = "");
bool fileExists(const std::string& filename);

// ‘ункци€ дл€ проверки смешанного русско-английского текста
bool validateMixedText(const std::string& text);

// ¬нешнее объ€вление глобальной переменной €зыка программы
extern std::string programLanguage;

#endif