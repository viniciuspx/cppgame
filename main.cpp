#include <bits/stdc++.h>
#include "player.cpp"
#include "config.cpp"
#include "maps.cpp"

using namespace std;

main(int argc, char const *argv[])
{
    Player player;
    Config newConfig;
    Map map;


    player.setName("Julek");
    player.setLives(newConfig.getLives());
    player.setPoints(newConfig.getPoints());
    player.setPositionX(0);
    player.setPositionY(0);


    map.loadMap();

    // map.create(15,15);
    // map.clean();

    while(1){
        map.show(player);
        player.showStats();
        player.listen();
    }

    return 0;
}
