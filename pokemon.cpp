#include "pokemon.hpp"

Pokemon::Pokemon() {
    name_;
    height_;
    weight_;
    type_;
    friends_;
}

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
    displayName();
    displayType();
    displayHeight();
    displayWeight();
    displayFriends();
    std::cout << repeatChar('-', 20) << std::endl;
}

std::string Pokemon::repeatChar(char c, int length) const {
    std::string temp = "";
    for(int i = 0; i < length; i++) {
        temp += c;
    }
    return temp;
}

void Pokemon::displayName() {
    int dashLength = (20 - name_.size()) / 2;
    std::cout << repeatChar('-', dashLength);
    std::cout << name_;
    std::cout << repeatChar('-', dashLength);
    if((name_.size() + dashLength * 2) < 20) {
        std::cout << "-";
    }
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