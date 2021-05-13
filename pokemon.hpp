#ifndef pokemon_hpp
#define pokemon_hpp

#include <vector>
#include <iostream>

class Pokemon {
public:
    //- Constructors
    Pokemon();
    Pokemon(std::string name, std::string height, std::string weight, std::string type, std::vector<std::string> friends);
    ~Pokemon();

    //- Getters
    std::string getName() const;
    std::string getHeight() const;
    std::string getWeight() const;
    std::string getType() const;
    std::vector<std::string> getFriends() const;

    void info();

private:
    //- Helpers
    std::string repeatChar(char c, int length) const;
    void displayName();
    void displayType();
    void displayHeight();
    void displayWeight();
    void displayFriends();

    //- Member values
    std::string name_;
    std::string height_;
    std::string weight_;
    std::string type_;
    std::vector<std::string> friends_;
};

#include "pokemon.cpp"
#endif