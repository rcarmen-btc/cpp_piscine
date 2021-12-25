#include "main.hpp"

void line_replace(std::string &outputStr, std::string av, std::string av2) {

	size_t index;
	std::string res;
	int first_lenth = 0;
	while ((index = outputStr.find(av)) != std::string::npos) {
		res = outputStr.substr(0, index);
		first_lenth = res.length();
		res += av2;
		res += outputStr.substr(index + av.length(), outputStr.length() + first_lenth + av.length());
		outputStr = res;
	}
	return;
}

int main(int ac, char **av) {

	if (ac != 4)
		return 1;
	std::cout << std::endl;

	std::ifstream outf(av[1]);
	std::ofstream inf((std::string )av[1] + ".replace"); 

	while (outf)
	{
		std::string outputStr;
		getline(outf, outputStr);

		line_replace(outputStr, av[2], av[3]);

		inf << outputStr << std::endl;
	}
	return 0;
}
