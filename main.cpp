#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
    mt19937 RNGeesus(time(0));
    uniform_int_distribution<int> diceRoll(1, 6);
    cout << diceRoll(RNGeesus) << endl;
    string playerName; //Declaring playerName, basically saying its a thing.
    cout << "Player, What is your name?" << endl; //Some text asking what your name is.
    cin >> playerName; //Input playerName
    while(playerName == "God"){ //Setting up a loop for while your name is god.
        cout << "Really? No, pick another name." << endl; //Saying lolnope!
        playerName.clear(); //Throwing away the old name.
        cin >> playerName; //Getting a new name!

    }
    cout << playerName << " huh? that's a pretty cool name."; //saying "how neat is that?". NOTE: add thats pretty neat Kappa.

    return 0; //Code word for everything is fine!
}
