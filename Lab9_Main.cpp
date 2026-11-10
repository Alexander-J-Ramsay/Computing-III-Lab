int main (void) {
	UMLPerson p;
	cout << "UMLPerson():\n" << p << endl;
	
    Student s;
    cout << "Student():\n" << s << endl;
	
	Undergrad u;
	cout << "Undergrad():\n" << u << endl;
	
	Grader g;
	cout << "Grader():\n" << g << endl;
    
    Undergrad s1("Sally", "Brown", "110 Canal Street", 12345678, 4.0, "CS", "Tom Wilkes", "senior");
    Undergrad s2("Jimmy", "Smith", "99 Canal Street", 87654321, 3.0, "CS", "Tom Wilkes", "freshman");
 
    cout << "Undergrad s1(Sally...):\n" << s1 << endl;
	cout << "Undergrad s2(Jimmy...):\n" << s2 << endl;
	
	Grader g1("John", "Doe", "89 Canal Street", 54329876, 3.5, "CS", "Tom Wilkes", "junior",
			  "COMP.2010", 25, 20);
	cout << "Grader g1(John...):\n" << g1 << endl;
	
	Grader g2(g1); // invoke copy constructor
	cout << "Grader g2(copy of g1 - John...):\n" << g2 << endl;
	
	NTT n1("Tom", "Wilkes", "Foo Street", 52901256, "123-45-6789", "Computer Science", "Assistant Teaching Professor", 12345);
	cout << "NTT Faculty n1(Tom...):\n" << n1 << endl;

	Adjunct a1("Jane", "Roe", "12 Merrimack Street", 61234567, "987-65-4321", "Computer Science",
		3000, 19, 2);
	cout << "Adjunct Faculty a1(Jane...):\n" << a1 << endl;

	cout << "Grader pay advice: " << g1.payKind() << endl;
	cout << "NTT pay advice: " << n1.payKind() << endl;
	cout << "Adjunct pay advice: " << a1.payKind() << endl;
	
    return 0;
}
