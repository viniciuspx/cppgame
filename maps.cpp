#include <bits/stdc++.h>
#include <fstream>
#include <string.h>

using namespace std;

class Map {
    
    private: int length;
    private: int height;

    private: int **map;

    public: void create(int length, int height){
        this->length = length;
        this->height = height;

        this->map = new int*[length];

        for (int i = 0; i < length; i++)
	        this->map[i] = new int[height];
    }

    public: void show(Player player){

        system("cls");
        
        for(int i = 0; i < this->length; i++)
        {
            
            for(int j = 0; j < this->height; j++)
            {
                if(player.getPositionX() == j && player.getPositionY() == i) 
                    cout << "X" << " ";
                else cout << this->map[i][j] << " ";
            }
            
            cout << endl;
        }
        
    }

    public: void clean(){
        
        for(int i = 0; i < this->length; i++)
        {
            for(int j = 0; j < this->height; j++)
            {
                this->map[i][j] = 0;
            }
        }
        
    }

    public: void loadMap(){

        int j = 0;
        
        ifstream mapFile;
        mapFile.open("maps/map1.mp");

        if(mapFile.is_open()){

            // cout << "Map loaded." << endl; 

            string line;

            getline(mapFile,line);

            this->length = stoi(line);

            getline(mapFile,line);

            this->height = stoi(line);

            this->create(this->length,this->height);

            while(getline(mapFile,line)){
                for(int i = 0 ; i < line.length() ; i ++){
                    this->map[i][j] = (int)line.at(i);
                }
                j++;
            }

            mapFile.close();
        }
    }

};