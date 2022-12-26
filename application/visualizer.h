#include <iostream>
#include <cstdlib>
#include <string>
#include <iterator>
#include <unistd.h>

using namespace std;


class Visualizer {
    public:
        void startup();
        void logo();
        void credits();
        void waiter();
};

void Visualizer::startup() {
    system("clear");
    unsigned int second = 1000000;

    for(int i = 0; i < 3; i++) {
        system("clear");

        for(int i = 0; i < 5; i++) {
            cout << '.';
            usleep(second);
        }
    }

    system("clear");
};

void Visualizer::logo() {
    system("clear");
    unsigned int second = 1000000;

    cout << "\u001b[33m\n";
    cout << "                             ,----..                                                                          "; cout << '\n'; usleep(0.2*second);
    cout << "                ,---,       /   /   \                        .--.--.     ,---,                ,--,    ,--,    "; cout << '\n'; usleep(0.2*second);
    cout << "       ,---.  .'  .' `\    /   .     :        ,---.         /  /    '. ,--.' |              ,--.'|  ,--.'|    "; cout << '\n'; usleep(0.2*second);
    cout << "      /__./|,---.'     \  .   /   ;.  \      /__./|        |  :  /`. / |  |  :              |  | :  |  | :    "; cout << '\n'; usleep(0.2*second);
    cout << " ,---.;  ; ||   |  .`\  |.   ;   /  ` ; ,---.;  ; |        ;  |  |--`  :  :  :              :  : '  :  : '    "; cout << '\n'; usleep(0.2*second);
    cout << "/___/ \  | |:   : |  '  |;   |  ; \ ; |/___/ \  | |        |  :  ;_    :  |  |,--.   ,---.  |  ' |  |  ' |    "; cout << '\n'; usleep(0.2*second);
    cout << "\   ;  \ ' ||   ' '  ;  :|   :  | ; | '\   ;  \ ' |         \  \    `. |  :  '   |  /     \ '  | |  '  | |    "; cout << '\n'; usleep(0.2*second);
    cout << " \   \  \: |'   | ;  .  |.   |  ' ' ' : \   \  \: |          `----.   \|  |   /' : /    /  ||  | :  |  | :    "; cout << '\n'; usleep(0.2*second);
    cout << "  ;   \  ' .|   | :  |  ''   ;  \; /  |  ;   \  ' .          __ \  \  |'  :  | | |.    ' / |'  : |__'  : |__  "; cout << '\n'; usleep(0.2*second);
    cout << "   \   \   ''   : | /  ;  \   \  ',  /    \   \   '         /  /`--'  /|  |  ' | :'   ;   /||  | '.'|  | '.'| "; cout << '\n'; usleep(0.2*second);
    cout << "    \   `  ;|   | '` ,/    ;   :    /      \   `  ;        '--'.     / |  :  :_:,''   |  / |;  :    ;  :    ; "; cout << '\n'; usleep(0.2*second);
    cout << "     :   \ |;   :  .'       \   \ .'        :   \ |          `--'---'  |  | ,'    |   :    ||  ,   /|  ,   /  "; cout << '\n'; usleep(0.2*second);
    cout << "      '---' |   ,.'          `---`           '---'                     `--''       \   \  /  ---`-'  ---`-'   "; cout << '\n'; usleep(0.2*second);
    cout << "            '---'                                                                   `----'                    "; cout << '\n'; usleep(0.5*second);
    cout << "\u001b[0m\n";

};

void Visualizer::credits() {
    cout << "\u001b[34m========= IDEA BY: \u001b[0mXMAS-HACKATHON TEAM-XII \u001b[34m| PORTED FOR THE TERMINAL BY: \u001b[0mKALAMAGHIN ARTEOM (FAF-211) \u001b[34m=========\u001b[0m"; cout << '\n';
    cout << '\n';
};

void Visualizer::waiter() {
    cout << "                                         PRESS ANY KEY TO PROCEED ...                                         ";
    cout << '\n';
};
