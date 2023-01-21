//
// Created by PySemos on 1/20/2023.
//

#ifndef UNTITLED_CSVPARSER_H
#define UNTITLED_CSVPARSER_H


#include <string>
#include "File.h"

using namespace std;

class CSVParser : public File{
    char delimiter;
public:
    CSVParser(string filename);
    CSVParser(string filename, char delimiter);
    CSVParser(CSVParser * clone);
};


#endif //UNTITLED_CSVPARSER_H
