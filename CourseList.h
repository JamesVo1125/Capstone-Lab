#ifndef COURSELIST_H
#define COURSELIST_H
class CourseList
{
    private:
    std::set<Course> courses;
    
    public:
    void addCourse(Course course);
    void printCourses()const;
}
