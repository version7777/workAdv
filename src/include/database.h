#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database {
    private:
    protected:
    public:

    Database(){
        // Constructor

    }
    ~Database(){
        // Destructor

    }

    

    vector<string> list;
    string name;

    void write(vector<string> list);
    void read();
 
};