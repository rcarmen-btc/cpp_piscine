#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

int main( void ) {

	std::cout << std::endl;
	Data rawData;
	rawData.name = "John";
	rawData.age = 42;
	rawData.lvl = 3.44;
	std::cout << "	Raw data:	" << std::endl;
	std::cout << "Address: " << &rawData << std::endl;
	std::cout << "Name: " << rawData.name << std::endl;
	std::cout << "Age: " << rawData.age << std::endl;
	std::cout << "Lvl: " << rawData.lvl << std::endl;
	uintptr_t notRawData = 0;
	std::cout << std::endl;
	std::cout << "Intermediate data: " << notRawData << std::endl;
	std::cout << std::endl;

	Data *rawDataAfterDeser = NULL;
	std::cout << "	Result data befor:	" << std::endl;
	std::cout << "Address: " << rawDataAfterDeser << std::endl;
	std::cout << std::endl;

	notRawData = serialize(&rawData);
	rawDataAfterDeser = deserialize(notRawData);
	std::cout << "	Result data after:	" << std::endl;
	std::cout << "Address: " << rawDataAfterDeser << std::endl;
	std::cout << "Name: " << rawDataAfterDeser->name << std::endl;
	std::cout << "Age: " << rawDataAfterDeser->age << std::endl;
	std::cout << "Lvl: " << rawDataAfterDeser->lvl << std::endl;
	std::cout << std::endl;
	std::cout << "Intermediate data: " << notRawData << std::endl;
	std::cout << std::endl;

	return 0;
}