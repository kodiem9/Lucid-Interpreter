#pragma once
#include <vector>
#include <string>


// Tokens
enum class TokenType
{
    VAR_INIT,
    VAR_NAME,
    VAR_GET,
    IF_OP,
    THEN_OP,
    NUMBER,
    PLUS_SYM,
    MINUS_SYM,

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