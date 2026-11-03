class EmployeeKind {
	public:
		void output(ostream& out) const { out << *this; }

	friend ostream& operator<< (ostream&, const EmployeeKind&);
};

class PartTime : public EmployeeKind
{
	unsigned _maxHours;
	public:
	 PartTime();
	 PartTime(unsigned hours);
	 PartTime(const& g);
	 int get_hours();
}

PartTime::PartTime() : _maxHours(0)
{}
PartTime::PartTime(unsigned hours) : _maxHours(hours)
{}
int PartTime::get_hours()
{
	return _maxHours;
}

class PerCourse :: public Paykind
{
	unsigned _feePerCourse
	public:
		PerCourse();
		PerCourse(int _feePerCourse);
		int getFeePerCourse();
		void setFeePerCourse(int iFee);
}

PerCourse::PerCourse() : _feePerCourse(0)
{}
PerCourse::PerCourse(unsigned _feePerCourse) : _feePerCourse(_feePerCourse)
{}
int PerCourse::getFeePerCourse()
{
	return _feePerCourse
}
void PerCourse::setFeePerCourse(unsigned iFee)
{
	_feePerCourse = iFee;
}

class Grader : public Undergrad, public Hourly, public PartTime { // derived class
    public:
		// constructors and destructor
        Grader() : Undergrad(), PartTime() { _classNumber = "NoClassNumber"; }
		
        Grader(string firstName, string lastName, string address, unsigned _IDNumber,
               double GPA, string smajor, string advisorName, string classRank,
			   string classNumber, unsigned hourlyRate, unsigned hours);
	    
	    Grader(const Grader&); // copy constructor
				
		~Grader();
        
		void output(ostream& out) const { out << *this; }
		
		// accessor functions
		string getClassNumber() const { return _classNumber; }
		
	friend ostream& operator<< (ostream&, const Grader&);
        
    private:
		string _classNumber; // e.g., COMP.2010
};
Grader::Grader(string firstName, string lastName, string address, unsigned _IDNumber,
               double GPA, string smajor, string advisorName, string classRank,
			   string classNumber, unsigned hourlyRate, unsigned hours)
	: Undergrad(firstName, lastName, address, _IDNumber, GPA, smajor, advisorName, classRank),
	  Hourly(hourlyRate), PartTime(hours)
{
	_classNumber = classNumber;
}

Grader::Grader(const Grader& g) : Undergrad(g), Hourly(g), PartTime(g) {
    // make an independent copy of any dynamic member variables of Student here
    _classNumber = g._classNumber;
	
    cout << "Grader copy constructor called for \""
		 << g.getFirstName() << " " << g.getLastName() << "\"\n";
}

PartTime(const Grader& g)
{
	_maxHours = g.get_hours();
}

Grader::~Grader() {
	// delete any dynamic data members for Student here
	cout << "Grader destructor called for \"" << getFirstName() << " " << getLastName() << "\"\n";
}
