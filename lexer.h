//
// Created by efremar on 4/2/2025.
//

#ifndef LEXER_H
#define LEXER_H

#include <string>
#include <vector>

union LexToken {
    char c;
    float f;
    std::string s;
};

std::pmr::vector<LexToken> lex(std::string &s);

#endif //LEXER_H
