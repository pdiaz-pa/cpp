#include <string>
#include <iostream>
#include <fstream>


int main ( int argc, char *argv[] ){

    std::string str1 = argv[2];
    std::string str2 = argv[3];
    if (argc != 4 || str1.size() == 0 || str2.size() == 0)
    {
        std::cout << "Número de argumentos inválido" << std::endl;
        return (-1);
    }
    else{
        if(argv[1]){
            std::string filename = argv[1];
            std::string newfilename = filename;
            newfilename.append(".replace");
            std::ifstream ifs(filename);
            std::string line;
            std::string ofline;
            if(!ifs){
                std::cout << "No existe el archivo" << std::endl;
                return(-1);
            }
            else{
                std::ofstream ofs(newfilename);
                while(getline(ifs, line)){
                    ofline += line + '\n';
                }
                size_t pos;
                while ((pos = ofline.find(str1)) != ofline.npos){
                ofline.erase(pos, str1.size());
                ofline.insert(pos, str2);
                }
                ofs << ofline;
            }
            ifs.close();
        }
        else
            std::cout << "No introdujo ningún archivo" << std::endl;
    }   


    return (0);
}