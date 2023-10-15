//association , aggrigation and composition 


//Association:
          /* we have two classes the ojects are  independent to each other
           doctor..............patient
           student.............teacher
           car.................driver
           class car
           {
           }
           class Driver
           {
           void drive(car&)
           {
                etc
           }
           }
           main()
           {

           driver d1,d2,d3;
           car c1,c2,c3;
           d1.drive(c1);
           d2.drive(c2);
		   d1.drive(c2);
           }  */











//Aggrigation
            /* -> whole - part
             ->unidirectional realation 
     whole class             part class
     company=100..................employee
     department...............teacher
            class department                                              
             {
                 math
                  se
                  cs
                  bs
				  //if the obbject of parent class destroy the object of part class remain same

             };
             class teacher
             {
             department* d1;
              
                 t1
                 t2
                 t3
             };
             department own teachers
             life time of teacher not depends on the life time of object of deparmetnt*/
   
// composition
       /* ->strong form of aggrigation
        -> 
               whole class..........part class 
               person..................birthday
               house..................room
               question.................option*/
#include<iostream>
#include<string>

using namespace std;

class Options {
	string option1;
	string option2;
	string option3;
	string option4;
public:
	Options() {
		option1 = "null";
		option2 = "null";
		option3 = "null";
		option4 = "null";
		cout << "constructor of option class " << endl;
	}
	void setOption1(string s) {
		option1 = s;
	}
	void setOption2(string s) {
		option2 = s;
	}
	void setOption3(string s) {
		option3 = s;
	}
	void setOption4(string s) {
		option4 = s;
	}
	~Options() {
		cout << "Option Destructor " << endl;
	}

};

class Question {
	string statement;
	Options options;

public:

	Question() {
		cout << "constructor of question" << endl;
		string str;
		cout << "Enter the statement: ";
		getline(cin, statement);

		cout << "Enter the option1: ";
		getline(cin, str);
		options.setOption1(str);

		cout << "Enter the option2: ";
		getline(cin, str);
		options.setOption2(str);

		cout << "Enter the option3: ";
		getline(cin, str);
		options.setOption3(str);

		cout << "Enter the option4: ";
		getline(cin, str);
		options.setOption4(str);
		
	}
	~Question() {
		cout << "Question Destructor " << endl;
	}

};

int main() {
	{
		Question q1;
	}

	cout << "Out of scope" << endl;


	return 0;
}
        
               
//totally depends on paerent class   child class ka object exist h nhi kary ga agar parent class ka object nhi ha to
//
//
//
//



#include<iostream>

using namespace std;

class composition {
public:
	int length;
	composition() {
		cout << "HI I am Constructor of Composition." << endl;
	}
	~composition() {
		cout << "HI I am Destructor of Composition." << endl;
	}
};
class aggregation {
public:
	int length;
	aggregation() {
		cout << "HI I am Constructor of aggregation." << endl;
	}
	~aggregation() {
		cout << "HI I am Destructor of aggregation." << endl;
	}
};

class mainClass {
	composition obj1;

	aggregation* obj2;

public:
	mainClass(aggregation* ptr) {
		obj2 = ptr;
		cout << "HI I am Constructor of mainClass." << endl;
	}
	~mainClass() {
		cout << "HI I am Destructor of mainClass." << endl;
	}

};


int main() {
	aggregation* aggPtr;
	aggPtr = new aggregation;
	{
		mainClass mainObj(aggPtr);
	}
    cout << "out of scope" << endl;
    delete aggPtr;

	aggPtr->length = 55;
	cout << aggPtr->length << endl;

	return  0;
}




//.............................encryption..................................

//#include<iostream>
//using namespace std;
//class converter
//{
//public:
//	char arr[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
//	converter()
//	{}
//	int getIndex(char a) 
//	{
//		for (int i = 0; i < 26; i++) 
//		{
//			if (arr[i] == a) 
//			{
//				return i;
//			}
//		}
//		return -1;
//	}
//	void claculate(string let, int k)
//	{
//		int  y;
//		for (int x = 0; x < let.length(); x++)
//		{
//
//			y = (getIndex(let.at(x)) + k) % 26;
//			cout << arr[y] << " ";
//		}
// 
// 
// 
//	}
//};
//int main()
//{
//	string letters = "null";
//	int key;
//	cout << "enter your message" << endl;
//	cin >> letters;
//	cout << "enter the key" << endl;
//	cin >> key;
//	converter c1;
//	c1.claculate(letters, key);
//}
