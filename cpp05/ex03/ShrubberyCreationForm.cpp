#include "ShrubberyCreationForm.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <exception>

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("home", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name)
    : Form(name, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) {
  *this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
  if (this != &obj) {
  }
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::doAction(Bureaucrat const& executor) const {
  std::string output_text;
  output_text += "      .\n";
  output_text += "   __/ \\__\n";
  output_text += "   \\     /\n";
  output_text += "   /.\'o\'.\\\n";
  output_text += "    .o.\'.\n";
  output_text += "   .'.'o'.\n";
  output_text += "  o'.o.'.o.\n";
  output_text += " .'.o.'.'.o.\n";
  output_text += ".o.'.o.'.o.'.\n";
  output_text += "   [_____]\n";
  output_text += "    \\___/\n";
  std::string file_name = executor.getName() + "_shrubbery";
  output_file(file_name, output_text);
}

void ShrubberyCreationForm::output_file(
    const std::string& file_name, const std::string& output_text) const {
  try {
    std::ofstream ofs(file_name.c_str());
    if (!ofs) {
      std::cerr << "Failed to open file: " << file_name << std::endl;
      return;
    }
    ofs << output_text;
  } catch (std::exception& e) {
    std::cerr << "File output error: " << file_name << ", " << e.what() << std::endl;
  }
}
