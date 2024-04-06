Based on the information provided from the PDFs and the image, we can determine the format and contents of the course data input. Here is how you can rewrite the main program components to fit the given data:

1. **Course Class**: The Course class will have attributes for the course number, name, and prerequisites.

2. **Loading Data**: The `loadDataFromFile` function needs to parse each line to extract the course information and its prerequisites, and then create `Course` objects.

3. **Print Course List**: This function will print all courses in alphanumeric order.

4. **Print Course Info**: This function prompts the user for a course number and prints the title and prerequisites for that course.

Here is a C++ implementation for your review:

```cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

class Course {
public:
    string courseNumber;
    string courseName;
    vector<string> prerequisites;

    Course(string num, string name, vector<string> prereqs) :
        courseNumber(num), courseName(name), prerequisites(prereqs) {}

    // Function to print course information
    void printInfo() const {
        cout << courseNumber << " " << courseName << "\nPrerequisites: ";
        for (const auto& prereq : prerequisites) {
            cout << prereq << " ";
        }
        cout << endl;
    }

    // Comparison operator for sorting
    bool operator < (const Course& str) const {
        return (courseNumber < str.courseNumber);
    }
};

class LinkedList {
    // Assume Node and other member functions are defined here.
    // Node's data should be a Course object.
    // Modify Append, Remove, Search, etc. to handle Course objects.
};

// Function to prompt for a filename and load courses from the file
void loadDataFromFile(LinkedList& courseList) {
    string fileName;
    cout << "Enter filename: ";
    cin >> fileName;

    ifstream file(fileName);
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string courseNumber, courseName, prerequisite, info;
        getline(ss, courseNumber, ',');
        getline(ss, courseName, ',');
        vector<string> prerequisites;
        while (getline(ss, prerequisite, ',')) {
            prerequisites.push_back(prerequisite);
        }
        Course newCourse(courseNumber, courseName, prerequisites);
        // Append newCourse to the LinkedList
    }
    cout << "Data loaded successfully.\n";
}

// Function to print the course list
void printCourseList(const LinkedList& courseList) {
    // Use LinkedList's method to print courses in alphanumeric order.
}

// Function to print information for a specific course
void printCourseInfo(const LinkedList& courseList) {
    string courseNumber;
    cout << "What course do you want to know about? ";
    cin >> courseNumber;

    // Search for the course in the LinkedList and print its info
}

// The LinkedList definition and the rest of the functions need to be
// implemented according to the details from the PDFs and image.

// Rest of the main program...
```

I have provided only the structure and some functionality, assuming you will complete the implementation details for `LinkedList` and its interaction with `Course` objects. Additionally, error checking and input validation should be implemented as per the project requirements.

Please make sure to handle prerequisites carefully, as each course can have multiple prerequisites. The sorting functionality is also critical for the 'Print Course List' option.

Remember to compile and test each part of your program incrementally to ensure that each piece works before moving on to the next. This approach will also help you understand how each component of the application interacts with others.