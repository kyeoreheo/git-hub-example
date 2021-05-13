#include "pokemon.hpp"

Pokemon::Pokemon(std::string name,
            std::string height,
            std::string weight,
            std::string type,
            std::vector<std::string> friends) {
    name_ = name;
    height_ = height;
    weight_ = weight;
    type_ = type;
    friends_ = friends;

}

std::string getName() const {
    std::string temp = name_;
    return temp;
}

std::string getHeight() const {
    std::string temp = height_;
    return temp;
}

std::string getWeight() const {
    std::string temp = weight_;
    return temp;
}

std::string getType() const {
    std::string temp = type_;
    return temp;
}

Pokemon::~Pokemon() {

}

void Pokemon::info() {

    int total = 40;
    std::string = "";
    int dashes = (total - name_.size()) / 2;


    std::string height = "|height: " + height_;
    std::cout << height;
    putSpace(total - (height.size() + 1));
    std::cout << "|";
    std::cout << std::endl;

    if(name_.size() % 2 == 0) {
        putDash(dashes);
        std::cout << name_;
        putDash(dashes);

    } else {
        putDash(dashes + 1);
        std::cout << name_;
        putDash(dashes);
    }


    std::cout << "|friends: " << friends_.size();
    putSpace(total - (friends.size() + 1));
    std::cout << "|";
    std::cout << std::endl;

}