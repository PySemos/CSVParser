//
// Created by PySemos on 1/20/2023.
//

#include "CSVParser.h"

CSVParser::CSVParser(string filename) {
    this->filename = filename;
    this->delimiter = ',';
}

CSVParser::CSVParser(string filename, char delimiter) {
    this->filename = filename;
    this->delimiter = delimiter;
}

CSVParser::CSVParser(CSVParser *clone) {
    this->filename = clone->filename;
    this->delimiter = clone->delimiter;
}