#include <iostream>
#include "CSVParser.h"

using namespace std;

int main() {
    CSVParser csv = CSVParser(".csv");
    cout << csv.get_file_name();
}
