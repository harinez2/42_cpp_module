#include "ShrubberyCreationForm.hpp"

#include <fstream>
#include <string>

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

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
  Form::execute(executor);

  std::string filename = "sample.txt";
  std::ofstream ofs("sample.txt");//, std::ios::out);
  std::string writing_text;
      writing_text += "        .\n";
      writing_text += "   __/ \\__\n";
      writing_text += "   \\     /\n";
      writing_text += "   /.\'o\'.\\\n";
      writing_text += "    .o.\'.\n";
      writing_text += "   .'.'o'.\n";
      writing_text += "  o'.o.'.o.\n";
      writing_text += " .'.o.'.'.o.\n";
      writing_text += ".o.'.o.'.o.'.\n";
      writing_text += "   [_____]\n";
      writing_text += "    \\___/\n";
  ofs << writing_text << std::endl;
  // ofs.close();
}
