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

void Parser::tokenization(String command) {
    int j = 0;
    
    if(!tokens.empty()) { tokens.clear(); }

    for(int i = 0; i < command.length()-1; i++) {
        if(command[i] == ' ') {
            tokens.push_end(command.substr(j, i));
        }

        j = i + 1;
    }

    tokens.push_end(command.substr(j, command.length()));
};

void Parser::displayTokens() {
    list<string>::iterator t;

    for(t = tokens.begin(); t != tokens.end(); ++t) { cout << '\t' << *t; }
    cout << '\n';
};
