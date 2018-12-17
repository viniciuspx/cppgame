#include <bits/stdc++.h>

using namespace std;

class Player{

    private: string playerName;
    private: int lives;
    private: int points;
    public: int x, y;

    public: void setName(string name){
        this->playerName = name;
    }

    public: void setLives(int lives){
        this->lives = lives;
    }

    public: void setPoints(int points){
        this->points = points;
    }

    public: int getPositionX(){
        return this->x;
    }

    public: void setPositionX(int x){
        this->x = x;
    }

    public: int getPositionY(){
        return this->y;
    }

    public: void setPositionY(int y){
        this->y = y;
    }

    public: void updatePositionY(){
        this->y = this->y + 1;
    }

    public: void showStats(){
        cout << "Player Name: " << this->playerName << endl;
        cout << "Lives Ramaining: " << this->lives << endl;
        cout << "Points: " << this->points << endl;
        cout << "Position: " << "["<< this->x << "," << this->y << "]" << endl;
    }

};
