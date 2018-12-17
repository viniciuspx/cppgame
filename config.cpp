#include <bits/stdc++.h>

using namespace std;

class Config {
    private: int lives = 3;
    private: int difficult = 0;
    private: int initialPoints = 0;

    public: int getLives() {
        return this->lives;
    }

    public: int getPoints() {
        return this->initialPoints;
    }
};