#include "Array.hpp"

std::string getRandomWord(){
    int random = (rand() % 40);
    std::string word[40] = {"Década", "Interés", "Correcto", "Brillantemente", "Polilla", "Malicioso",
                        "Colisión", "Cigarrillo", "Cerebro", "Dos", "Predicar", "Autoridad", "Simplista",
                        "Silencioso", "Gloria", "Caliente", "Flotar", "Curro", "Mendicidad", "Ámbar",
                        "Mezclada", "Divertido", "Soplar", "Descontaminación", "Despertar", "Vigoroso",
                        "Piña", "Maravilloso", "Seco", "Diplomático", "Película", "Chiflado", "Traed",
                        "Pestillo", "Hígado", "Arriesgado", "Rayo", "Comenzar", "Atrapar", "Biológico"};
    
    return (word[random]);
}

int main ( void ){
    std::cout << "-----INTS-----" << std::endl;
    Array <int>nums(10);
	std::cout << nums;
    srand(time(0));
    for(unsigned int i = 0; i < nums.size(); i++){
        int random = (rand() % 100);
        nums[i] = random;
    }
    std::cout << nums;
    std::cout << "-----STRINGS-----" << std::endl;
    Array <std::string>palabras(8);
	std::cout << palabras;
    for(unsigned int i = 0; i < palabras.size(); i++){
        palabras[i] = getRandomWord();
    }
    std::cout << palabras;
    std::cout << "-----FLOATS-----" << std::endl;
    Array <float>flotante(4);
    for(unsigned int i = 0; i < flotante.size(); i++){
        float random = (rand() % 100) / 3.4f;
        flotante[i] = random;
    }
    Array <float>copia = flotante;
    Array <float>recopia(flotante);
    flotante[1] = 4242.42f;
    try
    {
        std::cout << "floats array->   ";
        std::cout << flotante;
        std::cout << "floats copy array->   ";
        std::cout << copia;
        std::cout << "floats recopy array->   ";
        std::cout << recopia;
        std::cout << copia[454] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}