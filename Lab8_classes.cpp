class PartTime : public EmployeeKind
{
	unsigned _maxHours;
	public:
	 PartTime();
	 PartTime(unsigned hours);
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
