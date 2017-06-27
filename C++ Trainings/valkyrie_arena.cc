#include <iostream>
#include <string>
#include <vector>

namespace game {
namespace classes {

struct Valkyrie {
    std::string name;
    int level;
    int atk;
    int def;
    int kills;
};

} // classes
} // game

void initialize(std::vector< std::shared_ptr<game::classes::Valkyrie> >& v) {
    // Randomly set the stats for each Valkyrie
}

void brawl(std::vector< std::shared_ptr<game::classes::Valkyrie> >& v) {
    while (v.size() > 5) {
        // Have each Valkyrie fight one-on-one until there are 5 remaining
    }
}

void announce(std::vector< std::shared_ptr<game::classes::Valkyrie> >& v) {
    // Print out top 5 winners in order of kills
}

int main () {
    int player_num = 0;

	std::cout << "How many players?\n";
    std::cin >> player_num;

    std::vector< std::shared_ptr<game::classes::Valkyrie> > players;
    for (size_t i = 0; i < player_num; ++i) {
        players.push_back(std::make_shared<game::classes::Valkyrie>());
    }

    initialize (players);
    brawl(players);
    announce(players);

	return 0;
}