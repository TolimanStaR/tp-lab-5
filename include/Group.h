//
// Created by toliman on 03.02.2021.
//

#ifndef TP_LAB_5_GROUP_H
#define TP_LAB_5_GROUP_H

#include <string>
#include <vector>
#include <random>

class Student;

class Group {
private:
    std::string title;
    std::string spec;
    std::vector<Student *> students;
    Student *head;
public:
    Group(std::string titleParam);

    std::string getTitle();

    void setSpec(std::string specParam);

    void setTitle(std::string titleParam);

    void addStudent(Student &student);

    void chooseHead();

    Student *searchStudent(const std::string &fioField);

    Student *searchStudent(int idField);

    float getMiddleMark();

    void deleteStudent(Student &student);

    void str();
};


#endif //TP_LAB_5_GROUP_H