#include <iostream>
#include <cstdlib>
#include <string>
#include <unistd.h>

using namespace std;


class Visualizer {
    public:
        void startup();
};

void Visualizer::startup() {
    cout << "\u001b[33m============================================= || VDOV SHELL || =============================================\u001b[0m"; cout << '\n';
    cout << '\n';
    cout << "\u001b[34m======== IDEA BY: \u001b[0mXMAS-HACKATHON TEAM-XII \u001b[34m| PORTED FOR THE TERMINAL BY: \u001b[0mKALAMAGHIN ARTEOM (FAF-211) \u001b[34m========\u001b[0m"; cout << '\n';
    cout << '\n';
    cout << "                                        PRESS ANY KEY TO PROCEED ...                                        "; cout << '\n';
    cout << "\n";
};
