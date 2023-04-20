#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;



int main () {
   char data[100];

   // open a file in write mode.
   ofstream outfile;
   outfile.open("afile.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);

   // write inputted data into the file.
   outfile << data << endl;

   cout << "Enter your age: "; 
   cin >> data;
   //cin.ignore();
   
   // again write inputted data into the file.
   outfile << data << endl;

   // close the opened file.
   outfile.close();

   
   ifstream infile; 
   infile.open("afile.dat"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 

   cout << data << endl;
   
   // again read the data from the file and display it.
   infile >> data; 
   cout << data << endl; 
   infile.close();

   return 0;
}
 /*int main () {
 
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to a file.\n";
  
  cout<<" Finished writing \n";
  myfile.close();
  
  
  string line;
  
  ifstream read_file ("example.txt");
  if (read_file.is_open())
  {
    while ( getline (read_file,line) )
    {
      cout << line << '\n';
    }
   //char ch;
//
		//while (1) {
		//	read_file >> ch;
		//	if (read_file.eof())
		//		break;

		//	cout << ch;
	//	}
    
    read_file.close();
  }

  else cout << "Unable to open file"; 


return 0;

}*/