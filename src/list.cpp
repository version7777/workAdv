#include "include/list.h"

void List::print_menu() {
  int choice;
  cout << "**********************\n";
  cout << "1 - Print List.\n";
  cout << "2 - Add to List.\n";
  cout << "3 - Delete from List.\n";
  cout << "4 - Quit.\n";
  cout << "Enter your choice  and press return/enter key.\n";

  cin >> choice;
  if (choice==4) {
    exit(0);
  }
  else if (choice == 3){
     delete_item();
  }
  else if (choice == 2){
      add_item();

  }
  else if (choice == 1){
      print_list();
  }
  else {
    cout << "Sorry Choice hasn't been implemented.\n";
  }
}


void List::add_item() {
  cout << "\n\n\n\n\n\n\n\n";
  cout << "***  Add Item ***\n";
  cout << "Type in an item and press return key:";

  string item;
  cin >> item;

  list.push_back(item);
  cout << "Successfully added an item to the list \n\n\n\n\n";
  cin.clear();
  print_menu();
  
}

void List::delete_item(){

  cout << "*** Delete Item ***\n";
  cout << "Select an item index number to delete\n";
  
  if (list.size()){
    for (unsigned int i=0; i < list.size(); i++){
      cout << i << ": " << list[i] << "\n";
    }
  }
  else {
    cout << "No Item in the list or to delete.\n";
  }  
  print_menu();
}

void List::print_list(){
  cout << "\n\n\n\n\n\n\n\n";
  cout << "*** Printing List ***\n";

  for (unsigned int list_index=0; list_index < list.size(); list_index++){
    cout << " * " << list[list_index] << "\n";
  }
  
  cout << "M - Menu \n";
  char choice;
  cin >> choice;

  if(choice == 'M' || choice == 'm'){
    print_menu();
  }
  else {
    cout << "Invalid choice... Quitting..\n";
  }

}