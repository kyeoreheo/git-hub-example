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

Pokemon::~Pokemon() {

}

void Pokemon::info() {

    int total = 40;
    std::string a = "";
    int dashes = (total - name_.size()) / 2;


    std::cout << std::endl;
    std::string type = "|type: " + type_;
    std::cout << type;
    putSpace(total - (type.size() + 1));
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

std::string Pokemon::getName() const {
    return name_;
}

std::string Pokemon::getHeight() const {
    return height_;
}
std::string Pokemon::getWeight() const {
    return weight_;
}

std::string Pokemon::getType() const {
    return type_;
}


void Pokemon::putDash(int num) {
    for(int i = 0; i < num; i++) {
        std::cout << "-";
    }
}
void Pokemon::putSpace(int num) {
    for(int i = 0; i < num; i++) {
        std::cout << " ";
    }
}