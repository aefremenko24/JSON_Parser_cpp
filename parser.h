//
// Created by efremar on 4/2/2025.
//

#ifndef PARSER_H
#define PARSER_H
#include <map>
#include <string>
#include <vector>

std::string parse_array(std::vector<std::string> &tokens);

std::string parse_object(std::vector<std::string> &tokens);

std::string parse(std::vector<std::string> &tokens);

#endif //PARSER_H
