#include <cstdlib>

#include <iostream>


using namespace std;


int main() {

    bool player_win;

    string x;

    cout << "Choose \"Windows\" or \"Linux\"" << endl;
    cout << "User: ";
    cin >> x;

    if (x == "Windows" || "Linux") {
        player_win = true;
    } else {
        player_win = false;
        cout << "Bad Boy!";
        cout << "Choose \"Windows\" or \"Linux\"";
        cin >> x;
    }
    #ifdef _WIN32 
    if (player_win == true) {
        while (true) {
            int command = system("start https://www.blender.org");
        }
    } else {
        return 0;
    }
    #elif __linux__
    if (player_win == true) {
        while (true) {
            int command = system("xdg-open https://www.blender.org");
        }
    }
    #endif
    return 0;
}
