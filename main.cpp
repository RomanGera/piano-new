#include <iostream>

enum pianoKey{
    DO  = 1,
    RE  = 2,
    MI  = 4,
    FA  = 8,
    SOL = 16,
    LA  = 32,
    SI  = 64
};

void pianoSound (int shift){
    int sound = 1 << shift;
    if (sound & DO) std::cout << "DO ";
    else if (sound & RE) std::cout << "RE ";
    else if (sound & MI) std::cout << "MI ";
    else if (sound & FA) std::cout << "FA ";
    else if (sound & SOL) std::cout << "SOL ";
    else if (sound & LA) std::cout << "LA ";
    else std::cout << "SI ";
}

int main() {
    const int melody = 12;
    std::string temp;
    std::string combination;

    for (int i = 1; i <= melody; ++i){
        std::cout << "Input " << i << " combination of notes from " << melody << ": ";
        std::cin >> temp;
        combination += temp;
    }
    int i = 0;
    while ((i < combination.length()) && (((combination[i] - '0') >= 1) && (combination[i] - '0' <= 7))){
        pianoSound(combination[i] - '1');
        ++i;
    }
    if (i != combination.length())
        std::cout << "Input notes is incorrect";
}