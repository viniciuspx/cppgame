#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

#define POSITIVE 1
#define NEGATIVE -1

class Player{

    private: string playerName;
    private: int lives;
    private: int points;
    private: int x, y;
    private: int acceleration = 1;
    private: char key;

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

    public: void updatePositionY(int direction){
        this->y = ( this->y + direction ) * acceleration;
    }

    public: void updatePositionX(int direction){
        this->x = ( this->x + direction ) * acceleration;
    }

    public: void setAcceleration(int acc){
        this->acceleration = acc;
    }

    public: int getAcceleration(){
        return this->acceleration;
    }

    public: void showStats(){
        cout << "Player Name: " << this->playerName << endl;
        cout << "Lives Ramaining: " << this->lives << endl;
        cout << "Points: " << this->points << endl;
        cout << "Position: " << "["<< this->x << "," << this->y << "]" << endl;
    }
    
    public: void listen(){ 

        this->key = getch();
        
        switch (this->key)
        {
            case 27:
                exit(1);
            break;
            
            case 's':
                updatePositionY(POSITIVE);
            break;

            case 'w':
                updatePositionY(NEGATIVE);
            break;

            case 'd':
                updatePositionX(POSITIVE);
            break;

            case 'a':
                updatePositionX(NEGATIVE);
            break;
        
        }

    }

};
