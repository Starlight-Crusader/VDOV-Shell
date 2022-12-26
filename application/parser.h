#include <iostream>
#include <cstdlib>
#include <string>
#include <iterator>
#include <list>

using namespace std;


class Parser {
    private:
        list<string> tokens;

    public:
        void tokenization(string);
        void parsing();

        void displayTokens();
};

void Parser::tokenization(string command) {
    int j = 0;
    
    if(!tokens.empty()) { tokens.clear(); }

    for(int i = 0; i < command.length(); i++) {
        if(command[i] == ' ') {
            tokens.push_back(command.substr(j, i-j));
            j = i + 1;
        }
    }

    tokens.push_back(command.substr(j, command.length()-j));
};

void Parser::displayTokens() {
    list<string>::iterator t;

    for(t = tokens.begin(); t != tokens.end(); ++t) { cout << *t << '\n'; }
};
