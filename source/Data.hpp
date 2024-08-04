#pragma once
#include <vector>
#include <string>


// Tokens
enum class TokenType
{
    VAR_INIT,
    VAR_NAME,
    IF_OP,
    THEN_OP,
    NUMBER,

    EQUALS,
    SEMICOLON,

    ERROR
};

struct Token
{
    TokenType type;
    std::string value;
};

inline std::vector<Token> tokens;


//Variables
struct Variable
{
    std::string name;
    std::string value;
};

inline std::vector<Variable> variables;