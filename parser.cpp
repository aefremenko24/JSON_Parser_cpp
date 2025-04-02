//
// Created by efremar on 4/2/2025.
//

#include "parser.h"

#include "constants.h"

std::string parse_array(std::vector<std::string> &tokens) {
    return "";
}

std::string parse_object(std::vector<std::string> &tokens) {
    return {};
}

std::string parse(std::vector<std::string> &tokens) {
    std::string token = tokens[0];
    tokens.erase(tokens.begin());
    if (token == JSON_LEFTBRACKET) {
        return parse_array(tokens);
    }
    if (token == JSON_LEFTBRACE) {
        return parse_object(tokens);
    }
    return token;
}