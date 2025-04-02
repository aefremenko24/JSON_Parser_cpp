//
// Created by efremar on 4/2/2025.
//

#include "lexer.h"
#include "constants.h"

#include <bits/fs_fwd.h>

#include "utils.h"

std::string lex_string(std::string &s) {
    std::string token;
    if (s[0] == JSON_QUOTE) {
        s.erase(0,1);
    } else {
        return "";
    }

    for (const char ch : s) {
        if (ch == JSON_QUOTE) {
            s.erase(0,1);
            return token;
        }
        token += ch;
    }

    throw std::invalid_argument("Expected end-of-string quote");
}

std::string lex_number(std::string &s) {
    std::string token;

    for (char ch : s) {
        if (Utils::contains(NUMBER_CHARACTERS, ch)) {
            token += ch;
        } else {
            break;
        }
    }

    s.erase(0, token.size());

    return token;
}

std::string lex_bool(std::string &s) {
    if (s.size() >= 4 && s.substr(0,4) == "true") {
        s.erase(0,4);
        return "true";
    }
    if (s.size() >= 5 && s.substr(0,5) == "false") {
        s.erase(0, 5);
        return "false";
    }
    return "";
}

std::string lex_null(std::string &s) {
    if (s.size() >= 4 && s.substr(0,4) == "null") {
        s.erase(0,4);
        return "null";
    }
    return "";
}

std::vector<std::string> lex(std::string &s) {
    std::vector<std::string> tokens = {};
    std::string current_token;

    while (!s.empty()) {
        current_token = lex_string(s);
        if (!current_token.empty()) {
            tokens.push_back(current_token);
            continue;
        }

        current_token = lex_number(s);
        if (!current_token.empty()) {
            tokens.push_back(current_token);
            continue;
        }

        current_token = lex_bool(s);
        if (!current_token.empty()) {
            tokens.push_back(current_token);
            continue;
        }

        current_token = lex_null(s);
        if (!current_token.empty()) {
            tokens.push_back(current_token);
            continue;
        }

        if (s[0] == JSON_WHITESPACE) {
            s.erase(0,1);
        } else if (Utils::contains(JSON_SYNTAX, s[0])) {
            std::string token(1, s[0]);
            tokens.push_back(token);
        } else {
            throw std::invalid_argument("Unexpected character: " + s[0]);
        }
    }

    return tokens;
}