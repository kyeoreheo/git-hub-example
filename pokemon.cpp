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

    int total = 20;
    int dashes = (total - name_.size()) / 2;

    if(name_.size() % 2 == 0) {
        putDash(dashes);
        std::cout << name_;
        putDash(dashes);

    } else {
        putDash(dashes + 1);
        std::cout << name_;
        putDash(dashes);
    }
    std::cout << std::endl;
    std::string type = "|type: " + type_;
    std::cout << type;
    putSpace(total - (type.size() + 1));
    std::cout << "|";
    std::cout << std::endl;

    std::string height = "|height: " + height_;
    std::cout << height;
    putSpace(total - (height.size() + 1));
    std::cout << "|";
    std::cout << std::endl;

    std::string weight = "|weight: " + weight_;
    std::cout << weight;
    putSpace(total - (weight.size() + 1));
    std::cout << "|";
    std::cout << std::endl;

    std::cout << "|friends: " << friends_.size();
    putSpace(total - (friends.size() + 1));
    std::cout << "|";
    std::cout << std::endl;

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