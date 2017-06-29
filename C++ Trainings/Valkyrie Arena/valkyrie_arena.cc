#include <iostream>
#include <string>
#include <vector>

namespace game {
namespace classes {

struct Valkyrie {
    ::std::string name;
    int level;
    int atk;
    int def;
    int kills;
};

} // namespace classes
} // namespace game

// Randomly set the stats for each valkyrie
void initialize(::std::vector< ::std::shared_ptr<game::classes::Valkyrie> >& v) {

}

// Have each Valkyrie fight one-on-one until there are 5 remaining
void brawl(::std::vector< ::std::shared_ptr<game::classes::Valkyrie> >& v) {
    while (v.size() > 5) {

    }
}

// Print out top 5 winners in order of kills
void announce(::std::vector< ::std::shared_ptr<game::classes::Valkyrie> >& v) {

}

int main () {
    int player_num = 0;

    ::std::cout << "How many players?\n";
    ::std::cin >> player_num;

    ::std::vector< ::std::shared_ptr<game::classes::Valkyrie> > players;
    for (size_t i = 0; i < player_num; ++i) {
        players.push_back(::std::make_shared<game::classes::Valkyrie>());
    }

    initialize (players);
    brawl(players);
    announce(players);

    return 0;
}
