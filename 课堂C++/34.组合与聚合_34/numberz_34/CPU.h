#include<string>

class CPU{
	
	public:
		CPU(const char *brand="intel",const char *version="i5");
		~CPU();
	private:
		std::string brand;
		std::string version;	
};
