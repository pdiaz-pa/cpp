#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyForm", 145, 137), _target(target)
{
	std::ofstream file(_target.append("_shrubbery"));

	file << "	   /\       " << std::endl;
	file << "     /\*\      " << std::endl;
	file << "    /\O\*\     " << std::endl;
	file << "   /*/\/\/\    " << std::endl;
	file << "  /\O\/\*\/\   " << std::endl;
	file << " /\*\/\*\/\/\  " << std::endl;
	file << "/\O\/\/*/\/O/\ " << std::endl;
	file << "      ||       " << std::endl;
	file << "      ||       " << std::endl;
	file << "      ||		" << std::endl;

	file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
