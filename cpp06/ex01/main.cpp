#include "Data.hpp"

uintptr_t serialize (Data *ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t serializedInt){
	return (reinterpret_cast<Data *>(serializedInt));
}

int main ( int argc, char **argv ){
    if (argc != 2){
        std::cout << "Error" << std::endl;
        return (0);
    }
    Data *data = new Data(argv[1]);
    data->processor();

	uintptr_t serializedInt = serialize(data);
	std::cout << "this is the serialized int->"<< serializedInt << std::endl;
	Data *reconstructed = deserialize(serializedInt);
	reconstructed->processor();
}