#ifndef dataReader_hpp
#define dataReader_hpp

#include <fstream>
#include <vector>

class DataReader {
public:
    //- Constructors
	DataReader();
	~DataReader();
	DataReader(const std::string &fileName);

    //- Getters
	std::vector<std::string> getNames() const;
    std::vector<std::string> getHeights() const;
    std::vector<std::string> getWeights() const;
    std::vector<std::string> getTypes() const;
    std::vector< std::vector<std::string> > getFriends() const;

private:
    //- Helpers
    void readFileOf(const std::string &fileName);
	void separateCategories(const std::string& line);

	void filterName(const std::string& line, int& index);
	void filterHeight(const std::string& line, int& index);
	void filterWeight(const std::string& line, int& index);
	void filterType(const std::string& line, int& index);
	void filterFriend(const std::string& line, int& index);

    //- Member values
	std::vector<std::string> names_;
	std::vector<std::string> heights_;
	std::vector<std::string> weights_;
	std::vector<std::string> types_;
	std::vector< std::vector<std::string> > friends_;
};

#include "dataReader.cpp"
#endif