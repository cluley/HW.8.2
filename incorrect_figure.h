#pragma once
#include <iostream>

class incorrect_figure : public std::domain_error {
public:
	incorrect_figure(const std::string& message); //Не находит он в domain_error подходящий конструктор
	const char* what() const override { return /*Что я должен вернуть, у родителей даже полей нет?*/; } //Это если по анологии с презентацие,
	                                                                                                    //а других анологий у меня нет ¯\_( ఠ ʖ ఠ)_/¯
};