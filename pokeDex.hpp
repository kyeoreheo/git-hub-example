#ifndef pokeDex_hpp
#define pokeDex_hpp

#include <vector>
#include "pokemon.hpp"

class PokeDex {
public:
    //- Constructors
    PokeDex();
    PokeDex(std::vector<std::string> names,
        std::vector<std::string> heights,
        std::vector<std::string> weights,
        std::vector<std::string> types,
        std::vector< std::vector<std::string> > friends);
    ~PokeDex();

    //- Helpers
    Pokemon getPokemonOf(int index) const;
    std::vector<Pokemon> getFriendOf(Pokemon p) const;

private:
    //- Member values
    std::vector<Pokemon> pokemons_;
};

#include "pokeDex.cpp"
#endif