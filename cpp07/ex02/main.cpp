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
    //-----INTS-----
    Array <int>nums(10);
    srand(time(0));
    for(unsigned int i = 0; i < nums.size(); i++){
        int random = (rand() % 100);
        nums[i] = random;
    }
    for(unsigned int i = 0; i < nums.size(); i++){
            std::cout << nums[i] << std::endl;
    }
    //-----STRINGS-----
    Array <std::string>cuerda(8);
    for(unsigned int i = 0; i < cuerda.size(); i++){
        cuerda[i] = getRandomWord();
    }
    for(unsigned int i = 0; i < cuerda.size(); i++){
            std::cout << cuerda[i] << std::endl;
    }
    //-----FLOATS-----
    Array <float>flotar(4);
    for(unsigned int i = 0; i < flotar.size(); i++){
        float random = (rand() % 100);
        flotar[i] = random;
    }
    // Solucionar asignación y copia.
    /*Array <float>copia = flotar;
    flotar[1] = 69.69f;
    std::cout << "flotar" << std::endl;
    for(unsigned int i = 0; i < flotar.size(); i++){
            std::cout << flotar[i] << std::endl;
    }
    std::cout << "copia" << std::endl;
    for(unsigned int i = 0; i < copia.size(); i++){
            std::cout << copia[i] << std::endl;
    }*/
}