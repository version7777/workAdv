#include <iostream>
#include <vector>
using namespace std;

class List {
    private:
    protected:
    public:

    List(){
        // Constructor

    }
    ~List(){
        // Destructor

    }

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();

    vector<string> list;
    string name;
 
};