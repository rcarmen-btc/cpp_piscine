#include "main.hpp"
#include <unistd.h>

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

int ft_error(int code)
{
	if (code == 0)
		std::cout << "ERROR: Invalid num of args" << std::endl;
	else if (code == 1)
		std::cout << "ERROR: The file does not open or the file does not exist" << std::endl;
	else if (code == 2)
		std::cout << "ERROR: The file does not create" << std::endl;

	return 1;
}

int main(int ac, char **av) {

	if (ac != 4)
		return ft_error(0);

	std::string repfile(av[1]);
	repfile.append(".replace");


	std::ifstream outf(av[1]);
	if (!outf)
		return ft_error(1);

	std::ofstream inf(repfile.c_str()); 
	if (!inf)
		return ft_error(2);

	while (outf)
	{
		std::string outputStr;
		getline(outf, outputStr);

		line_replace(outputStr, av[2], av[3]);

		inf << outputStr << std::endl;
	}
	return 0;
}
