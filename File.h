//
// Created by PySemos on 1/20/2023.
//

#ifndef UNTITLED_FILE_H
#define UNTITLED_FILE_H

#include <string>

using namespace std;

class File {
protected:
    string filename;
public:
    File();
    File(string filename);
    File(File * clone);
    void update_filename(string filename);
    void open();
    void close();
    string read();
    void write(string text);
    string get_file_name();
};


#endif //UNTITLED_FILE_H
