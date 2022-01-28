#include <string>
#include <iostream>
#include <fstream>


int main ( int argc, char *argv[] ){

    std::string str1 = argv[1];
    std::string str2 = argv[2];
    std::string filename = argv[3];
    std::string newfilename = filename;
    newfilename.append(".replace");
    std::ifstream ifs(filename);
    std::ofstream ofs(newfilename);

    if (argc != 4 || str1.size() == 0 || str2.size() == 0)
    {
        std::cout << "Número de argumentos inválido" << std::endl;
        return (-1);
    }
    std::string line;
    std::string ofline;
    while(getline(ifs, line)){
        ofline += line + '\n';
    }
    
    size_t pos;
    
    while ((pos = ofline.find(str1)) != ofline.npos){
    ofline.erase(pos, str1.size());
    ofline.insert(pos, str2);
    }
    
    ofs << ofline;
    ifs.close();
    return (0);
}