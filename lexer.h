//
// Created by efremar on 4/2/2025.
//

#ifndef LEXER_H
#define LEXER_H

#include <string>
#include <vector>

std::string lex_string(std::string &s);

std::string lex_number(std::string &s);

std::string lex_bool(std::string &s);

std::string lex_null(std::string &s);

std::vector<std::string> lex(std::string &s);

#endif //LEXER_H
