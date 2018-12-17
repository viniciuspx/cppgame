#include <bits/stdc++.h>
#include "player.cpp"
#include "config.cpp"
#include "maps.cpp"
#include "listener.cpp"

using namespace std;

main(int argc, char const *argv[])
{
    Player player;
    Config newConfig;
    Map map;
    Listener l;

    player.setName("Julek");
    player.setLives(newConfig.getLives());
    player.setPoints(newConfig.getPoints());
    player.setPositionX(0);
    player.setPositionY(0);
    
    
    map.create(5,5);
    map.clean();

    while(1){
        map.show(player);
        player.showStats();
        l.listen(player);
    }

    return 0;
}
