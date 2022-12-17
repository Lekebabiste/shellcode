#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

typedef unsigned char BYTE;

vector<BYTE> readFile(const char* filename){
    // open the file:
    streampos fileSize;
    ifstream file(filename, ios::binary);

    // get its size:
    file.seekg(0, ios::end);
    fileSize = file.tellg();
    file.seekg(0, ios::beg);

    // read the data:
    vector<BYTE> fileData(fileSize);
    file.read((char*) &fileData[0], fileSize);
    return fileData;
}

int main(int argc, char *argv){
	vector<BYTE> data_file = readFile(argv[1]);
	cout << "Binary format : " << "\n";
	for(BYTE e : test){
		cout << e;

	}
	cout << "\n";
	cout << "Shellcode : " << "\n" ;
	for(BYTE e : test){
		if ((unsigned int)(e) != 0){
			cout <<"/x" << hex << (unsigned int)(e);
	}
	}
	cout << "\n";
	return 0; 
}
