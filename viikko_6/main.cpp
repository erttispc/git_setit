#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Student{
    string Name;
    int Age;
    public:
        Student(string x,int z){
            Name=x, Age=z;
        }
        void setAge(int x){
            Age=x;
        }
        void setName(string s){
            Name=s;
        }
        string getName(){
            return Name;
        }
        int getAge(){
            return Age;
        }
        void printStudentInfo(){
            cout << "Student: " << Name << " Age: " << Age << endl;
        }
};

int main ()
{
  int selection =0;
  vector<Student>studentList;

  do
    {
      cout<<endl;
      cout<<"Select"<<endl;
      cout<<"Add students = 0"<<endl;
      cout<<"Print all students = 1"<<endl;
      cout<<"Sort and print students according to Name = 2"<<endl;
      cout<<"Sort and print students according to Age = 3"<<endl;
      cout<<"Find and print student = 4"<<endl;
      cin>>selection;

      switch(selection)
      {
        case 0:{
            string x;
            int z;
            cout << "Enter student name" << '\n';
            cin >> x;
            cout << "Enter student age" << '\n';
            cin >> z;
            studentList.emplace_back(x,z);
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            break;
        }
        case 1:{
            cout << "Students :" << '\n';
            for (auto it : studentList){
                it.printStudentInfo();
            }
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet. 
            break;
        }

        case 2:{
            sort(studentList.begin(),studentList.end(),[]( Student &a, Student &b){
                return a.getName()<b.getName();
            });
            for (auto it : studentList){
                it.printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
        }
        case 3:{
            sort(studentList.begin(),studentList.end(),[]( Student &a, Student &b){
                return a.getAge()>b.getAge();
            });
            for (auto it : studentList){
                it.printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
        }

        case 4:{
            string tempString;
            cout << "Input student name:" << '\n';
            cin >> tempString;
            vector<Student>::iterator itr=find_if(studentList.begin(),studentList.end(),[tempString](Student& x){
                return tempString==x.getName();
            });
            itr->printStudentInfo();
          // Kysy käyttäjältä opiskelijan nimi
		  // Etsi studentListan opiskelijoista algoritmikirjaston
		  // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
		  // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
          break;
        }
        default:
          cout<< "Wrong selection, stopping..."<<endl;
          break;
      }
    }while(selection < 5);
    return 0;
}
