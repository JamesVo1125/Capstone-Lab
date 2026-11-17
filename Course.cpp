Class Course 
{
private:
    std::string coursePrefix;
    int courseNumber;
    int courseUnits;

public:
    Course(std::string aCoursePrefix, int aCourseNumber, int aCourseUnits) : coursePrefix(aCoursePrefix), courseNumber(aCourseNumber), courseUnits(aCourseUnits) {}

    void setCourseInfo(std::string aCoursePrefix, int aCourseNumber, int aCourseUnits);
    string getCoursePrefix() const;
    int getCourseNumber() const;
    int getCourseUnits() const;

void Course::setCourseInfo(std::string aCoursePrefix, int aCourseNumber, int aCourseUnits)
{
	std::string coursePrefix = aCoursePrefix;
    int courseNumber = aCourseNumber;
	int courseUnits = aCourseUnits;
}

string Course::getCoursePrefix() const
{
    return coursePrefix;
}

int Course::getCourseNumber() const
{
    return courseNumber;
}

int Course::getCourseUnits() const
{
		return courseUnits;
	}

bool operator<(const Course& otherCourse) const
{
	if(coursePrefix == otherCourse.coursePrefix)
	{
        return courseNumber < otherCourse; 
    }
	else
	{
		return coursePrefix < otherCourse.coursePrefix;
	}
}


return 0;
};

