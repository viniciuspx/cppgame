#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

class Listener {
    
    public: char key;
    
    public: void listen(Player player){ 

        this->key = getch();
        
        switch (this->key)
        {
            case 27:
                exit(1);
            break;
            
            case 's':
                player.updatePositionY();
            break;
        
        }

    }

};
