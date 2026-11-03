class PartTime : public EmployeeKind
{
	unsigned _maxHours;
	public:
	 PartTime();
	 PartTime(unsigned hours);
	 PartTime(EmployeeKind kind, unsigned hours);
	 int get_hours();
}

PartTime::PartTime() : EmployeeKind(), _maxHours(0)
{}
PartTime::PartTime(unsigned hours) : EmployeeKind(), _maxHours(hours)
{}
PartTime(EmployeeKind kind, unsigned hours) : EmployeeKind(kind), _maxHours(hours)
{}
int PartTime::get_hours()
{
	return _maxHours;
}
