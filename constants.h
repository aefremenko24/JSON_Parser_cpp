//
// Created by efremar on 4/2/2025.
//

#ifndef CONSTANTS_H
#define CONSTANTS_H
#include <vector>

// Lexer constants
constexpr char JSON_WHITESPACE = ' ';
constexpr char JSON_QUOTE = '\"';
constexpr std::vector<char> JSON_SYNTAX = {'{', '}', ',', ':'};
constexpr std::vector<char> NUMBER_CHARACTERS = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '-', 'e', '.'};

// Parser constants
constexpr std::string JSON_LEFTBRACKET = "[";
constexpr std::string JSON_RIGHTBRACKET = "]";
constexpr std::string JSON_LEFTBRACE = "{";
constexpr std::string JSON_RIGHTBRACE = "}";

#endif //CONSTANTS_H
