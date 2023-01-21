//
// Created by PySemos on 1/20/2023.
//

#include "File.h"


// Work in the empty methods

File::File() {}

File::File(File *clone) {}

File::File(string filename) {}

void File::update_filename(string filename) {}

void File::open() {}

void File::close() {}

string File::read() {
    return "";
}

void File::write(string text) {}

string File::get_file_name() {
    return this->filename;
}