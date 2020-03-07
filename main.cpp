// Faculty Project Version 1.0
// Homework of Video #19 "Structures 2" from Arabic Competetive programming Channel

/*
    | References:
    | -----------
    |
    |   New topics:
    |   ----------
    |
    |   Type Inference in C++ (auto and decltype)
    |   * https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/
    |
    |   placeholder type specifiers (since C++11)
    |   * https://en.cppreference.com/w/cpp/language/auto
    |
    |   Vector in C++ STL
    |   * https://www.geeksforgeeks.org/vector-in-cpp-stl/
    |      
    |   What are Vectors in C++ ? All You Need to Know
    |   * https://www.edureka.co/blog/vectors-in-cpp/
    |
    |   Multidimensional Vectors in C++
    |   * https://stackoverflow.com/questions/41325425/multidimensional-vectors-in-c/41325471
    |
    |   2D vector in C++ with user defined size
    |   * https://www.geeksforgeeks.org/2d-vector-in-cpp-with-user-defined-size/
    |
    |   Input/output with files
    |   * http://www.cplusplus.com/doc/tutorial/files/
    |
    |   C++ Files and Streams
    |   * https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
    |
    |   Read/Write Class Objects from/to File in C++
    |   * https://www.geeksforgeeks.org/readwrite-class-objects-fromto-file-c/
    |
    |   C++ program to write and read object using read and write function
    |   * https://www.includehelp.com/cpp-programs/write-read-object-in-file.aspx
    |
    |   C++ : How to read or write objects in file | Serializing & Deserializing Objects
    |   * https://thispointer.com/c-how-to-read-or-write-objects-in-file-serializing-deserializing-objects/
    |
    |   Creating files in C++
    |   * https://stackoverflow.com/questions/478075/creating-files-in-c/
    |
    |   creating a .txt file in c++
    |   * https://www.daniweb.com/programming/software-development/threads/195191/creating-a-txt-file-in-c
    |
    |   Can I return a null-Pointer in a C++ method?
    |   * https://stackoverflow.com/questions/33232012/can-i-return-a-null-pointer-in-a-c-method/33232081
    |
    |   std::vector::empty test isEmpty or not
    |   * http://www.cplusplus.com/reference/vector/vector/empty/
    |
    |   Checking for an empty file in C++ [duplicate]
    |   * https://stackoverflow.com/questions/2390912/checking-for-an-empty-file-in-c
    |   
    |   std::ifstream Membertypes (traits_type, char_type)
    |   * http://www.cplusplus.com/reference/fstream/ifstream/
    |
    |   Is returning null bad design? [closed]
    |   * https://stackoverflow.com/questions/1274792/is-returning-null-bad-design
    |
    |   converting vector iterator to pointer
    |   * https://stackoverflow.com/questions/37345988/converting-vector-iterator-to-pointer/37346088
    |
    |   Iterators in C++ STL
    |   * https://www.geeksforgeeks.org/iterators-c-stl/
    |
    |   How to return a vector pointer in C++?
    |   * https://stackoverflow.com/questions/52907902/how-to-return-a-vector-pointer-in-c
    |   
    |   Returning values by reference in C++
    |   * https://www.tutorialspoint.com/cplusplus/returning_values_by_reference.htm
    |
    |   Return pointer to a vector of objects as a function return
    |   * http://www.cplusplus.com/forum/general/188483/
    |
    |   iterator with vector pointer
    |   * https://stackoverflow.com/questions/10325774/iterator-with-vector-pointer
    |
    |   std::vector::erase (removing elements from vectors)
    |   * http://www.cplusplus.com/reference/vector/vector/erase/
    |
    |   Return vector in function
    |   * http://www.cplusplus.com/forum/beginner/233987/
    |
    |   a function that returns vector
    |   * http://www.cplusplus.com/forum/beginner/192344/
    |
    |   Efficient way to return a std::vector in c++
    |   * https://stackoverflow.com/questions/15704565/efficient-way-to-return-a-stdvector-in-c
    |
    |   COORD structure (Console API Structure from #include <windows.h>)
    |   * https://docs.microsoft.com/en-us/windows/console/coord-str
    |
    |   Centering txt output issue
    |   http://www.cplusplus.com/forum/general/44198/
    |
    |   Text Alignment C++ (console) (Source Code)
    |   * https://gist.github.com/Niceblack/3ccc3b212ccf61629c664e7f45e39e26
    |
    |   How to align a c++ output at center ? ( here he added a line to add ' ' if the text length is even)
    |   * https://www.sololearn.com/Discuss/804960/how-to-align-a-c-output-at-center
    |
    |   Get size of terminal window (rows/columns)
    |   * https://stackoverflow.com/questions/23369503/get-size-of-terminal-window-rows-columns
    |
    |   C++ Program to print current Day, Date and Time (GeeksForGeeks)
    |   * https://www.geeksforgeeks.org/c-program-print-current-day-date-time/
    |
    |   C++ Date and Time   (Tutorialspoint)
    |   * https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm
    |
    |   C++ Date and Time (Codes Cracker)
    |   * https://codescracker.com/cpp/cpp-date-time.htm
    |
    |   Difference between getc(), getchar(), getch() and getche()
    |   * https://www.geeksforgeeks.org/difference-getchar-getch-getc-getche/
    |
    |   SQL | DROP, TRUNCATE
    |   * https://www.geeksforgeeks.org/sql-drop-truncate/
    |   
    |   Best way to store currency values in C++
    |   * https://stackoverflow.com/questions/149033/best-way-to-store-currency-values-in-c
    |
    |   Scope resolution operator  '::' in C++
    |   * https://www.geeksforgeeks.org/scope-resolution-operator-in-c/
    |
    |   What does the “::” mean in C++?
    |   * https://stackoverflow.com/questions/5345527/what-does-the-mean-in-c
    |
    |   Type support (basic types, RTTI, type traits)
    |   * https://en.cppreference.com/w/cpp/types
    |
    |   Standard library header <type_traits>
    |   * https://en.cppreference.com/w/cpp/header/type_traits
    |
    |   What is the point of STL Character Traits?
    |   * https://stackoverflow.com/questions/5319770/what-is-the-point-of-stl-character-traits
    |
    |   Ternary search tree
    |   * https://en.wikipedia.org/wiki/Ternary_search_tree
    |
    |   TernarySearchTree.hh 
    |   * http://www.keithschwarz.com/interesting/code/?dir=ternary-search-tree
    |
    |   File: TernarySearchTree.hh
    |   * http://www.keithschwarz.com/interesting/code/?dir=ternary-search-tree
    |
    |   std::basic_string (cpluscplus)
    |   * http://www.cplusplus.com/reference/string/basic_string/
    |   
    |   What's the difference between std::string and std::basic_string? And why are both needed?
    |   * https://stackoverflow.com/questions/1662107/whats-the-difference-between-stdstring-and-stdbasic-string-and-why-are-bot
    |   
    |   The basic_string string class constructor C++ program example
    |   * https://www.tenouk.com/cpluscodesnippet/cplusbasic_stringclassconstructor.html
    |
    |   std::ios::eof (cpluscplus)
    |   * http://www.cplusplus.com/reference/ios/ios/eof/
    |
    |   ios eof() function in C++ with Examples
    |   * https://www.geeksforgeeks.org/ios-eof-function-in-c-with-examples/
    |   
    |   Return an anonymous instance/value in functions in C++
    |   * https://stackoverflow.com/questions/28270392/return-an-anonymous-instance-value-in-functions-in-c
    |
    |   Checking for NULL pointer in C/C++ [closed]
    |   * https://stackoverflow.com/questions/3825668/checking-for-null-pointer-in-c-c
    |   
    |   ASCII Chart (cppreference)
    |   * https://en.cppreference.com/w/cpp/language/ascii
    |
    |   C++ Program to Display the ASCII Value of the Character Entered
    |   * https://www.sanfoundry.com/cpp-program-display-ascii-value-character-entered/
    |
    |   C++ input validation (look up answer 3 & 4)
    |   * https://stackoverflow.com/questions/25666047/c-input-validation   
    |
    |   How to initialize a vector of pointers [closed]     
    |   * https://stackoverflow.com/questions/9090680/how-to-initialize-a-vector-of-pointers
    |
    |   Single line if statement with 2 actions
    |   * https://stackoverflow.com/questions/12484133/single-line-if-statement-with-2-actions
    |
    |   vector::emplace_back in C++ STL
    |   * https://www.geeksforgeeks.org/vectoremplace_back-c-stl/
    |
    |   emplace vs insert in C++ STL
    |   * https://www.geeksforgeeks.org/emplace-vs-insert-c-stl/
    |
    |   How do I create a multidimensional vector/array of different types?
    |   * https://stackoverflow.com/questions/16473346/how-do-i-create-a-multidimensional-vector-array-of-different-types
    |
    |   Find a specific tuple element in a vector of tuples?
    |   * https://stackoverflow.com/questions/37455027/find-a-specific-tuple-element-in-a-vector-of-tuples
    |
    |   Using the New C++11 Array and Tuple Containers
    |   * https://www.oracle.com/technical-resources/articles/it-infrastructure/dev-c-array-containers.html
    |
    |   Find a specific tuple element in a vector of tuples?
    |   * https://stackoverflow.com/questions/37455027/find-a-specific-tuple-element-in-a-vector-of-tuples
    |
    |   std::find_if , std::find_if_not in C++
    |   * https://www.geeksforgeeks.org/stdfind_if-stdfind_if_not-in-c/
    |
    |   Vector of Tuples in C++
    |   * https://stackoverflow.com/questions/40188779/vector-of-tuples-in-c
    |
    |   <bits/stdc++.h> in C++
    |   * https://www.geeksforgeeks.org/bitsstdc-h-c/
    |
    |   How to add elements to a vector of tuples
    |   * https://stackoverflow.com/questions/41421669/how-to-add-elements-to-a-vector-of-tuples/41422230
    |
    |   How to add elements to a vector of tuples
    |   * https://stackoverflow.com/questions/41421669/how-to-add-elements-to-a-vector-of-tuples/41422230
    |
    |   Tuple Vector iteration, element access and erasion 
    |   * https://www.daniweb.com/programming/software-development/threads/459357/tuple-vector-iteration-element-access-and-erasion
    |
    |   Vector of Tuples in C++
    |   * https://stackoverflow.com/questions/40188779/vector-of-tuples-in-c
    |
    |   Sorting of Vector of Tuple in C++ (Ascending Order)
    |   * https://www.geeksforgeeks.org/sorting-vector-tuple-c-ascending-order/
    |
    |   std::sort() in C++ STL
    |   * https://www.geeksforgeeks.org/sort-c-stl/
    |
    |   std::tuple, std::pair | Returning multiple values from a function using Tuple and Pair in C++
    |   * https://www.geeksforgeeks.org/returning-multiple-values-from-a-function-using-tuple-and-pair-in-c/
    |
    |   Sorting a vector of custom objects
    |   * https://stackoverflow.com/questions/1380463/sorting-a-vector-of-custom-objects
    |
    |   Lambda expressions (since C++11)
    |   * https://en.cppreference.com/w/cpp/language/lambda
    |   
    |   Lambda expression in C++
    |   * https://www.geeksforgeeks.org/lambda-expression-in-c/
    |
    |   C++ : How to Sort a List of objects with custom Comparator or lambda function
    |   * https://thispointer.com/c-how-to-sort-a-list-of-objects-with-custom-comparator-or-lambda-function/
    |
    |   goto statement in C/C++
    |   * https://www.geeksforgeeks.org/goto-statement-in-c-cpp/
    |
    |   Struct declaration
    |   * https://en.cppreference.com/w/c/language/struct
    |
    |   Type (Incomplete type)
    |   * https://en.cppreference.com/w/c/language/type#Incomplete_types
    |
    |   typedef versus #define in C
    |   * https://www.geeksforgeeks.org/typedef-versus-define-c/
    |
    |   forward declaration of a struct in C?
    |   * https://stackoverflow.com/questions/9999512/forward-declaration-of-a-struct-in-c/9999752
    |
    |   C library function - asctime()
    |   * https://www.tutorialspoint.com/c_standard_library/c_function_asctime.htm
    |
    |   Split a sentence into words in C++
    |   * https://www.geeksforgeeks.org/split-a-sentence-into-words-in-cpp/
    |   
    |   How to split a string in C++
    |   * https://www.fluentcpp.com/2017/04/21/how-to-split-a-string-in-c/
    |
    |   boost::split in C++ library
    |   * https://www.geeksforgeeks.org/boostsplit-c-library/       
    |
    |   how to convert a date string to tm_wday in tm structure
    |   * https://stackoverflow.com/questions/3386633/how-to-convert-a-date-string-to-tm-wday-in-tm-structure
    |   
    |   asctime (3) - Linux Man Pages
    |   * https://www.systutorials.com/docs/linux/man/3-asctime/
    |
    |   Deleting an object in C++
    |   * https://stackoverflow.com/questions/3428956/deleting-an-object-in-c
    |   
    |   delete() in C++ (Geeks for Geeks)
    |   * https://www.geeksforgeeks.org/delete-in-c/
    |
    |   std::vector::back (Get last element)
    |   * http://www.cplusplus.com/reference/vector/vector/back/
    |   
    |   std::find() on a vector of pointers
    |   * https://stackoverflow.com/questions/35490173/stdfind-on-a-vector-of-pointers
    |   
    |   C++ Vector Library - at() Function
    |   * https://www.tutorialspoint.com/cpp_standard_library/cpp_vector_at.htm
    |
    |   string at() in C++
    |   * https://www.geeksforgeeks.org/string-at-in-cpp/
    |   
    |   vector::at() and vector::swap() in C++ STL
    |   * https://www.geeksforgeeks.org/vectorat-vectorswap-c-stl/
    |
    |   Difference between at() and overloading operator [ ] C++ [closed]
    |   * https://stackoverflow.com/questions/42469968/difference-between-at-and-overloading-operator-c/42470210
    |
    |   std::vector::at
    |   * http://www.cplusplus.com/reference/vector/vector/at/
    |
    |   C++ vector max_size();
    |   * https://stackoverflow.com/questions/3813124/c-vector-max-size
    |   
    |   Comparing strings, c++
    |   * https://stackoverflow.com/questions/24957965/comparing-strings-c/24958019
    |   
    |   6.11a — References and const
    |   * https://www.learncpp.com/cpp-tutorial/6-11a-references-and-const/
    |
    |   Is passing arguments as const references premature optimization?
    |   * https://softwareengineering.stackexchange.com/questions/372105/is-passing-arguments-as-const-references-premature-optimization
    |   
    |   Difference between const reference and normal parameter
    |   * https://stackoverflow.com/questions/2627166/difference-between-const-reference-and-normal-parameter/2627535#2627535
    |
    |   Remove file
    |   * http://www.cplusplus.com/reference/cstdio/remove/
    |   
    |   clear data inside text file in c++
    |   * https://stackoverflow.com/questions/17032970/clear-data-inside-text-file-in-c
    |   
    |   exit() vs _Exit() in C and C++
    |   * https://www.geeksforgeeks.org/exit-vs-_exit-c-cpp/
    |
    |   malloc - cpluscplus
    |   * http://www.cplusplus.com/reference/cstdlib/malloc/
    |   
    |   atexit - cpluscplus
    |   * http://www.cplusplus.com/reference/cstdlib/atexit/
    |
    |   Process identifier
    |   * https://en.wikipedia.org/wiki/Process_identifier
    |   
    |   9 Simple ways to find the Process ID (PID) of a Program Running on Linux
    |   * 2daygeek.com/check-find-parent-process-id-pid-ppid-linux/
    |
    |   The fork() System Call
    |   * http://www.csl.mtu.edu/cs4411.ck/www/NOTES/process/fork/create.html
    |
    |   Process Identification (pid_t) data type in C language
    |   * https://www.includehelp.com/c/process-identification-pid_t-data-type.aspx
    |
    |   
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |   <------------------------------------------------------------------------->
    |   <------------------------------------------------------------------------->
    |
    |   Problems & Solutions:
    |   --------------------
    |
    |   * How to use a struct inside another struct?
    |   see here: https://stackoverflow.com/questions/6287479/how-to-use-a-struct-inside-another-struct
    |
    |   * C++ switch statement (used in: facultyOperations())  
    |   see here: https://www.tutorialspoint.com/cplusplus/cpp_switch_statement.htm
    |
    |   * C Switch-case curly braces after every case (used in: facultyOperations())
    |   see here: https://stackoverflow.com/questions/4241545/c-switch-case-curly-braces-after-every-case/4246055
    |
    |   * Switch Statement in C/C++ (used in: facultyOperations())
    |   see here: https://www.geeksforgeeks.org/switch-statement-cc/
    |
    |   declare a constant variable in a struct causes me this error a nonstatic member reference must be relative to a specific object
    |   * https://stackoverflow.com/questions/59009858/declare-a-constant-variable-in-a-struct-causes-me-this-error-a-nonstatic-member?noredirect=1#comment104267841_59009858
    |
    |   Struct prototype before the main()
    |   * https://stackoverflow.com/questions/20363831/struct-prototype-before-the-main
    |
    |   Is it acceptable to assign 'NULL' to a boolean datatype?
    |   * https://stackoverflow.com/questions/651361/is-it-acceptable-to-assign-null-to-a-boolean-datatype
    |
    |   IntelliSense: the object has type qualifiers that are not compatible with the member function
    |   * https://stackoverflow.com/questions/13103755/intellisense-the-object-has-type-qualifiers-that-are-not-compatible-with-the-me/13103791
    |
    |   the object has type qualifiers that are not compatible with the member function
    |   * https://stackoverflow.com/questions/20252932/the-object-has-type-qualifiers-that-are-not-compatible-with-the-member-function
    |
    |   The error was: no matching function for call to 'History::History(History*&)'
    |   The answer: vHist vector carry History objects not pointers of History object
    |   and I accedently pushed 'hist' which is a pointer to object into vHist without derefrence it
    |   and that caused this error.
    |
    |   * Line: 2133:29 vHist->emplace_back(*hist);
    |
    |   [C++] Vector & segmentation fault !
    |   https://ubuntuforums.org/showthread.php?t=1205100
    |
    |   Vectors (segmentation fault)
    |   * https://discuss.codechef.com/t/vectors-segmentation-fault/15934
    |   
    |   Troubleshooting Segmentation Violations/Faults
    |   * http://web.mit.edu/10.001/Web/Tips/tips_on_segmentation.html
    |
    |   Smart pointers (Modern C++)
    |   * https://docs.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=vs-2019
    |
    |   C++ Core Guidelines: Rules to Resource Management
    |   * https://www.modernescpp.com/index.php/c-core-guidelines-rules-to-resource-management
    |
    |               _______________________________________________
    |               |---------------------------------------------|
    |               |--> What I Learned after SegFault problem <--|
    |               |---------------------------------------------|
    |           o...______________________________________________...o
    |
    |   C++ Core Guidelines: Rules to Resource Management
    |   * https://www.modernescpp.com/index.php/c-core-guidelines-rules-to-resource-management
    |
    |   Smart pointers (Modern C++)
    |   https://docs.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=vs-2019
    |
    |   Troubleshooting Segmentation Violations/Faults
    |   * http://web.mit.edu/10.001/Web/Tips/tips_on_segmentation.html
    |
    |   Data race
    |   * https://riptutorial.com/c/example/2622/data-race
    |   
    |   1.2 What is a Data Race?
    |   * https://docs.oracle.com/cd/E19205-01/820-0619/geojs/index.html
    |
    |   std::atomic
    |   * https://en.cppreference.com/w/cpp/atomic/atomic
    |
    |   C++ Library - <atomic>
    |   * https://www.tutorialspoint.com/cpp_standard_library/atomic.htm
    |   
    |   Memory model
    |   * https://en.cppreference.com/w/cpp/language/memory_model
    |
    |   std::memory_order
    |   * https://en.cppreference.com/w/cpp/atomic/memory_order
    |
    |   Value categories
    |   * https://en.cppreference.com/w/cpp/language/value_category
    |
    |   Implicit conversions
    |   * https://en.cppreference.com/w/cpp/language/implicit_conversion#Temporary_materialization
    |
    |   cv (const and volatile) type qualifiers
    |   * https://en.cppreference.com/w/cpp/language/cv
    |
    |   C++ deadlock detector - C++ Thread Validator 4.73 (Product to buy)
    |   * https://www.softwareverify.com/cpp-thread.php?source=adwords&campaign=thread-validator-search&adgroup=deadlock-detection&ad=004&gclid=CjwKCAiA8qLvBRAbEiwAE_ZzPbGu2uMaj_n4kZpk9Rt1t1eYv-PcSs0bdtKlLF919T9WFliaxzQIkxoCxw8QAvD_BwE
    |
    |   weak_ptr class template
    |   * https://www.boost.org/doc/libs/1_58_0/libs/smart_ptr/weak_ptr.htm
    |
    |   std::weak_ptr::lock
    |   * http://www.cplusplus.com/reference/memory/weak_ptr/lock/
    |
    |   std::shared_ptr
    |   * http://www.cplusplus.com/reference/memory/shared_ptr/ 
    |
    |   std::unique_ptr
    |   * http://www.cplusplus.com/reference/memory/unique_ptr/
    |
    |   
    |
    |   <------------------------------------------------------------------------->
    |   <------------------------------------------------------------------------->
    |
    |
    |
    |   TODO: list to improve my project in future:
    |   ------------------------------------------
    |
    |   C++ Core Guidelines: Rules to Resource Management
    |   * https://www.modernescpp.com/index.php/c-core-guidelines-rules-to-resource-management
    |
    |   C++ Core Guidelines: Constructors
    |   * https://www.modernescpp.com/index.php/c-core-guidelines-constructors
    |
    |   Smart pointers (Modern C++)
    |   * https://docs.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=vs-2019
    |
    |   Troubleshooting Segmentation Violations/Faults
    |   * http://web.mit.edu/10.001/Web/Tips/tips_on_segmentation.html
    |
    |   TODO: make the logout as goto at the ent of the function 
    |   TODO: try to replace all the pointers to be able to store it in a file and retrieve it later.
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |EOD

*/

#include <iostream>
#include <vector>
#include <tuple>
#include <fstream>
#include <algorithm>
#include <windows.h>
#include <ctime>


using namespace std;

// Enums:
// -----

enum Authority{Login = 1, Rigester, STUDENT, STAFF, ADMIN, EMPLOYEE};
enum Attendancy{absent, present};
enum StaffDegree{Professor, TeachingAssistant};

// Global declerations:
// -------------------

int logStatus = 0;      // to know user authority



// Course Struct Section:
// ---------------------

struct Attendance
{
    string attendDate;
    bool attendance;
};

// Course Struct Section:
// ----------------------


struct Course
{
    private:

        int id;
        string name;
        string description;
        int semesterNr;

        double ClassWorkMarks;
        double FinalGrade;
        
        int totalCWM;   // CWM: Class Work Marks
        int totalFinalG;
        int totalGrade; 
        int successTotalGrade; // the minimum Grade to pass 
        bool success;

        vector<Attendance> *attend = new vector<Attendance>;

        //vector<Student> std; // not sure if we need it or not

    public:

        // Constructor
        Course()
        {
            id = 0;
            name = " ";
            description = " ";
            ClassWorkMarks = 0.0;
            FinalGrade = 0.0;
            totalCWM = 40;
            totalFinalG = 60;
            totalGrade = 100;
            successTotalGrade = 50;
        }
        
        // Destructor
        ~Course(){}


        // sets
        void set_crs_id(int crsID) { id = crsID;}
        void set_crs_name(string crsName) { name = crsName; }
        void set_crs_desc(string crsDesc) { description = crsDesc; }
        void set_crs_semNr(int crsSemNr) { semesterNr = crsSemNr; }
        void set_crs_CWM(double crsCWM) { ClassWorkMarks = crsCWM; }
        void set_crs_FinalG(double crsFinalG) { FinalGrade = crsFinalG; }
        void set_crs_totalCWM(int crsTotalCWM) {totalCWM  = crsTotalCWM; }
        void set_crs_totalFinalG(int crsTotalFinalG) { totalFinalG = crsTotalFinalG; }
        void set_crs_successTotalG() { successTotalGrade = totalGrade / 2; }
        void set_crs_successTotalG(int crsSuccessTG) { successTotalGrade = crsSuccessTG; }
        void set_crs_success() { success = ( (FinalGrade+ClassWorkMarks) > successTotalGrade) ? true : false; }
        void set_crs_attendance(string, bool);
        
        // gets

        // get Course id
        int get_crs_id() { return id;}
        string get_crs_name() { return name; }
        string get_crs_desc() { return description; }
        int get_crs_semNr() { return semesterNr; }
        double get_crs_CWM() { return ClassWorkMarks; }
        double get_crs_FinalG() { return FinalGrade; }
        int get_crs_FinalTotalGrade() { return ClassWorkMarks + FinalGrade; }
        int get_crs_totalCWM() { return totalCWM; }
        int get_crs_totalFinalG() { return totalFinalG; }
        int get_crs_totalGrade() { return totalCWM + totalFinalG; }
        int get_crs_successTotalG() { return successTotalGrade; }
        bool get_crs_success() { return success; }
        int get_crs_attendance(string);
        
        // prints
        void print_crs();
        void print_crs_attendance();
};

// Course set Functions:
// --------------------

// set course Attendance
void  Course::set_crs_attendance(string crsAttendDate, bool crsAttendance) 
{
    // create object
    Attendance atd;
    
    // fill object
    atd.attendDate = crsAttendDate;
    atd.attendance = crsAttendance;
    
    // add object to vector list
    attend->push_back(atd);
    
}

// Course get Functions:
// --------------------


// get Course attendance day related to specific student each time
int Course::get_crs_attendance(string crsAttendDate)
{
    // define an Iterator
    vector<Attendance>::iterator it;
    if(!attend->empty())
    {
        // searching for Attendance by Attend Date using an iterator
        for(it = attend->begin() ; it != attend->end(); it++)
        {
            if(it->attendDate == crsAttendDate)
                return it->attendance;
        }
    }
    return -1;
}

// Course print Functions:
// ----------------------

// print Course general information
void Course::print_crs()
{
    cout<<"\n\n\tCourse Name is: "<<name<<'\n'
        <<"\n\tCourse Description is: "<<description<<'\n'
        <<"\n\tCourse total Class Work Marks = "<<ClassWorkMarks<<'\n'
        <<"\n\tCourse total Final Grade = "<<totalFinalG<<'\n'
        <<"\n\tcourse total Grade = "<<totalGrade<<'\n';
}

// print Course attendance for a specifc Student which we should access through the student struct
void Course::print_crs_attendance()
{
    vector<Attendance>::iterator it;
    int i = 1;

    cout<<'\n';
    if(!attend->empty())
    {    
        for( it = attend->begin(); it != attend->end(); it++)
        {
            cout<<"\n\tDay #"<<i++
                <<"Date: "<<it->attendDate
                <<"Attendance: "<<it->attendance<<'\n';
        }
    }else
        cout<<"\n\n\t\t\t!!! There is no Attendance assigned to course "<<name<<" yet !!!\n";
}


// ---------------------------------------------------------------
// ---------------------------------------------------------------


// Student Struct Section:
// ----------------------

struct Student{
    private:
        int id;
        string name;
        string birthday;
        string faculty;
        string department;
        int studyYearStart;
        int semesterNr;
        string email;
        bool payment;

        string username;
        string password;
        int regCode; // regestiration code
        
        
        vector<tuple<int, bool>> semNrSuccess;
        vector<Course> *vCrs = new vector<Course>;
        
    
    public:

        // Constructor
        Student()
        {
            id = 0;
            name = "";
            birthday = "";
            faculty = "";
            department = "";
            studyYearStart = 0;
            semesterNr = 0;
            email = "";

            

            username = "";
            password = "";
            regCode = 0;
        }
        
        // Destructor
        ~Student(){}

        // sets

                
        void set_std_id(int stdID) { id = stdID; }
        void set_std_name(string stdName) { name = stdName; }
        void set_std_birthday(string stdBirthday) { birthday = stdBirthday; }
        void set_std_faculty(string stdFaculty) { faculty = stdFaculty; }
        void set_std_department(string stdDepartment) { department = stdDepartment; }
        void set_std_studyYearStart(int stdStudyYear) { studyYearStart = stdStudyYear; }
        void set_std_semesterNr(int stdSemesterNr) { semesterNr = stdSemesterNr; }
        void set_std_email(string stdEmail) { email = stdEmail; } 
        void set_std_Courses(Course stdCrs) { vCrs->push_back(stdCrs); }
        void set_std_payment(bool hasPaid) { payment = hasPaid; }
        void set_std_username(string stdUserName) { username = stdUserName; }
        void set_std_password(string stdPassword) { password = stdPassword; }
        void set_std_regCode() { regCode = 1000000 + (id+1000)*3+2-1; } // a small calculation to generate standard unique code for each student

        void set_std_success_semNr(int stdSemNr);
        void set_std_crs_Grade(Course);
        

        // gets

        int get_std_id() { return id; }
        string get_std_name() { return name; }
        string get_std_birthday() { return birthday; }
        string get_std_faculty() { return faculty;}
        string get_std_department() { return department; }
        int get_std_studyYearStart() { return studyYearStart; }
        int get_std_semesterNr() { return semesterNr; }
        string get_std_email() { return email; }
        bool get_std_payment() { return payment; }
        string get_std_username() { return username; }
        string get_std_password() { return password; }
        int get_std_regCode() {return regCode; }
        vector<Course>* get_std_Course() { return vCrs; }
        
        double get_std_total_grade(int);
        double get_std_total_grade();
        bool get_std_success_semNr(int);
        Course* get_std_one_Course(int);
        Course* get_std_one_course(string);

        // prints
        
        void print_student_Username();
        void print_student();
};

// Student set Functions:
// ---------------------


// set Student Grades
void Student::set_std_crs_Grade(Course stdCrs)
{
    vector<Course>::iterator it;
    if(!vCrs->empty())
    {
        for( it = vCrs->begin(); it != vCrs->end(); it++)
        {
            // find the Course using its ID
            if(it->get_crs_id() == stdCrs.get_crs_id())
            {
                *it = stdCrs;
                break; 
            }
        }
    }else
        cout<<"\n\n\t\t\t!!! There is no courses assigned to Student "<<name<<" yet!!!\n";
}


// set Student Success by Semester Number
void Student::set_std_success_semNr(int stdSemNr)
{
    // Decleration
    int count = 0;

    vector<Course>::iterator it;
    if(!vCrs->empty())
    {
        for( it = vCrs->begin(); it != vCrs->end(); it++)
        {
            // count fail Courses
            if(it->get_crs_success() == false  && it->get_crs_semNr() == stdSemNr)
                count++;
            
            // add fail semester success if exceed 2 fails
            if(count == 3)
            {
                semNrSuccess.emplace_back(stdSemNr, false);
                break;
            }
        }
        // add pass smester success if not exceed 2 fails
        if(count < 3)
            semNrSuccess.emplace_back(make_tuple(stdSemNr, true)); // it seems it works at the end of the day
    }
    cout<<"\n\n\t\t\t!!! The student "<<name<<" has no Courses assigned to him. !!!\n";
}

// Student get Functions:
// ---------------------

// search about one Student Course by Course ID
Course* Student::get_std_one_Course(int crsID)
{
    vector<Course>::iterator it;
    if(!vCrs->empty())
    {
        for( it = vCrs->begin(); it != vCrs->end(); it++)
        {
            if(it->get_crs_id() == crsID)
                return &*it;   // to avoid returning pointer of local variable
        }
    }
    return nullptr;
}

// search about one Student course by Course Name
Course* Student::get_std_one_course(string crsName)
{
    vector<Course>::iterator it;
    if(!vCrs->empty())
    {
        for( it = vCrs->begin(); it != vCrs->end(); it++)
        {
            if(it->get_crs_name() == crsName)
                return &*it;
        }
    }
    return nullptr;
}

// get Student Success by Semester Number
bool Student::get_std_success_semNr(int stdSemNr)
{
    bool success;
    for(int i = 0; i < semNrSuccess.size(); i++)
    {
        if(get<0>(semNrSuccess[i]) == stdSemNr) // it seems it works at the end of the day
            success = get<1>(semNrSuccess[i]);
    }
    cout<<"\n\n\t\t\t!!! Your Semester Number has no success value yet !!!\n";
    return success;
} 
    
// get student total grade of all courses of a semester number
double Student::get_std_total_grade(int semNr)
{
    double totalG = 0.0;

    vector<Course>::iterator it;
    if(!vCrs->empty())
    {
        for( it = vCrs->begin(); it != vCrs->end(); it++)
        {
            if(it->get_crs_semNr() == semNr)
                totalG += it->get_crs_FinalTotalGrade();
        }
        return totalG;
    }
    return -1;
}

// get student total grade of all courses of current semester number
double Student::get_std_total_grade()
{
    double totalG = 0.0;

    vector<Course>::iterator it;
    if(!vCrs->empty())
    {
        for( it = vCrs->begin(); it != vCrs->end(); it++)
        {
            if(it->get_crs_semNr() == semesterNr)
                totalG += it->get_crs_FinalTotalGrade();
        }
        return totalG;
    }
    return -1;
}


// Student print Functions:
// -----------------------

// print student Username
void Student::print_student_Username()
{
    // allign username in center we should first: #include <windows.h>
    int consoleWidth;
    string hallo = "Hallo ";

    // get the consol screen size 
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hOut, &csbi);

    // get the width from the Right coordinate +1
    consoleWidth = csbi.srWindow.Right+1;
    
    // aligh the string in center
    cout<< string(( (consoleWidth - (username.size() + hallo.size()) )/2),' ') << hallo << username << " !\n";
}

// print student information
void Student::print_student()
{
    
    
    cout<<"\n\n\tStudent Name: "<<name<<'\n'
        <<"\n\tStudent Birthday: "<<birthday<<'\n'
        <<"\n\tStudent Faculty: "<<faculty<<'\n'
        <<"\n\tSudent Department: "<<department<<'\n'
        <<"\n\tStudent Study year: "<<studyYearStart<<'\n'
        <<"\n\tStudent Semester Nr.: "<<semesterNr<<'\n'
        <<"\n\tStudent E-mail: "<<email<<'\n'
        <<"\n\tSudent Payment Status: "<<payment<<'\n';
    if(payment == true)
    {

        cout<<"\n\tStudent total Grade for Semester #"<<semesterNr<<'\n';
        bool success = get_std_success_semNr(semesterNr)<<'\n';
        if(success == true) 
            cout<<"\n\tStudent total Success for semester #"<<semesterNr<<": pass"<<'\n';
        else
            cout<<"\n\tStudent total Success for semester #"<<semesterNr<<": fail"<<'\n';

        vector<Course>::iterator it;
        if(!vCrs->empty())
        {
            int i = 1;    
            for( it = vCrs->begin(); it != vCrs->end(); it++)
            {
                
                cout<<"\n\tCourse #"<<i++<<" : "<<it->get_crs_name()<<'\n'
                    <<"\n\tSemester #"<<it->get_crs_semNr()<<'\n'
                    <<"\n\tClass Work Marks = "<<it->get_crs_CWM()<<" / "<<it->get_crs_totalCWM()<<'\n'
                    <<"\n\tFinal Grade = "<<it->get_crs_FinalG()<<" / "<<it->get_crs_totalFinalG()<<'\n'
                    <<"\n\tTotal Grade = "<<it->get_crs_FinalTotalGrade()<<" / "<<it->get_crs_totalGrade()<<'\n'
                    <<"\n\tSuccess: "<<it->get_crs_success()<<'\n';
            }        
        }else
            cout<<"\n\n\t\t\t!!! There is no Courses assigned to Student "<<name<<" yet !!!\n";
    }
    else
        cout<<"\n\n\t- Your Courses will be Hidden unill you pay your tuition.\n";
}

// sort student struct:
// --------------------

struct sortStudentName{

    bool operator()(Student stdA, Student stdB)
    {
        // sort by name
        if(stdA.get_std_name() != stdB.get_std_name())
            return stdA.get_std_name() < stdB.get_std_name(); 

        // sort by id of same name
        return stdA.get_std_id() < stdB.get_std_id();    
    }
};

// this sort is based upon all semesters 
struct sortStudentGrades{
    bool operator()(Student stdA, Student stdB)
    {
        static bool check = true;
        
        // sort by semester nr.
        if(stdA.get_std_semesterNr() != stdB.get_std_semesterNr())
            return stdA.get_std_semesterNr() < stdB.get_std_semesterNr();

        // sort by total Grades of same semester nr.
        if(stdA.get_std_total_grade() != stdB.get_std_total_grade())
            return stdA.get_std_total_grade() > stdB.get_std_total_grade();

        // sort by name of same total Grades
        if(stdA.get_std_name() != stdB.get_std_name())
            return stdA.get_std_name() < stdB.get_std_name();
        
        // sort by id of same name
        return stdA.get_std_id() < stdB.get_std_id();
    }
};



// ---------------------------------------------------------------
// ---------------------------------------------------------------


// Department Struct Section:
// -------------------------

struct Department
{
    private:
        int id;
        string name;
        string description;
        
        vector<Student> *vStd = new vector<Student>;
        vector<Course> *vCrs = new vector<Course>; 
        
    public:

        // Constructor
        Department()
        {
            id = 0;
            name = "";
            description = "";
            
            
        }
        
        // Destructor
        ~Department(){}


        // sets
        void set_dep_id(int depID) { id = depID; }
        void set_dep_name(string depName) { name = depName; }
        void set_dep_desc(string depDescription) {description = depDescription; }
        
        void set_dep_new_Student_autoID(Student);
        void set_dep_new_Student(Student newStd) { vStd->push_back(newStd); }
        void set_dep_new_Course_autoID(Course);
        void set_dep_new_Course(Course newCrs) { vCrs->push_back(newCrs); }
        
        

        // gets
        int get_dep_id() { return id; }
        string get_dep_name() { return name; }
        string get_dep_desc() { return description; }
        vector<Student>* get_dep_students() { return vStd; }
        vector<Course>* get_dep_Courses() { return vCrs; }
        
        Student* get_dep_student(int);
        vector<Student>* get_dep_student(string);
        Course* get_dep_course(int);
        Course* get_dep_course(string);

        vector<Student>* get_dep_students_oneCrs(Course*);
        Student* get_dep_student_oneCrs(Course*,int);
        vector<Student>* get_dep_student_oneCrs(Course*,string);

        // statistics
        
        int get_dep_NrOfStd() { return vStd->size(); }
        double get_dep_successRatio();
        int get_dep_NrOfsuccessStd();
        
        // related to one Course
        
        int get_dep_NrOfStd_one_Course(Course*);
        double get_dep_successRatio_one_Course(Course*);
        int get_dep_NrOfsuccessStd_one_Course(Course*);

        // print
        void print_dep();
};

// Department set Functions:
// --------------------

// set a new Student with auto ID generator
void Department::set_dep_new_Student_autoID(Student newStd)
{
    if(vStd)
    {
        int autoStdID = vStd->back().get_std_id()+1;
        newStd.set_std_id(autoStdID);
        vStd->push_back(newStd);
    }
    else
    {
        newStd.set_std_id(1);
        vStd->push_back(newStd);
    }
}

// set a new Course with auto ID generator
void Department::set_dep_new_Course_autoID(Course newCrs)
{
    if(vCrs)
    {
        int autoCrsID = vCrs->back().get_crs_id()+1;
        newCrs.set_crs_id(autoCrsID);
        vCrs->push_back(newCrs);
    }
    else
    {
        newCrs.set_crs_id(1);
        vCrs->push_back(newCrs);
    }
}

// Department get Functions:
// --------------------

// get student from a department by ID
Student* Department::get_dep_student(int stdID)
{
    vector<Student>::iterator it;
    if(!vStd->empty())
    {
        for( it = vStd->begin(); it != vStd->end(); it++)
        {
            if(it->get_std_id() == stdID)
                return &*it;
        }
    }
    return nullptr;
}

// get student from a department by name
vector<Student>* Department::get_dep_student(string stdName)
{
    vector<Student>::iterator it;
    vector<Student> *tmpStd = new vector<Student>;
    for(it = vStd->begin(); it != vStd->end(); it++)
    {
        if(it->get_std_name() == stdName)
            tmpStd->push_back(*it);
    }
    if(tmpStd)
        return tmpStd;
    return nullptr;
}

// get Course from a department by ID
Course* Department::get_dep_course(int crsID)
{
    vector<Course>::iterator it;
    if(!vCrs->empty())
    {
        for( it = vCrs->begin(); it != vCrs->end(); it++)
        {
            if(it->get_crs_id() == crsID)
                return &*it;
        }
    }
    return nullptr;
}

// get Course from a department by name
Course* Department::get_dep_course(string crsName)
{
    vector<Course>::iterator it;
    if(!vCrs->empty())
    {
        for( it = vCrs->begin(); it != vCrs->end(); it++)
        {
            if(it->get_crs_name() == crsName)
                return &*it;
        }
    }
    return nullptr;
}


// statistics

// get the Ratio of success students in a department
double Department::get_dep_successRatio()
{
    int count = 0;
    
    vector<Student>::iterator it;
    if(!vStd->empty())
    {
        for( it = vStd->begin(); it != vStd->end(); it++)
        {
            int semNr = it->get_std_semesterNr();
            if(it->get_std_success_semNr(semNr) == true)
                count++;
        }
        return (count / vStd->size()) * 100;
    }
    return -1;
}

// get the Number of Students in a department
int Department::get_dep_NrOfsuccessStd()
{
    int count = 0;

    // iterate to find the success students
    vector<Student>::iterator it;
    if(!vStd->empty())
    {
        for( it = vStd->begin(); it != vStd->end(); it++)
        {
            // get the student semester number
            int semNr = it->get_std_semesterNr();
            if(it->get_std_success_semNr(semNr) == true)
                count++;
        }
        return count;
    }
    return -1;
}

// find a Course at one student
bool found_crs_std(Course *crs, Student *std)
{
    vector<Course> *vCrs = new vector<Course>;
    vCrs = std->get_std_Course();
    
    vector<Course>::iterator it;
    if(!vCrs->empty())
    {
        for( it = vCrs->begin(); it != vCrs->end(); it++)
        {
            if(it->get_crs_name() == crs->get_crs_name())
                return true;
        } 
    }
    return false;
}

// get Nr of students of a Course in a Department
int Department::get_dep_NrOfStd_one_Course(Course *crs)
{
    int count = 0;

    vector<Student>::iterator it;
    if(!vStd->empty())
    {
        for( it = vStd->begin(); it != vStd->end(); it++)
        {
            if(found_crs_std(crs, &*it))
                count++;
        }
        return count;
    }
    return -1;
}

// get the Ratio of Success for a Course in a Department
double Department::get_dep_successRatio_one_Course(Course *crs)
{
    int count = 0;
    double ratio = 0.0;
    int NrOfStd;

    vector<Student>::iterator it;
    if(!vStd->empty())
    {
        for( it = vStd->begin(); it != vStd->end(); it++)
        {
            // find the course at the student 'x'
            if(found_crs_std(crs, &*it))
            {
                // get success state of the Course of one Student
                Course *tmpCrs = new Course();
                tmpCrs = it->get_std_one_course(crs->get_crs_name());
                
                if(tmpCrs->get_crs_success())
                    count++;
            }
            
            // calculate the ratio
            NrOfStd = Department::get_dep_NrOfStd_one_Course(crs);
            ratio = (count / NrOfStd) * 100;
            return ratio;
        }
    }
    return -1;
}

// get Nr of Success Students of a Course in a Department 
int Department::get_dep_NrOfsuccessStd_one_Course(Course *crs)
{
    int count = 0;
    
    vector<Student>::iterator it;
    if(!vStd->empty())
    {
        for( it = vStd->begin(); it != vStd->end(); it++)
        {
            // find the course at the student 'x'
            if(found_crs_std(crs, &*it))
            {
                // get success state of the Course
                Course *tmpCrs = new Course();
                tmpCrs = it->get_std_one_course(crs->get_crs_name());
                
                if(tmpCrs->get_crs_success())
                    count++;
            }
            return count;
        }
    }
    return -1;
}

// get students of one course by Course it self
vector<Student>* Department::get_dep_students_oneCrs(Course* crs)
{
    vector<Student>* tmpStudent = new vector<Student>;

    vector<Student>::iterator it;
    if(!vStd->empty())
    {
        for( it = vStd->begin(); it != vStd->end(); it++)
        {
            if(found_crs_std(crs, &*it))
                tmpStudent->emplace_back(*it);
        }
        return tmpStudent;
    }
    return nullptr;
}

// get one student fo one course by Course it self
Student* Department::get_dep_student_oneCrs(Course* crs, int stdID)
{
    vector<Student>* std_of_one_crs = new vector<Student>;
    std_of_one_crs = get_dep_students_oneCrs(crs);

    vector<Student>::iterator it;
    if(!std_of_one_crs->empty())
    {
        for( it = std_of_one_crs->begin(); it != std_of_one_crs->end(); it++)
        {
            if(it->get_std_id() == stdID)
                return &*it;

        }
    }
    return nullptr;
}
        

// get one student fo one course by Course it self
vector<Student>* Department::get_dep_student_oneCrs(Course* crs, string stdName)
{
    vector<Student>* std_of_one_crs = new vector<Student>;
    std_of_one_crs = get_dep_students_oneCrs(crs);

    vector<Student>* tmpStd = new vector<Student>;

    vector<Student>::iterator it;
    if(!std_of_one_crs->empty())
    {
        for( it = std_of_one_crs->begin(); it != std_of_one_crs->end(); it++)
        {
            if(it->get_std_name() == stdName)
                tmpStd->emplace_back(*it);
        }
    }
    return nullptr;
}

// Department print Functions:
// ----------------------

void Department::print_dep() 
{
    cout<<"\n\n\tDepartment ID: "<<id<<'\n'
        <<"\tDepartment Name: "<<name<<'\n'
        <<"\tDepartment Description: "<<description<<'\n';
}


// ---------------------------------------------------------------
// ---------------------------------------------------------------


// Staff Struct Section:
// ---------------------

struct Staff{
    private:

        int id;
        string name;
        string degree;
        double salary;
        string fac;
        string dep;
        string email;

        string username;
        string password;
        int regCode;
        
        vector<Course> *vCrs = new vector<Course> ; 
    
    public:

        // Constructor
        Staff()
        {
            id = 0;
            name = "";
            degree = "";
            salary = 0.0;
            fac = "";
            dep = "";
            email = "";

            

            username = "";
            password = "";
            regCode = 0;
        }
        
        // Destructor
        ~Staff(){}

        // sets

        void set_stff_id(int stffID) { id = stffID;}
        void set_stff_name(string stffName) {name = stffName; }
        void set_stff_degree(string stffDegree) {degree = stffDegree; }
        void set_stff_salary(double stffSalary) {salary = stffSalary; }
        void set_stff_faculty(string stffFaculty) { fac = stffFaculty; } 
        void set_stff_department(string stffDepartment) { dep = stffDepartment; }
        void set_stff_email(string stffEmail) { email = stffEmail; }
        void set_stff_username(string stffUsername) { username = stffUsername; }
        void set_stff_password(string stffPassword) { password = stffPassword; }
        void set_stff_regCode() { regCode = 2000000 + (id + 100)*3+2-1; }
        void set_stff_vCourses(Course stffCourse) { vCrs->push_back(stffCourse); }        
                
        // gets
        
        int get_stff_id() { return id; }
        string get_stff_name() { return name; }
        string get_stff_degree() { return degree; }
        double get_stff_salary() { return salary; }
        string get_stff_faculty() { return fac; }
        string get_stff_department() { return dep; }
        string get_stff_email() { return email; }
        string get_stff_username() { return username; }
        string get_stff_password() { return password; }
        int get_stff_regCode() { return regCode; }
        vector<Course>* get_stff_Courses() { return vCrs; }

        Course* get_stff_one_Course(int);
        Course* get_stff_one_Course(string);

        // print
        void print_stff_username();
        void print_stff();
};


// Staff set Functions:
// ---------------------


// Staff get Functions:
// ---------------------

// get one Staff Course by ID 
Course* Staff::get_stff_one_Course(int crsID)
{
    vector<Course>::iterator it;
    if(!vCrs->empty())
    {
        for( it = vCrs->begin(); it != vCrs->end(); it++)
        {
            if(it->get_crs_id() == crsID)
                return &*it;
        }
    }
    return nullptr;
}

// get one Staff Course by Name
Course* Staff::get_stff_one_Course(string crsName)
{
    vector<Course>::iterator it;
    if(!vCrs->empty())
    {
        for( it = vCrs->begin(); it != vCrs->end(); it++)
        {
            if(it->get_crs_name() == crsName)
                return &*it;
        }
    }
    return nullptr;
}

// Staff print Functions:
// -----------------------

// print Username aligned at Center 
void Staff::print_stff_username()
{
    int consoleWidth;
    string hallo = "Hallo ";

    // get console screen width
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hOut, &csbi);
    
    // get the width from the Right coordinate +1
    consoleWidth = csbi.srWindow.Right+1;
    
    // align the string in center
    cout<< string( (consoleWidth - (username.size() + hallo.size() ))/2, ' ') << hallo << username << " !\n";

}

// print Staff Information
void Staff::print_stff()
{

    cout<<"\n\n\tStaff ID: "<<id<<'\n'
        <<"\n\tStaff Name: "<<name<<'\n'
        <<"\n\tStaff Degree: "<<degree<<'\n'
        <<"\n\tStaff Salary: "<<salary<<'\n'
        <<"\n\tStaff Faculty: "<<fac<<'\n'
        <<"\n\tStaff Department: "<<dep<<'\n'
        <<"\n\tStaff Courses:\n";
    vector<Course>::iterator it;
    int i = 1;
    if(!vCrs->empty())
    {
        for( it = vCrs->begin(); it != vCrs->end(); it++)
        {
            cout<<"\n\t\tCourse#"<<i++<<" "<<it->get_crs_name()<<'\n';
        }
    }else
        cout<<"\n\n\t\t\t!!! There is no Courses assigned to "<<name<<" Department yet !!!\n";
}

// sort staff struct:
// --------------------

struct sortStaffName{

    bool operator()(Staff stffA, Staff stffB)
    {
        if(stffA.get_stff_name() != stffB.get_stff_name())
            return stffA.get_stff_name() < stffB.get_stff_name();    
        
        return stffA.get_stff_salary() > stffB.get_stff_salary();
    }
};

struct sortStaffSalary{

    bool operator()(Staff stffA, Staff stffB)
    {
        if(stffA.get_stff_salary() != stffB.get_stff_salary())
            return stffA.get_stff_salary() > stffB.get_stff_salary();    
        
        return stffA.get_stff_name() < stffB.get_stff_name();
    }
};



// ---------------------------------------------------------------
// ---------------------------------------------------------------


// Faculty Struct Section:
// ---------------------

struct Faculty{
    private:

        int id;
        string name;
        string description;
        
        vector<Department> *vDep = new vector<Department>;
        vector<Staff> *vStff = new vector<Staff>;
        
    public:

        Faculty()
        {
            id = 0;
            name = "";
            description = "";        

            
            
        }

        ~Faculty(){}
        // sets 

        void set_fac_id(int facID) { id = facID; }
        void set_fac_name(string facName) { name = facName; }
        void set_fac_desc(string facDesc) { description = facDesc; }

        void set_new_dep_in_fac_autoID(Department facDep);
        void set_new_dep_in_fac(Department facDep) { vDep->push_back(facDep); }
        void set_new_stff_in_fac_autoID(Staff facStff);
        void set_new_stff_in_fac(Staff facStff) { vStff->push_back(facStff); }

        // gets

        int get_fac_id() { return id; }
        string get_fac_name() { return name; }
        string get_fac_desc() { return description; }
        int get_fac_nrOfStff() { return vStff->size(); }
        vector<Department>* get_dep_in_fac() { return vDep; }
        vector<Staff>* get_stff_in_fac() { return vStff; }
        
        Department* get_one_dep_in_fac(int);
        Department* get_one_dep_in_fac(string);

        Staff* get_one_stff_in_fac(int);
        vector<Staff>* get_one_stff_in_fac(string);
        
        // statistics

        int get_fac_nrOfStff_inDep(string dep);
        int get_fac_nrOfStd();
        int get_fac_nrOfSuccessStd();
        double get_fac_ratioOfSuccessStd();

        // prints

        void print_fac();
};

// Faculty set Functions:
// ---------------------

// set new Department in Faculty with auto ID generator
void Faculty::set_new_dep_in_fac_autoID(Department newDep)
{
    if(vDep)
    {
        int autoDepID = vDep->back().get_dep_id()+1;
        newDep.set_dep_id(autoDepID);
        vDep->push_back(newDep);
    }
    else
    {
        newDep.set_dep_id(1);
        vDep->push_back(newDep);
    }
}

// set new Staff in FAculty with auto ID generator
void Faculty::set_new_stff_in_fac_autoID(Staff newStff)
{
    if(vStff)
    {
        int autoStffID = vStff->back().get_stff_id()+1;
        newStff.set_stff_id(autoStffID);
        vStff->push_back(newStff);
    }
    else
    {
        newStff.set_stff_id(1);
        vStff->push_back(newStff);
    }
}


// Faculty get Functions:
// -----------------------

// get Department from one Faculty by ID
Department* Faculty::get_one_dep_in_fac(int facDepID)
{
    // This kind of search which I used in several places has other alternatives using find_if() and lambda functions
    // see here:https://www.geeksforgeeks.org/lambda-expression-in-c/
    vector<Department>::iterator it;
    if(!vDep->empty())
    {
        for( it = vDep->begin(); it != vDep->end(); it++)
        {
            if(it->get_dep_id() ==  facDepID)
                return &*it;
        }
    }
    return nullptr;
}

// get Department from one Faculty by Name
Department* Faculty::get_one_dep_in_fac(string facDepName)
{
    vector<Department>::iterator it;
    if(!vDep->empty())
    {
        for( it = vDep->begin(); it != vDep->end(); it++)
        {
            if(it->get_dep_name() == facDepName)
                return &*it;
        }
    }
    return nullptr;
}

// get one Faculty Staff by ID  
Staff* Faculty::get_one_stff_in_fac(int stffID)
{
    vector<Staff>::iterator it;
    if(!vStff->empty())
    {
        for(it = vStff->begin(); it != vStff->end(); it++)
        {
            if(it->get_stff_id() == stffID)
                return &*it;
        }
    }
    return nullptr; 
}

// get one Faculty Staff by Name
vector<Staff>* Faculty::get_one_stff_in_fac(string stffName)
{
    vector<Staff> *tmpStff;
    vector<Staff>::iterator it;
    if(!vStff->empty())
    {
        for( it = vStff->begin(); it != vStff->end(); it++)
        {
            if(it->get_stff_name() == stffName)
                tmpStff->push_back(*it);
        }
        return tmpStff;
    }
    return nullptr;
}

// get the number of staff in one department
int Faculty::get_fac_nrOfStff_inDep(string dep)
{
    int count = 0;

    vector<Staff>::iterator it;
    if(!vStff->empty())
    {
        for( it = vStff->begin(); it != vStff->end(); it++)
        {
            if( it->get_stff_department() == dep)
                count++;
        }
        return count;
    }
    return -1;
}

// get number of students of Faculty by adding departments
int Faculty::get_fac_nrOfStd()
{
    int nrOfStd = 0;

    vector<Department>::iterator it;
    if(!vDep->empty())
    {
        for( it = vDep->begin(); it != vDep->end(); it++)
            nrOfStd += it->get_dep_NrOfStd();
        return nrOfStd;
    }
    return -1;

}

// get number of success students of Faculty by adding departments
int Faculty::get_fac_nrOfSuccessStd()
{
    int nrOfSuccStd = 0;

    vector<Department>::iterator it;
    if(!vDep->empty())
    {
        for( it = vDep->begin(); it != vDep->end(); it++)
            nrOfSuccStd += it->get_dep_NrOfsuccessStd();
        return nrOfSuccStd;
    }
    return -1;
}

// get ratio of success students of Faculty by adding departments
double Faculty::get_fac_ratioOfSuccessStd()
{
    int count = 0;
    double RatioOfSuccStd = 0;

    vector<Department>::iterator it;
    if(!vDep->empty())
    {
        for( it = vDep->begin(); it != vDep->end(); it++)
        {
            RatioOfSuccStd += it->get_dep_NrOfsuccessStd(); 
            count++;
        }
        return RatioOfSuccStd / count;
    }
    return -1;
}

// Faculty print Functions:
// -----------------------

void Faculty::print_fac()
{
    cout<<"\n\n\tFaculty ID: "<<id<<'\n'
        <<"\n\tFaculty Name: "<<name<<'\n'
        <<"\n\tFaculty Description: "<<description<<'\n';
}

// ---------------------------------------------------------------
// ---------------------------------------------------------------


// Employee Struct Section:
// ---------------------


// Employee struct:
// ---------------

struct Employee{

    private:

        int id; 
        string name;
        string jobTitle;
        string jobDesc;
        double salary;
        string email;

        string username;
        string password;
        int regCode;

        vector<Attendance> *vAtt = new vector<Attendance>;
        vector<Faculty> *vFac = new vector<Faculty>;
    
    public:

        // Constructor
        Employee()
        {
            id = 0;
            name = "";
            jobTitle = "";
            jobDesc = "";
            salary = 0.0;
            email = "";

            
            

            username = "";
            password = "";
            regCode = 0;
        }

        // Distructor
        ~Employee(){}

        // sets

        void set_emp_id(int empID) { id = empID; }
        void set_emp_name(string empName) { name = empName; }
        void set_emp_jobTitle(string empJobTitle) { jobTitle = empJobTitle; }
        void set_emp_jobDesc(string empJobDesc) { jobDesc = empJobDesc; }
        void set_emp_salary(double empSalary) { salary = empSalary; }
        void set_emp_email(string empEmail) { email = empEmail; }
        void set_emp_username(string empUsername) { username = empUsername; }
        void set_emp_password(string empPassword) { password = empPassword; }
        void set_emp_regCode() { regCode = 3000000 +(id+10)*3+2-1; }
        void set_emp_attendance(Attendance empAttend) { vAtt->push_back(empAttend); }
        void set_emp_new_fac_autoID(Faculty);
        void set_emp_new_fac(Faculty newFac) { vFac->push_back(newFac); }


        // gets

        int get_emp_id() { return id; }
        string get_emp_name() { return name; }
        string get_emp_jobTitle() { return jobTitle; }
        string get_emp_jobDesc() { return jobDesc; }
        double get_emp_salary() { return salary; }
        string get_emp_email() { return email; }
        string get_emp_username() { return username; }
        string get_emp_password() { return password; }
        int get_emp_regCode() { return regCode; }
        vector<Faculty>* get_emp_Fac() { return vFac; }
        vector<Attendance>* get_emp_attendance() {return vAtt; }

        Attendance* get_emp_oneAtt(string); 
        Faculty* get_emp_oneFac(int);
        Faculty* get_emp_oneFac(string); 

        // statistics

        int get_emp_fac_nrOfStudents();
        int get_emp_fac_nrOfSuccessStudents();
        double get_emp_fac_ratioOfSuccessStudents();
        int get_emp_fac_nrOfStaff();

        // prints

        void print_emp_username();
        void print_emp();
};

// Employee set functions:
// ----------------------

void Employee::set_emp_new_fac_autoID(Faculty newFac)
{
    if(!vFac->empty())
    {
        int autoFacID = vFac->back().get_fac_id()+1;
        newFac.set_fac_id(autoFacID);
        vFac->push_back(newFac);
    }
    else
    {
        newFac.set_fac_id(1);
        vFac->push_back(newFac);
    }
}

// Employee get functions:
// ----------------------

// get one Employee attendance by attendance date
Attendance* Employee::get_emp_oneAtt(string attendDate)
{
    vector<Attendance>::iterator it;
    if(!vAtt->empty())
    {
        for( it = vAtt->begin(); it != vAtt->end(); it++)
        {
            if(it->attendDate == attendDate)
                return &*it;
        }
    }
    return nullptr;
}


// get one Faculty by ID  
Faculty* Employee::get_emp_oneFac(int facID)
{
    vector<Faculty>::iterator it;
    if(!vFac->empty())
    {
        for( it = vFac->begin(); it != vFac->end(); it++)
        {
            if(it->get_fac_id() == facID)
                return &*it;
        }
    }
    return nullptr;
}

// get one Faculty by Name
Faculty* Employee::get_emp_oneFac(string facName)
{
    vector<Faculty>::iterator it;
    if(!vFac->empty())
    {
        for( it = vFac->begin(); it != vFac->end(); it++)
        { 
            if(it->get_fac_name() == facName)
                return &*it;
        }
    }
    return nullptr;
}

// get number of Students in Academy
int Employee::get_emp_fac_nrOfStudents()
{
    int nrOfStd = 0;

    vector<Faculty>::iterator it;
    if(!vFac->empty())
    {
        for( it = vFac->begin(); it != vFac->end(); it++)
            nrOfStd += it->get_fac_nrOfStd();
        return nrOfStd;
    }
    return -1;

}

// get number of success students in Academy
int Employee::get_emp_fac_nrOfSuccessStudents()
{
    int nrOfSuccStd = 0;

    vector<Faculty>::iterator it;
    if(!vFac->empty())
    {
        for( it = vFac->begin(); it != vFac->end(); it++)
            nrOfSuccStd += it->get_fac_nrOfSuccessStd();
        return nrOfSuccStd;
    }
    return -1;
}

// get the ratio of Success Students in Academy
double Employee::get_emp_fac_ratioOfSuccessStudents()
{
    int count = 0;
    double ratioOfSuccStd = 0;

    vector<Faculty>::iterator it;
    if(!vFac->empty())
    {
        for( it = vFac->begin(); it != vFac->end(); it++)
        {
            ratioOfSuccStd += it->get_fac_ratioOfSuccessStd();
            count++;
        }
        return ratioOfSuccStd / count;
    }
    return -1;
}

// get the number of Staff in Academy
int Employee::get_emp_fac_nrOfStaff()
{
    int nrOfStff = 0;

    vector<Faculty>::iterator it;
    if(!vFac->empty())
    {
        for( it = vFac->begin(); it != vFac->end(); it++)
        {
            nrOfStff += it->get_fac_nrOfStff();
        }
        return nrOfStff;
    }
    return -1;
}



// Employee print functions:
// ------------------------

// print Employee username
void Employee::print_emp_username()
{
    int consolewidth;
    string hallo = "Hallo ";
    
    // get console screen width
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hOut, &csbi);

    // get the width from the Right coordinate +1
    consolewidth = csbi.srWindow.Right+1;

    // align the string in center // and this -2 down is for ' !' symbol and space before it
    cout<< string( (consolewidth - (username+hallo).size()),' ') << hallo << username <<'\n';

}

// print Employee information
void Employee::print_emp()
{
    cout<<"\n\n\tEmployee ID: "<<id<<'\n'
        <<"\n\tEmployee Name: "<<name<<'\n'
        <<"\n\tEmployee Job Title: "<<jobTitle<<'\n'
        <<"\n\tEmployee Job Description: "<<jobDesc<<'\n'
        <<"\n\tEmployee Salary: "<<salary<<'\n'
        <<"\n\tEmployee E-mail: "<<email<<'\n';

}


// sort employee struct:
// --------------------

struct sortEmployeeName{

    bool operator()(Employee empA, Employee empB)
    {
        if(empA.get_emp_name() != empB.get_emp_name())
            return empA.get_emp_name() < empB.get_emp_name();

        return empA.get_emp_salary() > empB.get_emp_salary();    
    }
};

struct sortEmployeeSalary{

    bool operator()(Employee empA, Employee empB)
    {
        if(empA.get_emp_salary() != empB.get_emp_salary())
            return empA.get_emp_salary() > empB.get_emp_salary();

        return empA.get_emp_name() < empB.get_emp_name();    
    }
};



// ---------------------------------------------------------------
// ---------------------------------------------------------------

// History struct section:
// ----------------------

struct History{

    private:
        string date;
        string username;
        int id;

    public:
        // Constructor
        History()
        {
            date = "";
            username = "";
            id = 0;
        }

        // Distructor
        ~History(){}
        
        // sets
        void set_hist_date(string histDate) { date = histDate; }
        void set_hist_username(string histUsername) { username = histUsername; }
        void set_hist_id(int histID) { id = histID; }

        // gets
        string get_hist_date() { return date; }
        string get_hist_username() { return username; }
        int get_hist_id() { return id; }
};

// Academy struct section:
// ----------------------

struct Academy
{
    private:

        string name;
        Employee *admin = new Employee();
        vector<Employee> *vEmp = new vector<Employee>;
        vector<History> *vHist = new vector<History>;
        //vector<History> *vHist;
    public:

        // constructor
        Academy()
        {
            name = " Akhbar El-yom Academy ";
            
            admin->set_emp_id(1);
            admin->set_emp_name("Dr. Prof. Ahmed Zaky");
            admin->set_emp_jobTitle("Dean of the University");
            admin->set_emp_jobDesc("Authority over all the University.");
            admin->set_emp_salary(50000.0);
            admin->set_emp_email("ahmed6mohamed6@gmail.com");
            admin->set_emp_username("Ahmed_Zaky");
            admin->set_emp_password("Ahmed@2017");
        }

        // distructor
        ~Academy(){}

        // sets
        
        void set_academy_name(string academyName) { name = academyName; }

        void set_academy_new_emp(Employee newEmp) {vEmp->push_back(newEmp); }
        void set_academy_new_hist(int,string,string);

        // gets

        string get_academy_name() { return name; }

        Employee* get_academy_admin() { return admin; }
        vector<Employee>* get_academy_emp() { return vEmp; }

        Employee* get_academy_one_emp(int);
        vector<Employee>* get_academy_one_emp(string);
        
        vector<History>* get_academy_hist() { return vHist; }
        vector<History>* get_academy_hist(int);
        vector<History>* get_academy_hist_usr(string);
        vector<History>* get_academy_hist_dt(string);
        int get_academy_nrOfEmp() { return vEmp->size(); }

        // prints

        void print_academy_admin();
};

// Academy set History function:
// ----------------------------

void Academy::set_academy_new_hist(int histID,string histUsername ,string histDate)
{
    History *hist = new History();
    hist->set_hist_id(histID);
    hist->set_hist_username(histUsername);
    hist->set_hist_date(histDate);

    
    vHist->emplace_back(*hist);
}


// Academy get employee function:
// ---------------------------------

// get one Employee from Academy by ID
Employee* Academy::get_academy_one_emp(int empID)
{
    vector<Employee>::iterator it;
    if(!vEmp->empty())
    {
        for( it = vEmp->begin(); it != vEmp->end(); it++)
        {
            if(it->get_emp_id() == empID)
                return &*it;
        }
    }
    return nullptr;

}

// get Employees who shares the same name (searching by name - not unique -)
vector<Employee>* Academy::get_academy_one_emp(string empName)
{
    vector<Employee> *tmpEmp = new vector<Employee>;

    vector<Employee>::iterator it;
    if(!vEmp->empty())
    {
        for( it = vEmp->begin(); it != vEmp->end(); it++)
        {
            if(it->get_emp_name() == empName)
                tmpEmp->push_back(*it);
        }
        return tmpEmp;
    }
    return nullptr;
}

// get academy history by ID
vector<History>* Academy::get_academy_hist(int histID)
{
    vector<History> *tmpHist = new vector<History>;

    vector<History>::iterator it;
    if(!vHist->empty())
    {
        for( it = vHist->begin(); it != vHist->end(); it++)
        {
            if(it->get_hist_id() == histID)
                tmpHist->emplace_back(*it);
        }
        return tmpHist;
    }
    return nullptr;
}

// get academy history by username
vector<History>* Academy::get_academy_hist_usr(string histUsername) 
{
    vector<History> *tmpHist = new vector<History>;

    vector<History>::iterator it;
    if(!vHist->empty())
    {
        for( it = vHist->begin(); it != vHist->end(); it++)
        {
            if(it->get_hist_username() == histUsername)
                tmpHist->emplace_back(*it);
        }
        return tmpHist;

    }
    return nullptr;
}

// get academy history by date
vector<History>* Academy::get_academy_hist_dt(string histDate)
{
    vector<History> *tmpHist = new vector<History>;

    vector<History>::iterator it;
    if(!vHist->empty())
    {
        for( it = vHist->begin(); it != vHist->end(); it++)
        {
            if(it->get_hist_date() == histDate)
                tmpHist->emplace_back(*it);
        }
        return tmpHist;
    }
    return nullptr;

}




// Academy admin print Function:
// ----------------------------

void Academy::print_academy_admin()
{
    admin->print_emp_username();
    admin->print_emp();
}


// ---------------------------------------------------------------
// ---------------------------------------------------------------

// my main project functions:
// -------------------------
void myAcademy();
bool fis_empty(ifstream&);
void getAcademy();
void setAcademy();
bool isEqual(string, string);
Employee* findAdmin(string, string);
Employee* findEmployee(string, string);
Employee* findEmployee(string);
Employee* findEmployee(int);
Staff* findStaff(string, string);
Staff* findStaff(string);
Staff* findStaff(int);
Student* findStudent(string, string);
Student* findStudent(string);
Student* findStudent(int);
bool checkPassword(string);
void registerOperations();
void split_time(vector<string>&, string, char);
bool checkDate(string);
void admin(Employee*);
void employee(Employee*);
void staff(Staff*);
void student(Student*);

// ---------------------------------------
// ---------------------------------------
int main()
{
    myAcademy();

    return 0;
}
// ---------------------------------------
// ---------------------------------------


// create our academy object globally
Academy AYA = Academy(); // Akhbar El-yom Academy

void myAcademy()
{
    // Declerations:
    // -------------
    int count = 0;          // to limit login with password attempts
    int RegLogOption = 0;   // choose Login or Register
    string username;        // enter username
    string password;        // enter password
    bool check = true;      // used for checking input validation

    Employee *admin = new Employee(); // to allocate admin here if found
    Employee *emp = new Employee();   // to allocate employee here if found
    Staff *stff = new Staff();        // to allocate staff here if found
    Student *std = new Student();     // to allocate Student here if found
    
    static bool getAcademyCheck = true;

    if(getAcademyCheck)
    {
        // get Academy from file
        getAcademy();
        getAcademyCheck = false;
    }

    // Project layout (Master Page):
    // ---------------------------
    cout<<"\n\n\t\t\t *** Welcome into Akhbar El-yom Acamdey ***\n\n\n";
    
    do{
        // initialize our checker
        check = true;

        cout<<"\n\t1.Login\t\t2.Register.\t\t3.Close.\n\n"
            <<"\n\t- Plz enter Your Choice Nr.: ";
        cin>>RegLogOption;

        // Input validation
        if(cin.fail() || (RegLogOption < 1 && RegLogOption > 3) )
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout<<"\n\n\t\t\t !!! You entered unvalid value, Plz enter a new value again. !!!\n";
            check = false;
        }
    }while(!check);

    // Login
    if(RegLogOption == Login)
    {
       do{
            // initialize our checker
            check = true;
            
            // Enter Username
            cout<<"\n\tUsername: "; cin>>username;

            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout<<"\n\t\t\t!!! You entered unvalid username, Plz enter your values again !!!";
                check = false;
            }

            // Enter  Password
            cout<<"\n\tPassword: "; cin>>password;

            //Input Validation
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout<<"\n\t\t\t!!! You entered unvalid password, Plz enter your values again !!!";
                check = false;
            }

        
            // find our User and set his Authority 

            // find Admin
            admin = findAdmin(username, password);
            
            // find Employee
            if(!admin) 
                emp = findEmployee(username, password);

            // find Staff
            if(!admin && !emp)
                stff = findStaff(username, password);

            // find Student
            if(!admin && !emp && !stff)
                std = findStudent(username, password);
            
            

            // flag error message: not found, entered wrong or not registered yet
            if( !admin && !emp && !stff && !std )
            {
                cout<<"\n\n\t\t\t!!! You may be entered a wrong Username or Password !!!"
                <<"\n\n\t\t\t!!! Or you have not registerd yet !!!"
                <<"\n\n\t- Plz try again.";
                check = false;
                count++;
                if(count == 3)
                {
                   cout<<"\n\n\t\t\t!!! you reached your limit attempts. Plz try later again !!!\n";
                   check = true;
                }
            }    
        }while(!check);
        

        // faculty operations with user Authority type
        if(admin)
            ::admin(admin); // we added :: scope resolution operator to separate the 2 names admin function and admin local object 
        else
        {
            if(emp)
                employee(emp);
            else
            {
                if(stff)
                    staff(stff);
                else
                {
                    if(std)
                        student(std);
                }
            }
        }
    
    }
    
    if(RegLogOption == 2) // Register
        registerOperations();

    // set Academy Data to file
    setAcademy();
    exit(0);
}

bool fis_empty(ifstream& pFile) // file is empty
{
    return pFile.peek() == ifstream::traits_type::eof();
}


void getAcademy()
{
    // get the Academy object from its file
    ifstream fileAcademy("DB/Academy.txt");
    if(fileAcademy.is_open())
    {
         if(!fis_empty(fileAcademy))
         {
            //Academy getAcademy;
            fileAcademy.read((char*) &AYA, sizeof(AYA) );
            fileAcademy.close();
        }
         else
            cout<<"\n\n\t\t\t!!! Empty file !!!\n";
    }else cout<<"\n\n\t\t\t!!! Unable to open Academy file. !!!\n";
}

void setAcademy()
{
    // setting the Academy object to its file
    ofstream fileAcademy("DB/Academy.txt", ios::out|ios::trunc);
    if(fileAcademy.is_open())
    {
        fileAcademy.write((char*) &AYA, sizeof(AYA));
        fileAcademy.close(); 
    }else  cout<<"\n\n\t\t\t!!! Unable to open the file. !!!\n";
}

// to know if 2 strings are equals or not return true for yes and false for no
bool isEqual(string str1, string str2)
{
    if( str1.size() != str2.size())
        return false;
    
    for(int i = 0; i < str1.size(); i++)
    {
        if(str1[i] != str2[i])
            return false;
    }
    return true;
}

// Find Functions:
// --------------

Employee* findAdmin(string usr, string pwd)
{
    // is admin ?
    if(isEqual(AYA.get_academy_admin()->get_emp_username(), usr))
    {
        
        if(isEqual(AYA.get_academy_admin()->get_emp_password(), pwd))
            return AYA.get_academy_admin();
    }
    return nullptr;
}


// Employee: 
// --------

// find by username and password
Employee* findEmployee(string usr, string pwd)
{
    // is employee ?
    
    vector<Employee> *vEmp = new vector<Employee>;
    vEmp = AYA.get_academy_emp();

    vector<Employee>::iterator it;
    if(!vEmp->empty())
    {
        for( it = vEmp->begin(); it != vEmp->end(); it++)
        {
            if(it->get_emp_username() == usr && it->get_emp_password() == pwd)
                return &*it;
        }
    }
    return nullptr;

}

// find by username
Employee* findEmployee(string usr)
{
    // is employee ?
    
    vector<Employee> *vEmp = new vector<Employee>;
    vEmp = AYA.get_academy_emp();

    vector<Employee>::iterator it;
    if(!vEmp->empty())
    {
        for( it = vEmp->begin(); it != vEmp->end(); it++)
        {
            if(it->get_emp_username() == usr)
                return &*it;
        }
    }
    return nullptr;

}

// find by regCode
Employee* findEmployee(int regCode)
{
    // is employee ?
    
    vector<Employee> *vEmp = new vector<Employee>;
    vEmp = AYA.get_academy_emp();

    vector<Employee>::iterator it;
    if(!vEmp->empty())
    {
        for( it = vEmp->begin(); it != vEmp->end(); it++)
        {
            if(it->get_emp_regCode() == regCode)
                return &*it;
        }
    }
    return nullptr;
}


// Staff:
// -----

// find by username and password
Staff* findStaff(string usr, string pwd)
{
    // is Staff ?

    // get Faculties from Employee admin
    vector<Faculty> *vFacStff = new vector<Faculty>;
    vFacStff = AYA.get_academy_admin()->get_emp_Fac();

    // create iterator for Faculties
    vector<Faculty>::iterator it_fac;
    if(!vFacStff->empty())
    {
        for( it_fac = vFacStff->begin(); it_fac != vFacStff->end(); it_fac++)
        {
            // get Staff members from each Faculty
            vector<Staff> *vStff = new vector<Staff>;
            vStff = it_fac->get_stff_in_fac();
            
            // create iterator for Staff
            vector<Staff>::iterator it_stff;
            if(!vStff->empty())
            {
                for( it_stff = vStff->begin(); it_stff != vStff->end(); it_stff++)
                {
                    if(it_stff->get_stff_username() == usr && it_stff->get_stff_password() == pwd)
                        return &*it_stff;
                }
            }
        }
    }
    return nullptr;
}

// find by username
Staff* findStaff(string usr)
{
    // is Staff ?

    // get Faculties from Employee admin
    vector<Faculty> *vFacStff = new vector<Faculty>;
    vFacStff = AYA.get_academy_admin()->get_emp_Fac();

    // create iterator for Faculties
    vector<Faculty>::iterator it_fac;
    if(!vFacStff->empty())
    {
        for( it_fac = vFacStff->begin(); it_fac != vFacStff->end(); it_fac++)
        {
            // get Staff members from each Faculty
            vector<Staff> *vStff = new vector<Staff>;
            vStff = it_fac->get_stff_in_fac();
            
            // create iterator for Staff
            vector<Staff>::iterator it_stff;
            if(!vStff->empty())
            {
                for( it_stff = vStff->begin(); it_stff != vStff->end(); it_stff++)
                {
                    if(it_stff->get_stff_username() == usr)
                        return &*it_stff;
                }
            }
        }
    }
    return nullptr;
}

// find by regCode
Staff* findStaff(int regCode)
{
    // is Staff ?

    // get Faculties from Employee admin
    vector<Faculty> *vFacStff = new vector<Faculty>;
    vFacStff = AYA.get_academy_admin()->get_emp_Fac();

    // create iterator for Faculties
    vector<Faculty>::iterator it_fac;
    if(!vFacStff->empty())
    {
        for( it_fac = vFacStff->begin(); it_fac != vFacStff->end(); it_fac++)
        {
            // get Staff members from each Faculty
            vector<Staff> *vStff = new vector<Staff>;
            vStff = it_fac->get_stff_in_fac();
            
            // create iterator for Staff
            vector<Staff>::iterator it_stff;
            if(!vStff->empty())
            {
                for( it_stff = vStff->begin(); it_stff != vStff->end(); it_stff++)
                {
                    if(it_stff->get_stff_regCode() == regCode)
                        return &*it_stff;
                }
            }
        }
    }
    return nullptr;
}

// Student:
// -------


// find by username and password
Student* findStudent(string usr, string pwd)
{
    // is Student ? Note:(consider to make better implementation for the project because searching now will be slower than normal)
    
    // get Faculties from admin Employee
    vector<Faculty> *vFacStd = new vector<Faculty>;
    vFacStd = AYA.get_academy_admin()->get_emp_Fac();

    // create iterator for Faculties
    vector<Faculty>::iterator it_fac;
    if(!vFacStd->empty())
    {
        for( it_fac = vFacStd->begin(); it_fac != vFacStd->end(); it_fac++)
        {
            // get Departments of each Faculty
            vector<Department> *vDepStd = new vector<Department>;
            vDepStd = it_fac->get_dep_in_fac();

            // create iterator for Departments of each Faculty
            vector<Department>::iterator it_dep;
            if(!vDepStd->empty())
            {
                for( it_dep = vDepStd->begin(); it_dep != vDepStd->end(); it_dep++)
                {
                    // get Students of each Department 
                    vector<Student> *vStd = new vector<Student>;
                    vStd = it_dep->get_dep_students();

                    // create iterator for Students of each Department
                    vector<Student>::iterator it_std;
                    if(!vStd->empty())
                    {
                        for( it_std = vStd->begin(); it_std != vStd->end(); it_std++)
                        {
                            if(it_std->get_std_username() == usr && it_std->get_std_password() == pwd)
                                return &*it_std;
                        }
                    }
                }
            }
        }
    } 
    return nullptr;
}

// find by username
Student* findStudent(string usr)
{
    // is Student ? Note:(consider to make better implementation for the project because searching now will be slower than normal)
    
    // get Faculties from admin Employee
    vector<Faculty> *vFacStd = new vector<Faculty>;
    vFacStd = AYA.get_academy_admin()->get_emp_Fac();

    // create iterator for Faculties
    vector<Faculty>::iterator it_fac;
    if(!vFacStd->empty())
    {
        for( it_fac = vFacStd->begin(); it_fac != vFacStd->end(); it_fac++)
        {
            // get Departments of each Faculty
            vector<Department> *vDepStd = new vector<Department>;
            vDepStd = it_fac->get_dep_in_fac();

            // create iterator for Departments of each Faculty
            vector<Department>::iterator it_dep;
            if(!vDepStd->empty())
            {
                for( it_dep = vDepStd->begin(); it_dep != vDepStd->end(); it_dep++)
                {
                    // get Students of each Department 
                    vector<Student> *vStd = new vector<Student>;
                    vStd = it_dep->get_dep_students();

                    // create iterator for Students of each Department
                    vector<Student>::iterator it_std;
                    if(!vStd->empty())
                    {
                        for( it_std = vStd->begin(); it_std != vStd->end(); it_std++)
                        {
                            if(it_std->get_std_username() == usr)
                                return &*it_std;
                        }
                    }
                }
            }
        }
    } 
    return nullptr;
}

// find by regCode
Student* findStudent(int regCode)
{
    // is Student ? Note:(consider to make better implementation for the project because searching now will be slower than normal)
    
    // get Faculties from admin Employee
    vector<Faculty> *vFacStd = new vector<Faculty>;
    vFacStd = AYA.get_academy_admin()->get_emp_Fac();

    // create iterator for Faculties
    vector<Faculty>::iterator it_fac;
    if(!vFacStd->empty())
    {
        for( it_fac = vFacStd->begin(); it_fac != vFacStd->end(); it_fac++)
        {
            // get Departments of each Faculty
            vector<Department> *vDepStd = new vector<Department>;
            vDepStd = it_fac->get_dep_in_fac();

            // create iterator for Departments of each Faculty
            vector<Department>::iterator it_dep;
            if(!vDepStd->empty())
            {
                for( it_dep = vDepStd->begin(); it_dep != vDepStd->end(); it_dep++)
                {
                    // get Students of each Department 
                    vector<Student> *vStd = new vector<Student>;
                    vStd = it_dep->get_dep_students();

                    // create iterator for Students of each Department
                    vector<Student>::iterator it_std;
                    if(!vStd->empty())
                    {
                        for( it_std = vStd->begin(); it_std != vStd->end(); it_std++)
                        {
                            if(it_std->get_std_regCode() == regCode)
                                return &*it_std;
                        }
                    }
                }
            }
        }
    } 
    return nullptr;
}

bool checkPassword(string pwd)
{
    // check Password criteria
    // check the ASCII chart to know what these numbers represent
    // see here: https://en.cppreference.com/w/cpp/language/ascii

    // 1.check 8 letters min
    if(pwd.length() < 8)
        return false;

    // 2. check lower caser
    for(int i = 0; i < pwd.length(); i++)
    {
        if(int(int(pwd[i])) < 123 && int(pwd[i]) > 96)
            break;

        if(i == (pwd.length()-1))
            return false;
    }

    // 3. check UPPER CASE
    for(int i = 0; i < pwd.length(); i++)
    {
        if(int(int(pwd[i])) < 91 && int(pwd[i]) > 64)
            break;

        if(i == (pwd.length()-1))
            return false;
    }

    // 4. check Digits
    for(int i = 0; i < pwd.length(); i++)
    {
        if(int(int(pwd[i])) < 58 && int(pwd[i]) > 47)
            break;

        if(i == (pwd.length()-1))
            return false;
    }

    // 5. check Symbols
    for(int i = 0; i < pwd.length(); i++)
    {
        if(int(int(pwd[i])) < 48 && int(pwd[i]) > 31)
            break;

        if(int(int(pwd[i])) < 65 && int(pwd[i]) > 57)
            break;

        if(int(int(pwd[i])) < 97 && int(pwd[i]) > 90)
            break;

        if(int(int(pwd[i])) < 127 && int(pwd[i]) > 122)
            break;


        if(i == (pwd.length()-1))
            return false;
    }
    return true;
}

void registerOperations()
{
    // Declerations:
    int regCode;
    string username;
    string password1;
    string password2;

    bool check;

    Employee *emp = new Employee();
    Staff *stff = new Staff();
    Student *std = new Student();

    cout<<"\n\n\t\t\t*** Registration as new member ***\n\n";
    do{
        check = true;

        cout<<"\n\tFist Plz Enter your Registration Code: ";
        cin>>regCode;

        if(cin.fail())
        {
            cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
            cin.clear();
            cin.ignore(10000,'\n');
            check = false;
        }
        else
        {
            // check thre regCode if its a student or staff or employee
            if(regCode < 2000000 && regCode > 1000000)
                std = findStudent(regCode);
            else
            {
                if(regCode < 3000000 && regCode > 2000000)
                    stff = findStaff(regCode);
                else
                {
                    if(regCode < 4000000 && regCode > 30000000)
                        emp = findEmployee(regCode);
                    else
                    {
                        char option;
                        // here the Reg Code was not found and we try to do it again 
                        do
                        {
                            bool check = true;

                            cout<<"\n\n\t\t\t!!! Your Registration Code was not found, may be its wrong Plz try again or check with the Campus office. !!!\n";
                            check = false;
                            cout<<"\n\n\t- Do you wanna try again? \n"
                                <<"\n\t- 'y' for yes. \t- 'n' for no.";
                            cin>>option;
                            
                            // input validation
                            if(cin.fail() || option != 'n' && option != 'N' && option != 'y' && option != 'Y')
                            {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout<<"\n\n\t\t\t!!! You entered unvalid value, Plz enter again. !!!\n";
                                check = false;
                            }

                        }while(!check);

                        if(option == 'y' || option == 'Y')
                            check = false;
                        else
                            myAcademy();
                        
                        
                    }
                }
            }
        }
    }while(!check);

    if(std || stff || emp)
    {
        // check username:
        // --------------

        do{
            check = true;
        
            cout<<"\n\n\t- Notes:\n\t- username will only be accepted if its unique.\n"
                <<"\n- password should contain of: \n(8 letters min, Upper- and Lowercase, numbers, Symbols like[@,#,...].)\n"
                <<"\n\n\t- Enter Your username: ";
            cin>>username;

            if(cin.fail())
            {
                cin.clear();
                cin.ignore(10000,'\n');
                check = false;
                cout<<"\n\n\t\t\t!!! You Entered unvalid value, plz try again. !!!\n";
            }
        

            // initializing our objects
            std = nullptr; stff = nullptr; emp = nullptr;

            // finding if there is a username like user entered username
            std = findStudent(username);
            stff = findStaff(username);
            emp = findEmployee(username);

            if(std || stff || emp)
            {
                cout<<"\n\n\t\t\t!!! The username you entered is already there !!!\n"
                    <<"\n\t- if you forgot your username or password, Plz check it with Campus Office\n"
                    <<"\n\t- if its first time then, Plz try a nother username.\n"
                    <<"\n\t- Thanks !\n";
                check = false;
            }
        }while(!check);

        // check Password:
        // --------------

        do
        {
            check = true;
            cout<<"\n\t- Enter your Password: ";
            cin>>password1;

            if(cin.fail())
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout<<"\n\n\t\t\t!!! You entered unvalid value, Plz enter again !!!\n";
                check = false;
            }

            if(!checkPassword(password1))
            {
                cout<<"\n\n\t\t\t!!! Your Password does not follow the rules, plz enter a valid Password. !!!\n";
                check = false;
            }else
            {
                do
                {
                    bool check = true;

                    cout<<"\n\t- Repeat your Password: ";
                    cin>>password2;

                    if(cin.fail())
                    {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again !!!\n";
                        check = false;
                    }   
                }while(!check);

                if( password1 != password2)
                {
                    cout<<"\n\n\t\t\t!!! They do not match, Plz enter the Password again !!!\n";
                    check = false;
                }
            }
        }while(!check);    

        // set username and password
        if(std)
        {
            std->set_std_username(username);
            std->set_std_password(password1);
            student(std);
        }

        if(stff)
        {
            stff->set_stff_username(username);
            stff->set_stff_password(password1);
            staff(stff);
        }

        if(emp)
        {
            emp->set_emp_username(username);
            emp->set_emp_password(password1);
            employee(emp);
        }
    }
    // return back to login page
    myAcademy();
}

void student(Student* std)
{
    // As we implemented before that what comes here will not be an empty object so we do not have to check it.
    // Decleration
    int count = 0;   // to limit old password entering attempts
    string username;
    string password;
            
    int option;      // get the student option of change his username or password
    char chOption;   // get the student option of going out or staying here more 
    bool check;
    Student *locStd = new Student();    // helps us with comparison

    // get Current time
    time_t now = time(0);
    
    // New Login history
    AYA.set_academy_new_hist(std->get_std_id(), std->get_std_username(),ctime(&now));

    do
    {
        check = true;

        // print Student username
        std->print_student_Username();

        // print Student Information
        std->print_student();

        do{
            
            check = true;

            // let Student adjust his username and password
            cout<<"\n\n\t- "<<std->get_std_username()<<" You can Change:\n"
                <<"\n\n\t1- Change Username.\t2- Change Password.\n\n"
                <<"\to-------------------------------o"
                <<"\n\t- Plz enter Your Number choice: ";
            cin>>option;
            
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                check = false;
            }
            
            if(option > 2 || option < 1)
            {
                cout<<"\n\n\t\t\t!!! You entered out ranged number, Plz enter 1 or 2. !!!\n";
                check = false;
            }
            
        }while(!check);

        
        // change username
        if(option == 1)
        {
            // set the new username
            do
            {
                check = true;

                cout<<"\n\n\t- Plz enter your new Username: ";
                cin>>username;

                // input validation
                if(cin.fail())
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                    check = false;
                }
                
                // find the new username in our Academy
                locStd = findStudent(username);
                
                if(locStd)
                {
                    if(std->get_std_username() == locStd->get_std_username())
                    {
                        cout<<"\n\n\t- The new username was same as your old username.\n"
                            <<"\n\t- however we Changed your username successfully.\n";
                    }
                    else
                    {
                        cout<<"\n\t- The username you entered is used by another user, plz enter a new one.\n";
                        check = false;
                    }
                }
                else
                {
                    std->set_std_username(username);
                    cout<<"\n\n\t- We changed your Username Successfully.\n";
                }
            }while(!check);
        }else   // change password
        {
            string password2;

            // get the old password
            do{
                check = true;

                cout<<"\n\n\t- Plz enter your old Password: ";
                cin>>password;

                // input validation
                if(cin.fail())
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                    check = false;
                }

                // check old password
                if(std->get_std_password() != password)
                {
                    cout<<"\n\n\t\t\t!!! Wrong Password, Plz try again. !!!\n";
                    check = false;
                    count++;
                }else
                    check = true;
                
                
                if(count == 3)
                {
                    cout<<"\n\n\t\t\t!!! You reached your limit attempts, Plz try again later. !!!\n";
                    check = true;
                }

            }while(!check);

            // set the new password
            do{
                check = true;
                
                // input your new password 
                cout<<"\n\n\t- Now plz enter your new Password: ";
                cin>>password;

                if(!checkPassword(password))
                {
                    cout<<"\n\n\t\t\t!!! Your Password does not follow the rules, plz enter a valid Password. !!!\n";
                    check = false;
                }else
                {
                    cout<<"\n\n\t- Repeat your new Password: ";
                    cin>>password2;

                    // input validation
                    if(cin.fail())
                    {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                        check = false;
                    }
                    else
                    {
                        if(password != password2)
                        {
                            cout<<"\n\n\t\t\t!!! Repeated Password do not match with the new password, Plz enter again. !!!\n";
                            check = false;
                        }
                        else
                        {
                            std->set_std_password(password);
                            cout<<"\n\n\t- You changed your password successfully. \n";
                        }
                    }    
                }
                
            }while(!check);
        }

        // check user go out
        do{
            check = true;
            // check go out or stay more
            cout<<"\n\n\t- Do you wanna go out? \n"
                <<"\n\t- 'y' for yes and  'n' for no.\n"
                <<"\n\n\t- Your option is: ";
            cin>>chOption;

            // input validation
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout<<"\n\n\t\t\t!!! You entered unvalid value, Plz enter again. !!!\n";
                check = false;
            }

            if(chOption != 'y' && chOption != 'Y' && chOption != 'n' && chOption != 'N')
            {
                cout<<"\n\n\t\t\t!!! Plz enter only 'y' or 'n' letters !!!\n";
                check = false;
            }

        }while(!check);

        if(chOption == 'y' || chOption == 'Y')
            check = false;

    }while(check);
}

void staff(Staff* stff)
{
    // As we implemented before that what comes here will not be an empty object so we do not have to check it.
    // Decleration
    int count = 0;   // to limit old password entering attempts
    string username;
    string password;
    
    int ID = 0;         // ID and name helps us with searching one Student out
    string name = " ";
    double ClassWorkMarks = 0.0; // we need those two variables to help us get and set Student Marks
    double FinalGrade = 0.0;

    int option;      // get the Staff option of change his username or password
    char chOption;   // get the Staff option of going out or staying here more 
    bool check;
    
    Staff *locStff = new Staff();                   // helps us with comparison
    Course *crs = new Course();                     // helps us with searching Courses for Staff
    Employee *emp = new Employee();                 // helps us to get the department for statistics purposes
    Faculty *fac = new Faculty();                   // helps us to get our department for statistics purposes
    Department *dep = new Department();             // helps us to get statistics
    Student *std = new Student();                   // helps us to get one student of one course when search by ID
    vector<Student> *vStd = new vector<Student>;    // helps us to get more than one student of one course when search by name
    Course *tmpCrs = new Course();                  // helps us to get one course of one student

    // get the department to help us get our wanted statistics down in the function
    emp = AYA.get_academy_admin();
    fac = emp->get_emp_oneFac(stff->get_stff_faculty());   
    dep = fac->get_one_dep_in_fac(stff->get_stff_department());


    // get Current time
    time_t now = time(0);
    
    // New Login history
    AYA.set_academy_new_hist(stff->get_stff_id(), stff->get_stff_username(),ctime(&now));


    // Section #1 (Staff info and options):
    // -----------------------------------

    // goto label
    Section1:

    check = true;

    // print Staff username
    stff->print_stff_username();

    // print Staff Information
    stff->print_stff();

    

    do{

        cout<<"\n\n\t1- get into your Courses "<<stff->get_stff_degree()<<" "<<stff->get_stff_name()<<" .\n"
            <<"\n\t2- Change Username or Password.\n"
            <<"\n\t3- logout.\n"
            <<"\n\n\t- Your Choice Nr# is: ";
        cin>>option;

        // input validation
        if(cin.fail() || option > 3 || option < 1)
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout<<"\n\n\t\t\t!!! You entered unvalid value, Plz enter again !!!\n";
            check = false;
        }
    }while(!check);

    // logout
    if(option == 3)
        myAcademy();
    else
    {
        // change username or password
        if(option == 2)
        {
            do{
        
                check = true;

                // let Student adjust his username and password
                cout<<"\n\n\t- "<<stff->get_stff_username()<<"You can Change:\n"
                    <<"\n\n\t1- Change Username.\t2- Change Password.\n\n"
                    <<"\to-------------------------------o"
                    <<"\n\t- Plz enter Your Number choice: ";
                cin>>option;
                
                if(cin.fail() || option > 2 || option < 1)
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                    check = false;
                }
            }while(!check);

            
            // change username
            if(option == 1)
            {
                // set the new username
                do
                {
                    check = true;

                    cout<<"\n\n\t- Plz enter your new Username: ";
                    cin>>username;

                    // input validation
                    if(cin.fail())
                    {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                        check = false;
                    }
                    
                    // find the new username in our Academy
                    locStff = findStaff(username);
                    
                    if(locStff)
                    {
                        // if the username is same as before
                        if(stff->get_stff_username() == locStff->get_stff_username())
                        {
                            cout<<"\n\n\t- The new username was same as your old username.\n"
                                <<"\n\t- however we Changed your username successfully.\n";
                        }
                        else    // if the username is been used by another person
                        {
                            cout<<"\n\t- The username you entered is used by another user, plz enter a new one again.\n";
                            check = false;
                        }
                    }
                    else
                    {
                        stff->set_stff_username(username);
                        cout<<"\n\n\t- We changed your Username Successfully.\n";
                    }
                }while(!check);

            }else   // change password
            {
                string password2;

                // get the old password
                do{
                    check = true;

                    cout<<"\n\n\t- Plz enter your old Password: ";
                    cin>>password;

                    // input validation
                    if(cin.fail())
                    {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                        check = false;
                    }

                    // check old password
                    if(stff->get_stff_password() != password)
                    {
                        cout<<"\n\n\t\t\t!!! Wrong Password, Plz try again. !!!\n";
                        check = false;
                        count++;
                    }else
                        check = true;
                    
                    
                    if(count == 3)
                    {
                        cout<<"\n\n\t\t\t!!! You reached your limit attempts, Plz try again later. !!!\n";
                        myAcademy();
                    }

                }while(!check);

                // set the new password
                do{
                    check = true;
                    
                    // input your new password 
                    cout<<"\n\n\t- Now plz enter your new Password: ";
                    cin>>password;

                    if(!checkPassword(password))
                    {
                        cout<<"\n\n\t\t\t!!! Your Password does not follow the rules, plz enter a valid Password. !!!\n";
                        check = false;
                    }
                    else
                    {
                        cout<<"\n\n\t- Repeat your new Password: ";
                        cin>>password2;

                        // input validation
                        if(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                            check = false;
                        }
                        else
                        {
                            if(password != password2)
                            {
                                cout<<"\n\n\t\t\t!!! Repeated Password does not match the new password, Plz enter again. !!!\n";
                                check = false;
                            }
                            else
                            {
                                stff->set_stff_password(password);
                                cout<<"\n\n\t- You changed your password successfully. \n";
                            }
                        }    
                    }
                    
                }while(!check);
            }
            // goto Section 1 after changing username or password
            goto Section1;

        } // get into Courses
        else
        {
            // Section #2 (Staff Courses and options):
            // -----------------------------------

            // goto label
            Section2:

            cout<<"\n\n\t- "<<stff->get_stff_degree()<<" "<<stff->get_stff_name()<<" Here are The Courses you Teach: \n";
            
            // get Courses from Staff
            vector<Course> *locCrs = new vector<Course>;
            locCrs = stff->get_stff_Courses();

            int count = 0;
            vector<string> crsName; // to help us getting the Course after the Staff selection
            vector<Course>::iterator it;
            if(!locCrs->empty())
            {
                for( it = locCrs->begin(); it != locCrs->end(); it++)
                {
                    cout<<"\n\t-Course #"<<++count<<" "<<it->get_crs_name()<<".\n";
                    crsName.push_back(it->get_crs_name());
                }
            }
            else
            {
                cout<<"\n\n\t- Sorry but you have no Courses assigned to your Portal yet.\n";
                goto Section1;
            }
            
            do{
                check = true;
                
                cout<<"\n\t1- Pick a Course using its number. \n"
                    <<"\n\t2- go back\n"
                    <<"\n\n\t- Your Choice Nr# is: ";
                cin>>option;

                // input validation
                if(cin.fail() || option > 2 || option < 1)
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                    check = false;
                }else
                {
                    if(option == 2)
                        goto Section1;
                    else
                    {
                        do{
                            
                            check = true;

                            cout<<"\n\n\t- Enter your Course Nr. plz:";
                            cin>>option;

                            // input validation
                            if(cin.fail() || option > count || option < 1)
                            {
                                cin.clear();
                                cin.ignore(10000,'\n');
                                cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                                check = false;
                            }else // get the wanted Course again
                                crs = stff->get_stff_one_Course(crsName[option-1]);

                        }while(!check);
                    }
                }
            }while(!check);
            
            // Section #3 (Staff Selected Course and options):
            // -----------------------------------

            // goto label
            Section3:

            do{
                check = true;

                cout<<"\n\n\t- Course Name: "<<crs->get_crs_name()<<'\n'
                    <<"\n\t- Course Description: "<<crs->get_crs_desc()<<'\n'
                    <<"\n\n\t- Your Options are: \n"
                    <<"\n\n\t1- Students.\n"
                    <<"\n\t2- Attendance.\n"
                    <<"\n\t3- Statistics.\n"
                    <<"\n\t4- go back.\n"
                    <<"\n\t5- log out.\n"
                    <<"\n\n\t- Your Choice Nr# is: ";
                cin>>option;

                // input validation
                if(cin.fail() || option > 5 || option < 1)
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                    check = false;
                }

            }while(!check);

            // logout 
            if(option == 5)
                myAcademy();
            else
            {
                // go back
                if(option == 4)
                    goto Section1;
                else
                {
                    // Statistics
                    if(option == 3)
                    {
                        do
                        {
                            check = true;

                            // get Statistics for Students related to this Course
                            cout<<"\n\n\t- Course Students Statistics: \n"
                                <<"\n\n\t- Your Options are: \n"
                                <<"\n\t1- Nr. of Students.\n"
                                <<"\n\t2- Nr. of Success Students.\n"
                                <<"\n\t3- Success Ratio.\n"
                                <<"\n\t4- go back.\n"
                                <<"\n\t5- logout.\n"
                                <<"\n\n\t- Your Choice Nr# is: ";
                            cin>>option;

                            // input validation
                            if(cin.fail() || option > 5 || option < 1)
                            {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                                check = false;
                            }

                        }while(!check);

                        if(option == 5)
                            myAcademy();
                        else{
                            if(option == 4)
                                goto Section3;
                            else{
                                if(option == 3)
                                {
                                    cout<<"\n\t- Success Ratio of Course "<<crs->get_crs_name()<<": "
                                        <<dep->get_dep_successRatio_one_Course(crs);
                                }
                                else
                                {
                                    if(option == 2)
                                    {
                                        cout<<"\n\t- Nr. of Success Students in Course "<<crs->get_crs_name()<<": "
                                            <<dep->get_dep_NrOfsuccessStd_one_Course(crs);
                                    }
                                    else
                                    {
                                        cout<<"\n\t- Nr. of Students in "<<crs->get_crs_name()<<": "
                                            <<dep->get_dep_NrOfStd_one_Course(crs);
                                    }
                                }
                            }
                        }

                    }
                    else
                    {   // Attendance
                        if(option == 2)
                        {
                            // Section #4 (Staff Attendance Course and options):
                            // -----------------------------------

                            // goto label
                            Section4:
                            
                            do{
                                check = true;

                                cout<<"\n\n\t- Course "<<crs->get_crs_name()<<" Attendance: "
                                    <<"\n\n\t- Attendance Options: \n"
                                    <<"\n\n\t1- "<<stff->get_stff_degree()<<" "<<stff->get_stff_name()<<"Attendance: \n"
                                    <<"\n\n\t- Student Options: \n"
                                    <<"\n\n\t2- Students Attendance.\n"
                                    <<"\n\t3- Student Attendance by name.\n"
                                    <<"\n\t4- Student Attendance by ID.\n"
                                    <<"\n\t5- go backk.\n"
                                    <<"\n\t6- logout.\n"
                                    <<"\n\n\t- Your option Nr. is: ";
                                cin>>option;

                                // input validation
                                if(cin.fail() || option > 6 || option < 1)
                                {
                                    cin.clear();
                                    cin.ignore(10000, '\n');
                                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                                    check = false;
                                }

                            }while(!check);

                            // logout
                            if(option == 6)
                                myAcademy();
                            else
                            {
                                // go back
                                if(option == 5)
                                    goto Section3;
                                else
                                {
                                    // Student Attendance by ID
                                    if(option == 4)
                                    {
                                        // Section #5 (Student attendance by ID for a Course):
                                        // -----------------------------------

                                        // goto label
                                        Section5: // --> may be not needed <--
                                        
                                        do{
                                            check = true;

                                            cout<<"\n\n\t- Plz enter Student ID:";
                                            cin>>ID;

                                            if(cin.fail())
                                            {
                                                cin.clear();
                                                cin.ignore(10000, '\n');
                                                cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                check = false;
                                            }
                                            else
                                            {
                                                // get Student and his Course both by ID
                                                std = dep->get_dep_student_oneCrs(crs, ID);
                                                
                                                if(std)
                                                {
                                                    // get Course if there is student with that ID
                                                    tmpCrs = std->get_std_one_Course(crs->get_crs_id());

                                                    do{
                                                        check = true;
                                                        
                                                        cout<<"\n\n\t-Student "<<std->get_std_name()<<" Attencance: \n"
                                                            <<"\n\n\t- 'y' for present.\n\t- 'n' for absent.\n\t- 'b' go back.\n"
                                                            <<"\n\t- Plz enter your choice: ";
                                                        cin>>chOption;
                                                        
                                                        // input validation
                                                        if(cin.fail() || chOption != 'y' && chOption != 'Y' && chOption != 'n' && chOption != 'N' && chOption != 'b' && chOption != 'B')
                                                        {
                                                            cin.clear();
                                                            cin.ignore(10000, '\n');
                                                            cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                                                            check = false;
                                                        }
                                                        else
                                                        {
                                                            if(chOption == 'b' || chOption == 'B')
                                                                goto Section5;
                                                            else
                                                            {
                                                                if(chOption == 'y' || chOption == 'Y')
                                                                {
                                                                    // declare variable to argument for time()
                                                                    time_t t;

                                                                    // Apply time()
                                                                    time(&t);

                                                                    // declare variable to assign localtime return value in it
                                                                    // Forward (incomplete type) struct declaration
                                                                    // see more here: https://en.cppreference.com/w/c/language/struct
                                                                    struct tm *lt;

                                                                    // using local time
                                                                    lt = localtime(&t);

                                                                    // asctime()  to convert struct to string and store it
                                                                    tmpCrs->set_crs_attendance( asctime(lt) ,true); 
                                                                }
                                                                else
                                                                {
                                                                    if(chOption == 'n' || chOption == 'N')
                                                                    {
                                                                        // same as yes 'y' option but store 'false' instead of 'true' to indicate absent of student

                                                                        time_t t;
                                                                        time(&t);
                                                                        struct tm *lt;
                                                                        lt = localtime(&t);
                                                                        tmpCrs->set_crs_attendance(asctime(lt), false);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }while(!check);
                                                }
                                                else // Student not found by ID
                                                {
                                                    do{
                                                        check = true;

                                                        cout<<"\n\n\t\t\t!!! Student was not found with this ID, plz try again. !!!\n"
                                                            <<"\n\t-enter 'b' to go back, or any letter to try a new ID\n";
                                                        cin>>chOption;

                                                        // input validation
                                                        if(cin.fail() || chOption != 'b' && chOption != 'B')
                                                        {
                                                            cin.clear();
                                                            cin.ignore(10000, '\n');
                                                            cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again !!!\n";
                                                            check = false;
                                                        }
                                                        else
                                                        {
                                                            if(chOption == 'b' || chOption == 'B')
                                                                goto Section4;
                                                        }
                                                    }while(!check);
                                                    
                                                    check = false;
                                                }
                                            }
                                        }while(!check);

                                        
                                    }
                                    else
                                    {   
                                        // Student attendance by name
                                        if(option == 3)
                                        {
                                            // Section #6 (Student attendance by ID for a Course):
                                            // -----------------------------------

                                            // goto label
                                            Section6: // --> may be not needed <--
                                            
                                            do{
                                                check = true;

                                                cout<<"\n\n\t- Plz enter Student Name:";
                                                cin>>name;

                                                if(cin.fail())
                                                {
                                                    cin.clear();
                                                    cin.ignore(10000, '\n');
                                                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                    check = false;
                                                }
                                                else
                                                {
                                                    // get Student by Name and his Course by ID
                                                    vStd = dep->get_dep_student_oneCrs(crs, name);
                                                    
                                                    // the name was not found 
                                                    if(vStd->empty())
                                                    {
                                                        do{
                                                            check = true;

                                                            cout<<"\n\n\t\t\t!!! Student was not found with this Name, plz try again. !!!\n"
                                                                <<"\n\t-enter 'b' to go back, or any letter to try a new name\n";
                                                            cin>>chOption;

                                                            // input validation
                                                            if(cin.fail() || chOption != 'b' && chOption != 'B')
                                                            {
                                                                cin.clear();
                                                                cin.ignore(10000, '\n');
                                                                cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again !!!\n";
                                                                check = false;
                                                            }
                                                            else
                                                            {
                                                                if(chOption == 'b' || chOption == 'B')
                                                                    goto Section4;
                                                            }
                                                        }while(!check);

                                                        check = false;
                                                    }
                                                    else // select one student if there were more than one
                                                    {
                                                        if(vStd->size() > 1)
                                                        {
                                                            do
                                                            {
                                                                check = true;

                                                                cout<<"\n\n\t- There are more than one Student with the same name: \n";

                                                                // print out the same name students
                                                                vector<Student>::iterator it;
                                                                for( it = vStd->begin(); it != vStd->end(); it++)
                                                                {
                                                                    cout<<"\n\t- Student ID: "<<it->get_std_id()<<'\n'
                                                                        <<"\n\t- Student Name: "<<it->get_std_name()<<'\n';
                                                                }


                                                                // get one student of the same name students by ID
                                                                cout<<"\n\n\t- Plz select Student from above and enter his ID:";
                                                                cin>>ID;

                                                                // input validation
                                                                if(cin.fail())
                                                                {
                                                                    cin.clear();
                                                                    cin.ignore(10000, '\n');
                                                                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                                    check = false;
                                                                }
                                                                else
                                                                {
                                                                    std = dep->get_dep_student_oneCrs(crs, ID);
                                                                    if(!std)
                                                                    {
                                                                        cout<<"\n\n\t\t\t!!! You entered wrong ID, plz try again. !!!\n";
                                                                        check = false;
                                                                    }
                                                                }

                                                            }while(!check);
                                                        
                                                        }
                                                        else // in case we found one student with that name
                                                            std = &*vStd->begin();
                                                    }

                                                    // get the course of selected student
                                                    tmpCrs = std->get_std_one_Course(crs->get_crs_id());

                                                    do{
                                                        check = true;
                                                        
                                                        cout<<"\n\n\t-Student "<<std->get_std_name()<<" Attencance: \n"
                                                            <<"\n\n\t- 'y' for present.\n\t- 'n' for absent.\n\t- 'b' go back.\n"
                                                            <<"\n\t- Plz enter your choice: ";
                                                        cin>>chOption;
                                                        
                                                        // input validation
                                                        if(cin.fail() || chOption != 'y' && chOption != 'Y' && chOption != 'n' && chOption != 'N' && chOption != 'b' && chOption != 'B')
                                                        {
                                                            cin.clear();
                                                            cin.ignore(10000, '\n');
                                                            cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                                                            check = false;
                                                        }
                                                        else
                                                        {
                                                            if(chOption == 'b' || chOption == 'B')
                                                                goto Section5;
                                                            else
                                                            {
                                                                if(chOption == 'y' || chOption == 'Y')
                                                                {
                                                                    // declare variable to argument for time()
                                                                    time_t t;

                                                                    // Apply time()
                                                                    time(&t);

                                                                    // declare variable to assign localtime return value in it
                                                                    // Forward (incomplete type) struct declaration
                                                                    // see more here: https://en.cppreference.com/w/c/language/struct
                                                                    struct tm *lt;

                                                                    // using local time
                                                                    lt = localtime(&t);

                                                                    // asctime()  to convert struct to string and store it
                                                                    tmpCrs->set_crs_attendance( asctime(lt) ,true); 
                                                                }
                                                                else
                                                                {
                                                                    if(chOption == 'n'|| chOption == 'N')
                                                                    {
                                                                        // same as yes 'y' option but store 'false' instead of 'true' to indicate absent of student

                                                                        time_t t;
                                                                        time(&t);
                                                                        struct tm *lt;
                                                                        lt = localtime(&t);
                                                                        tmpCrs->set_crs_attendance(asctime(lt), false);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }while(!check);
                                                }
                                            }while(!check);

                                        }
                                        else
                                        {
                                            // Students attendance of Staff selected course
                                            if(option == 2)
                                            {
                                                // get students of this Course
                                                vStd = dep->get_dep_students_oneCrs(crs);

                                                if(!vStd)
                                                {
                                                    do{
                                                            check = true;

                                                            cout<<"\n\n\t\t\t!!! No Students Found related to that Course !!!\n"
                                                                <<"\n\t-enter 'b' to go back, or any letter to logout\n";
                                                            cin>>chOption;

                                                            // input validation
                                                            if(cin.fail() || chOption != 'b' && chOption != 'B')
                                                            {
                                                                cin.clear();
                                                                cin.ignore(10000, '\n');
                                                                cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again !!!\n";
                                                                check = false;
                                                            }
                                                            else
                                                            {
                                                                if(chOption == 'b' || chOption == 'B')
                                                                    goto Section4;
                                                                else
                                                                    myAcademy();
                                                            }
                                                        }while(!check);

                                    
                                                }
                                                else
                                                {
                                                    cout<<"\n\n\t- Enter Students Attendance Student by Student:\n";

                                                    // getting student one at a time
                                                    vector<Student>::iterator it;
                                                    for( it = vStd->begin(); it != vStd->end(); it++)
                                                    {
                                                        do{
                                                            check = true;

                                                            cout<<"\n\t- Student ID: "<<it->get_std_id()<<'\n'
                                                                <<"\n\t- Student Name: "<<it->get_std_name()<<'\n'
                                                                <<"\n\n\t- 'y' yes for Present.\t- 'n' no for absent.\n"
                                                                <<"\n\n\t- 'b' to go back\n";
                                                            cin>>chOption;

                                                            // input validation
                                                            if(cin.fail() || chOption != 'n' && chOption != 'N' && chOption != 'y' && chOption != 'Y' && chOption != 'b' && chOption != 'B')
                                                            {
                                                                cin.clear();
                                                                cin.ignore(10000, '\n');
                                                                cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";

                                                                check = false;
                                                            }

                                                        }while(!check);

                                                        if(chOption == 'b' || chOption == 'B')
                                                            goto Section4;
                                                        else
                                                        {
                                                        
                                                            if(chOption == 'y' || chOption == 'Y')
                                                            {
                                                                // declare variable to argument for time()
                                                                time_t t;

                                                                // Apply time()
                                                                time(&t);

                                                                // declare variable to assign localtime return value in it
                                                                // Forward (incomplete type) struct declaration
                                                                // see more here: https://en.cppreference.com/w/c/language/struct
                                                                struct tm *lt;

                                                                // using local time
                                                                lt = localtime(&t);

                                                                // asctime()  to convert struct to string and store it
                                                                tmpCrs = it->get_std_one_Course(crs->get_crs_id());
                                                                tmpCrs->set_crs_attendance( asctime(lt) ,true); 
                                                            }
                                                            else
                                                            {
                                                                if(chOption == 'n' || chOption == 'N')
                                                                {
                                                                    // same as yes 'y' option but store 'false' instead of 'true' to indicate absent of student

                                                                    time_t t;
                                                                    time(&t);
                                                                    struct tm *lt;
                                                                    lt = localtime(&t);
                                                                    tmpCrs = it->get_std_one_Course(crs->get_crs_id());
                                                                    tmpCrs->set_crs_attendance(asctime(lt), false);
                                                                }
                                                            }
                                                        
                                                        }
                                                    }
                                                }
                                            }
                                            else // Staff attendance
                                            {
                                                do{
                                                    check = true;

                                                    cout<<"\n\n\t- Set "<<stff->get_stff_degree()<<" "<<stff->get_stff_name()<<" Attendance.\n"
                                                        <<"\n\t- Course: "<<crs->get_crs_name()<<'\n'
                                                        <<"\n\n\t- 'y' yes for Present.\t- 'n' no for absent.\n"
                                                        <<"\n\t- 'b' to go back\n";
                                                        cin>>chOption;

                                                        // input validation
                                                        if(cin.fail() || chOption != 'n' && chOption != 'N' && chOption != 'y' && chOption != 'Y' && chOption != 'b' && chOption != 'B')
                                                        {
                                                            cin.clear();
                                                            cin.ignore(10000, '\n');
                                                            cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";

                                                            check = false;
                                                        }
                                                }while(!check);
                                                
                                                if(chOption == 'b' || chOption == 'B')
                                                    goto Section4;
                                                else
                                                {
                                                
                                                    if(chOption == 'y' || chOption == 'Y')
                                                    {
                                                        // declare variable to argument for time()
                                                        time_t t;

                                                        // Apply time()
                                                        time(&t);

                                                        // declare variable to assign localtime return value in it
                                                        // Forward (incomplete type) struct declaration
                                                        // see more here: https://en.cppreference.com/w/c/language/struct
                                                        struct tm *lt;

                                                        // using local time
                                                        lt = localtime(&t);

                                                        // asctime()  to convert struct to string and store it
                                                        crs->set_crs_attendance(asctime(lt) ,true);
                                                        
                                                    }
                                                    else
                                                    {
                                                        if(chOption == 'n' || chOption == 'N')
                                                        {
                                                            // same as yes 'y' option but store 'false' instead of 'true' to indicate absent of staff

                                                            time_t t;
                                                            time(&t);
                                                            struct tm *lt;
                                                            lt = localtime(&t);
                                                            crs->set_crs_attendance(asctime(lt) ,false);    
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else // Students
                        {
                            do
                            {
                                check = true;

                                cout<<"\n\n\t- Students Marks: \n"
                                    <<"\n\n\t- Your Options: \n"
                                    <<"\n\t1- get Students Marks.\n"
                                    <<"\n\t2- set Students Marks.\n"
                                    <<"\n\t3- go back.\n"
                                    <<"\n\t4- logout.\n";
                                cin>>option;

                                // input validation
                                if(cin.fail() || option > 4 || option < 1)
                                {
                                    cin.clear();
                                    cin.ignore(10000, '\n');
                                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                    check = false;
                                }
                                else
                                {
                                    if(option == 4)
                                        myAcademy();
                                    if(option == 3)
                                        goto Section3;
                                }
                            }while(!check);
                            // for simplicity I will do it for all at once and I will skip the option
                            // of doing it for one student and the option of separation between 
                            // Proff and Teaching assisstant because it takes alot of time 
                            // and I will not learn any thing new
                            
                            // get Students related to this Course
                            vStd = dep->get_dep_students_oneCrs(crs);
                            
                            if(vStd->empty())
                            {
                                do{
                                    check = true;

                                    cout<<"\n\n\t\t\t!!! No Students Found related to that Course !!!\n"
                                        <<"\n\t-enter 'b' to go back, or any letter to logout\n";
                                    cin>>chOption;

                                    // input validation
                                    if(cin.fail() || chOption != 'b' && chOption != 'B')
                                    {
                                        cin.clear();
                                        cin.ignore(10000, '\n');
                                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again !!!\n";
                                        check = false;
                                    }
                                    else
                                    {
                                        if(chOption == 'b' || chOption == 'B')
                                            goto Section3;
                                        else
                                            myAcademy();
                                    }
                                }while(!check);

                            }
                            else
                            {
                                // set Students Marks
                                if(option == 2)
                                {
                                    cout<<"\n\n\t- set Student Marks: \n";

                                    // getting student one at a time
                                    vector<Student>::iterator it;
                                    for( it = vStd->begin(); it != vStd->end(); it++)
                                    {
                                        do{
                                            check = true;

                                            cout<<"\n\t- Student ID: "<<it->get_std_id()<<'\n'
                                                <<"\n\t- Student Name: "<<it->get_std_name()<<'\n'
                                                <<"\n\n\t1- Set Class Work Marks.\t2- Set Final Mark.\n"
                                                <<"\n\t3- Set both.\n"
                                                <<"\n\n Your Option is: ";
                                            cin>>option;

                                            // input validation
                                            if(cin.fail() || option > 3 || option < 1)
                                            {
                                                cin.clear();
                                                cin.ignore(10000, '\n');
                                                cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";

                                                check = false;
                                            }

                                        }while(!check);

                                        if(option == 1)
                                        {
                                            do{
                                                check = true;
                                                
                                                cout<<"\n\t- Enter the Class Work Marks Plz: ";
                                                cin>>ClassWorkMarks;

                                                // input validation
                                                if(cin.fail() || ClassWorkMarks > crs->get_crs_totalCWM() || ClassWorkMarks < 0)
                                                {
                                                    cin.clear();
                                                    cin.ignore(10000, '\n');
                                                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                    check = false;
                                                }
                                            }while(!check);

                                            // set Class Work Marks for student
                                            tmpCrs = it->get_std_one_Course(crs->get_crs_id());
                                            tmpCrs->set_crs_CWM(ClassWorkMarks);

                                        
                                        }else
                                        {
                                            if(option == 2)
                                            {
                                                do{
                                                    check = true;
                                                    
                                                    cout<<"\n\t- Enter the Final Mark Plz: ";
                                                    cin>>FinalGrade;

                                                    // input validation
                                                    if(cin.fail() || FinalGrade > crs->get_crs_FinalG() || FinalGrade < 0)
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                        check = false;
                                                    }
                                                }while(!check);

                                                // set Final Grade for student
                                                tmpCrs = it->get_std_one_Course(crs->get_crs_id());
                                                tmpCrs->set_crs_FinalG(FinalGrade);

                                            }
                                            else
                                            {

                                                // set Class Work Marks
                                                do{
                                                    check = true;
                                                    
                                                    cout<<"\n\t- Enter the Class Work Marks Plz: ";
                                                    cin>>ClassWorkMarks;

                                                    // input validation
                                                    if(cin.fail() || ClassWorkMarks > crs->get_crs_totalCWM() || ClassWorkMarks < 0)
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                        check = false;
                                                    }
                                                }while(!check);

                                                // set Class Work Marks for student
                                                tmpCrs = it->get_std_one_Course(crs->get_crs_id());
                                                tmpCrs->set_crs_CWM(ClassWorkMarks);

                                                // ----------------------------------------------- //

                                                // set Final Grade
                                                do{
                                                    check = true;
                                                    
                                                    cout<<"\n\t- Enter the Final Mark Plz: ";
                                                    cin>>FinalGrade;

                                                    // input validation
                                                    if(cin.fail() || FinalGrade > crs->get_crs_FinalG() || FinalGrade < 0)
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                        check = false;
                                                    }
                                                }while(!check);

                                                // set Final Grade for student
                                                tmpCrs = it->get_std_one_Course(crs->get_crs_id());
                                                tmpCrs->set_crs_FinalG(FinalGrade);
                                            
                                            }
                                        }
                                    }
                                    
                                }
                                else
                                {
                                    cout<<"\n\n\t- Get Student Marks: \n";
                                    // sort by Name: in this case Grade is not possible here because its for specific Course
                                    sort(vStd->begin(), vStd->end(), sortStudentName());

                                    // getting student one at a time
                                    vector<Student>::iterator it;
                                    for( it = vStd->begin(); it != vStd->end(); it++)
                                    {
                                        // get Student Course 
                                        tmpCrs = it->get_std_one_Course(crs->get_crs_id());
                                        
                                        cout<<"\n\n\t- Student ID: "<<it->get_std_id()<<'\n'
                                            <<"\n\t- Student Name: "<<it->get_std_name()<<'\n'
                                            <<"\n\t- Student Class Work Marks: "<<tmpCrs->get_crs_CWM()<<" / "<<tmpCrs->get_crs_totalCWM()<<'\n'
                                            <<"\n\t- Student Final Grade: "<<tmpCrs->get_crs_FinalG()<<" / "<<tmpCrs->get_crs_totalFinalG()<<'\n'
                                            <<"\n\t- Student Total Garde: "<<tmpCrs->get_crs_FinalTotalGrade()<<" / "<<tmpCrs->get_crs_totalGrade()<<'\n';
                                            if(tmpCrs->get_crs_success())
                                                cout<<"\n\t- Student Course Success: pass.\n";
                                            else
                                                cout<<"\n\t- Student Course Success: fail.\n";
                                    }
                                            
                                }
                            }
                        }
                    }
                }
                // go back to start point of this scope 
                goto Section3;
            }
            // go back to start point of this scope
            goto Section2;
        }
        // go back to start point of this scope
        goto Section1;
    }
}

// I will just set admin the only employee 
void employee(Employee* emp)
{
  /*
    // As we implemented before that what comes here will not be an empty object so we do not have to check it.
    // Decleration
    int count = 0;   // to limit old password entering attempts
    string username;
    string password;
            
    int option;      // get the student option of change his username or password
    char chOption;   // get the student option of going out or staying here more 
    bool check;
    Student *locStd = new Student();    // helps us with comparison
    
    // get Current time
    time_t now = time(0);
    
    // New Login history
    AYA.set_academy_new_hist(emp->get_emp_id(), emp->get_emp_username(),ctime(&now));


    do
    {
        check = true;

        
        // print Student username
        std->print_student_Username();

        // print Student Information
        std->print_student();

        do{
            
            check = true;

            // let Student adjust his username and password
            cout<<"\n\n\t- "<<std->get_std_username()<<"You can Change:\n"
                <<"\n\n\t1- Change Username.\t2- Change Password.\n\n"
                <<"\to-------------------------------o"
                <<"\n\t- Plz enter Your Number choice: ";
            cin>>option;
            
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                check = false;
            }
            
            if(option > 2 || option < 1)
            {
                cout<<"\n\n\t\t\t!!! You entered out ranged number, Plz enter 1 or 2. !!!\n";
                check = false;
            }
            
        }while(!check);

        
        // change username
        if(option == 1)
        {
            // set the new username
            do
            {
                check = true;

                cout<<"\n\n\t- Plz enter your new Username: ";
                cin>>username;

                // input validation
                if(cin.fail())
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                    check = false;
                }
                
                // find the new username in our Academy
                locStd = findStudent(username);
                
                if(locStd)
                {
                    if(std->get_std_username() == locStd->get_std_username())
                    {
                        cout<<"\n\n\t- The new username was same as your old username.\n"
                            <<"\n\t- however we Changed your username successfully.\n";
                    }
                    else
                    {
                        cout<<"\n\t- The username you entered is used by another user, plz enter a new one.\n";
                        check = false;
                    }
                }
                else
                {
                    std->set_std_username(username);
                    cout<<"\n\n\t- We changed your Username Successfully.\n";
                }
            }while(!check);
        }else   // change password
        {
            string password2;

            // get the old password
            do{
                check = true;

                cout<<"\n\n\t- Plz enter your old Password: ";
                cin>>password;

                // input validation
                if(cin.fail())
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                    check = false;
                }

                // check old password
                if(std->get_std_password() != password)
                {
                    cout<<"\n\n\t\t\t!!! Wrong Password, Plz try again. !!!\n";
                    check = false;
                    count++;
                }else
                    check = true;
                
                
                if(count == 3)
                {
                    cout<<"\n\n\t\t\t!!! You reached your limit attempts, Plz try again later. !!!\n";
                    check = true;
                }

            }while(!check);

            // set the new password
            do{
                check = true;
                
                // input your new password 
                cout<<"\n\n\t- Now plz enter your new Password: ";
                cin>>password;

                if(!checkPassword(password))
                {
                    cout<<"\n\n\t\t\t!!! Your Password does not follow the rules, plz enter a valid Password. !!!\n";
                    check = false;
                }else
                {
                    cout<<"\n\n\t- Repeat your new Password: ";
                    cin>>password2;

                    // input validation
                    if(cin.fail())
                    {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                        check = false;
                    }
                    else
                    {
                        if(password != password2)
                        {
                            cout<<"\n\n\t\t\t!!! Repeated Password do not match with the new password, Plz enter again. !!!\n";
                            check = false;
                        }
                        else
                        {
                            std->set_std_password(password);
                            cout<<"\n\n\t- You changed your password successfully. \n";
                        }
                    }    
                }
                
            }while(!check);
        }




        // check user go out
        do{
            check = true;
            // check go out or stay more
            cout<<"\n\n\t- Do you wanna go out? \n"
                <<"\n\t- 'y' for yes and  'n' for no.\n"
                <<"\n\n\t- Your option is: ";
            cin>>chOption;

            // input validation
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout<<"\n\n\t\t\t!!! You entered unvalid value, Plz enter again. !!!\n";
                check = false;
            }

            if(chOption != 'y' && chOption != 'Y' && chOption != 'n' && chOption != 'N')
            {
                cout<<"\n\n\t\t\t!!! Plz enter only 'y' or 'n' letters !!!\n";
                check = false;
            }

        }while(!check);

        if(chOption == 'y' || chOption == 'Y')
            check = false;

    }while(check);

 */   
}

// split time into its component to help us compare to output our History in a customized fashion
void split_time(vector<string>& separateTime, string historyTime, char delimiter)
{
    string word = "";

    for(int i = 0; i < historyTime.size(); i++)
    {
        if(historyTime[i] == delimiter)
        {
            separateTime.emplace_back(word);
            word = "";
        }
        else
        {
            word = word + historyTime[i];
        }
    }
    separateTime.emplace_back(word);
}

// to track each month range of days
enum Months      { Jan, Feb, Mar, Apr, Mai, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
int daysNr[12] = { 31,  28,  31,  30,  31,  30,  31,  31,  30,  31,  30,  31  };

// check the date to enter Student birth Day
bool checkDate(string date)
{
    // the form what I am checking for is (dd/mm/yyyy) all are numbers
    vector<string> strDate;
    
    string sDay;      int iDay;
    string sMonth;   int iMonth;
    string sYear;     int iYear;

    // get the current year
    time_t now = time(0);
    struct tm *ti;

    ti = localtime(&now);


    // split the date into string parts
    split_time(strDate, date, '/');

    //check if its not aligned with the form (dd/mm/yyyy)

    // if the delemiter was not found it will push the complete text into the vector 
    // and there will be only one string in the vector
    if(strDate[0] == date) 
        return false;
    
    // check the Nr. of digits to be like the form (2/2/4)digits
    if(strDate[0].size() != 2 || strDate[1].size() != 2 || strDate[2].size() != 4)
        return false;

    // check the the Nr. of days to be in the range of each Month

    // first put the vector in separate strings
    sDay = strDate[0];   sMonth = strDate[1];   sYear = strDate[2];

    // get Month
    iMonth = sMonth[0] - '0'; // get the first char into int
    iMonth *= 10 + (sMonth[1]-'0'); // get the second char into int
    
    // check Month
    if(iMonth > 12)
        return false;
    
    // get Day
    iDay = sDay[0] - '0';
    iDay *= 10 + (sDay[1] - '0');

    // check Day
    if(iDay > daysNr[iMonth-1])
        return false;
    
    // get Year
    iYear = sYear[0] - '0';
    
    
    for(int i = 1; i<sYear.size(); i++)    
        iYear = (iYear * 10) + (sYear[i] - '0');
    
    // check Year
    if(iYear > (ti->tm_year+1900))
        return false;
    
    if(iYear < 1900)
        return false;

    return true;
}


void admin(Employee* admin)
{

    int count = 0;   // to limit old password entering attempts
    
    string username;
    string password;
            
    int option;     // get the student option of change his username or password
    char chOption;  // get the student option of going out or staying here more 
    bool check;     // helps us with input validation
    string Name;    // helps us with name of student staff or any other entities
    int ID;         // helps us with id of student staff, .. or any other entities
    
    Employee *locEmp = new Employee();    // helps us with comparison
    Faculty *locFac = new Faculty();
    Department *locDep = new Department();
    Staff *locStff = new Staff();
    Student *locStd = new Student();
    Course *locCrs = new Course();

    vector<History> *vHist = new vector<History>;       // helps us to get History infos
    vector<Faculty> *vFac = new vector<Faculty>;        // helps us to add or remove all the rest vectors here down
    vector<Department> *vDep = new vector<Department>;
    vector<Student> *vStd = new vector<Student>;
    vector<Staff> *vstff = new vector<Staff>;
    vector<Course> *vCrs = new vector<Course>;

    enum date{WDAY, MONTH, MDAY, TIME, YEAR}; // helps us with time and date Comparison
    string timeStr;
    vector<string> timeStr1;    // to get the date and time parts after splitting it to help us with comparison if we search in history with date
    vector<string> timeStr2;

    // get Current time
    time_t now;
    time(&now);
    struct tm *ti;
    ti = localtime(&now);
    string loginTime = asctime(ti);
    
    // New Login history
    AYA.set_academy_new_hist(admin->get_emp_id(), admin->get_emp_username(),loginTime);

    
    // goto Section 1
    Section1:

    
    // print admin Information
    AYA.print_academy_admin();


    do{
        check = true;

        cout<<"\n\n\t- Your Operations: \n"
            <<"\n\t1- Add and Remove.\n"
            <<"\n\t2- Statistics.\n"
            <<"\n\t3- History.\n"
            <<"\n\t4- Change Username or Password.\n"
            <<"\n\t5- logout.\n"
            <<"\n\n\t- Your Option Nr. is: ";
        cin>>option;

        // input validation
        if(cin.fail() || option > 5 || option < 1)
        {
            cin.clear();
            cin.ignore();
            cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
            check = false;
        }
    }while(!check);

    if(option == 5)
        myAcademy();
    else
    {
        // change admin username or password 
        if(option == 4)
        {

            do{
                
                check = true;

                // let admin adjust his username and password
                cout<<"\n\n\t- "<<admin->get_emp_username()<<" You can Change:\n"
                    <<"\n\n\t1- Change Username.\t2- Change Password.\n\n"
                    <<"\to-------------------------------o"
                    <<"\n\t- Plz enter Your choice number : ";
                cin>>option;
                
                if(cin.fail())
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                    check = false;
                }
                
                if(option > 2 || option < 1)
                {
                    cout<<"\n\n\t\t\t!!! You entered out ranged number, Plz enter 1 or 2. !!!\n";
                    check = false;
                }
                
            }while(!check);

            
            // change username
            if(option == 1)
            {
                // set the new username
                do
                {
                    check = true;

                    cout<<"\n\n\t- Plz enter your new Username: ";
                    cin>>username;

                    // input validation
                    if(cin.fail())
                    {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                        check = false;
                    }
                    
                    // find the new username in our Academy
                    locEmp = findEmployee(username);
                    
                    if(locEmp)
                    {
                        if(admin->get_emp_username() == locEmp->get_emp_username())
                        {
                            cout<<"\n\n\t- The new username was same as your old username.\n"
                                <<"\n\t- however we Changed your username successfully.\n";
                        }
                        else
                        {
                            cout<<"\n\t- The username you entered is used by another user, plz enter a new one.\n";
                            check = false;
                        }
                    }
                    else
                    {
                        admin->set_emp_username(username);
                        cout<<"\n\n\t- We changed your Username Successfully.\n";
                    }
                }while(!check);
            }else   // change password
            {
                string password2;

                // get the old password
                do{
                    check = true;

                    cout<<"\n\n\t- Plz enter your old Password: ";
                    cin>>password;

                    // input validation
                    if(cin.fail())
                    {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                        check = false;
                    }

                    // check old password
                    if(admin->get_emp_password() != password)
                    {
                        cout<<"\n\n\t\t\t!!! Wrong Password, Plz try again. !!!\n";
                        check = false;
                        count++;
                    }else
                        check = true;
                    
                    
                    if(count == 3)
                    {
                        cout<<"\n\n\t\t\t!!! You reached your limit attempts, Plz try again later. !!!\n";
                        check = true;
                    }

                }while(!check);

                // set the new password
                do{
                    check = true;
                    
                    // input your new password 
                    cout<<"\n\n\t- Now plz enter your new Password: ";
                    cin>>password;

                    if(!checkPassword(password))
                    {
                        cout<<"\n\n\t\t\t!!! Your Password does not follow the rules, plz enter a valid Password. !!!\n";
                        check = false;
                    }else
                    {
                        cout<<"\n\n\t- Repeat your new Password: ";
                        cin>>password2;

                        // input validation
                        if(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout<<"\n\n\t\t\t!!! You entered unvalid value, plz enter again. !!!\n";
                            check = false;
                        }
                        else
                        {
                            if(password != password2)
                            {
                                cout<<"\n\n\t\t\t!!! Repeated Password do not match with the new password, Plz enter again. !!!\n";
                                check = false;
                            }
                            else
                            {
                                admin->set_emp_password(password);
                                cout<<"\n\n\t- You changed your password successfully. \n";
                            }
                        }    
                    }
                    
                }while(!check);
            }

        }
        else
        {
            // History operations
            if(option == 3)
            {
                // goto label
                Section2:

                // get History from Academy
                vHist = AYA.get_academy_hist();
                
                do{
                    check = true;
                    cout<<"\n\n\t- History Operations: \n"
                        <<"\n\t1- get login History.\n"
                        <<"\n\t2- get login History today.\n"
                        <<"\n\t3- get login History for usr by ID.\n"
                        <<"\n\t4- go back.\n"
                        <<"\n\t5- logout.\n"
                        <<"\n\n\tYour Option Nr. is: ";
                    cin>>option;

                    // input validation
                    if(cin.fail() || option > 5 || option < 1)
                    {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                        check = false;
                    }
                    else // last 2 options (go back & logout)
                    {
                        if(option == 5)
                            myAcademy();
                        if(option == 4)
                            goto Section1;

                    }
                }while(!check);

                // login History 
                if(option == 1)
                {
                    cout<<"\n\n\t- History of Academy: ";
                    
                    vector<History>::iterator it;
                    if(!vHist->empty())
                    {
                        for( it = vHist->begin(); it != vHist->end(); it++)
                        {
                            cout<<"\n\n\t- History Date: "<<it->get_hist_date()<<'\n'
                                <<"\n\t- History ID: "<<it->get_hist_id()<<'\n'
                                <<"\n\t- History Username: "<<it->get_hist_username()<<'\n';
                        }

                    }
                    else     
                    {
                        cout<<"\n\n\t- Your History is empty.\n";
                        goto Section1;
                    }

                }
                else
                {
                    // login History for today
                    if(option == 2)
                    {
                        cout<<"\n\n\t- History of Academy (today); \n";

                        vector<History>::iterator it;
                        if(!vHist->empty())
                        {
                            // current time
                            
                            // alternative way (shorter than before):
                            time_t now  = time(0);  // current system date and time
                            timeStr = ctime(&now);// convert time to string
                            
                            for( it = vHist->begin(); it != vHist->end(); it++)
                            {
                                // split both today date and History date
                                split_time(timeStr1, timeStr, ' ');
                                split_time(timeStr2, it->get_hist_date(), ' ');

                                // we will skip the 4th element (index=3) because its for time

                                if(timeStr1[WDAY] == timeStr2[WDAY] && timeStr1[MONTH] == timeStr2[MONTH] && timeStr1[MDAY] == timeStr2[MDAY] && timeStr1[YEAR] == timeStr2[YEAR])
                                {
                                    cout<<"\n\n\t- History Date: "<<it->get_hist_date()<<'\n'
                                        <<"\n\t- History ID: "<<it->get_hist_id()<<'\n'
                                        <<"\n\t- History Username: "<<it->get_hist_username()<<'\n';
                                }
                            }

                        }
                        else     
                        {
                            cout<<"\n\n\t- Your History is empty.\n";
                            goto Section1;
                        }
                    }
                    else // login History by username
                    {
                        // goto label
                        SectionHistUsr:

                        cout<<"\n\n\t- Hisroty of Academy (username): \n";

                        // get the username from admin
                        do{
                            check = true;
                            cout<<"\n\n\t- Plz enter the username to show his history: ";
                            cin>>username;

                            // input validation
                            if(cin.fail())
                            {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                check = false;
                            }

                        }while(!check);

                        vector<History>::iterator it;
                        if(!vHist->empty())
                        {
                            
                            for( it = vHist->begin(); it != vHist->end(); it++)
                            {
                            

                                // we will skip the 4th element (index=3) because its for time

                                if(it->get_hist_username() == username)
                                {
                                    cout<<"\n\n\t- History Date: "<<it->get_hist_date()<<'\n'
                                        <<"\n\t- History ID: "<<it->get_hist_id()<<'\n'
                                        <<"\n\t- History Username: "<<it->get_hist_username()<<'\n';
                                    count++;
                                }
                            }

                            // indicate username was not found in history
                            if(count == 0)
                            {
                                do{
                                    check = true;

                                    cout<<"\n\t- sorry but the username was not found in the history, plz try again.\n"
                                        <<"\n\t- or enter 'b' to go back and any letter to enter the username again.\n";
                                    cin>>chOption;

                                    // input validation
                                    if(cin.fail() || chOption != 'b' && chOption != 'B')
                                    {
                                        cin.clear();
                                        cin.ignore(10000, '\n');
                                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                        check = false;
                                    }
                                    else
                                    {
                                        if(chOption == 'b' || chOption == 'B')
                                            goto Section2;
                                        else
                                            goto SectionHistUsr;
                                    }

                                }while(!check);
                            }

                        }
                        else     
                        {
                            cout<<"\n\n\t- Your History is empty.\n";
                            goto Section1;
                        }
                    }
                }
            }
            else
            {
                // Statistics operations
                if(option == 2)
                {
                    // goto label
                    Section3:
                    do{
                        check = true;

                        cout<<"\n\n\t- Academy Statistics: \n"
                            <<"\n\t- Statistics Options: \n"
                            <<"\n\t1- Nr. of Students in Academy.\n"
                            <<"\n\t2- Nr. of Success Students in Academy.\n"
                            <<"\n\t3- Ratio of Success in Academy.\n"
                            <<"\n\t4- Nr. of Staff in Academy.\n"
                            <<"\n\t5- go back.\n"
                            <<"\n\t6- logout.\n"
                            <<"\n\n\t- Your Option Nr. is: ";
                        cin>>option;

                        // input validation
                        if(cin.fail() || option > 5 || option < 1)
                        {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again.\n";
                            check = false;
                        }
                        else
                        {
                            if(option == 6)
                                myAcademy();
                            if(option == 5)
                                goto Section1;
                        }
                    }while(!check);

                    if(option == 1)
                    {
                        cout<<"\n\n\t- The Nr. of Students in"<<AYA.get_academy_name()<<" : "<<admin->get_emp_fac_nrOfStudents()<<'\n';
                    }
                    else
                    {
                        if(option == 2)
                        {
                            cout<<"\n\n\t- The Nr. of Success Students in"<<AYA.get_academy_name()<<" : "<<admin->get_emp_fac_nrOfSuccessStudents()<<'\n';
                        }
                        else
                        {
                            if(option == 3)
                            {

                                cout<<"\n\n\t- The Nr. of Students in"<<AYA.get_academy_name()<<" : "<<admin->get_emp_fac_ratioOfSuccessStudents()<<'\n';
                            }
                            else
                                cout<<"\n\n\t- The Nr. of Staff in"<<AYA.get_academy_name()<<" : "<<admin->get_emp_fac_nrOfStaff()<<'\n';
                        }
                    }

                }
                else // Add and Remove operations
                {
                    // goto label
                    Section4:

                    do{
                        check = true;

                        cout<<"\n\n\t- You can Add and Remove: \n"
                            <<"\n\t1- Faculty.\n"
                            <<"\n\t2- Department.\n"
                            <<"\n\t3- Staff.\n"
                            <<"\n\t4- Student.\n"
                            <<"\n\t5- Course.\n"
                            <<"\n\t6- go back.\n"
                            <<"\n\t7- logout.\n"
                            <<"\n\t- Your Option is: ";
                        cin>>option;

                        // input validation
                        if(cin.fail() || option > 8 || option < 1)
                        {
                            cin.clear();
                            cin.ignore();
                            cout<<"\n\n\t\t\t!!! you entered unvalid value, plz try again. !!!\n";
                            check = false;
                        }
                        else
                        {
                            if(option == 7)
                                myAcademy();
                            if(option == 6)
                                goto Section1;
                        }

                    }while(!check);

                    // Add or Remove Faculty
                    if(option == 1)
                    {
                        // Section label
                        Section5:

                        do
                        {
                            check = true;

                            cout<<"\n\n\t- Your Options are: \n"
                                <<"\n\t1- Add a Faculty.\n"
                                <<"\n\t2- Remove a Faculty.\n"
                                <<"\n\t3- go back.\n"
                                <<"\n\t- Your Option Nr. is: ";
                            cin>>option;

                            // input validation
                            if(cin.fail() || option > 3 || option < 1)
                            {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                check = false;
                            }
                            else
                            {
                                if(option == 3)
                                    goto Section4;
                            }

                        }while(!check);

                        // Remove a Faculty
                        if(option == 2)
                        {
                            vFac = admin->get_emp_Fac();
                            if(vFac->empty())
                            {
                                cout<<"\n\n\t- Sorry there is no Faculties assigned yet.\n";
                                goto Section4;
                            }

                            do{
                                check = true;

                                cout<<"To remove a Faculty, plz enter Faculty name: ";
                                cin>>Name;

                                // input validation
                                if(cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore(10000, '\n');
                                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                    check = false;
                                }
                                else
                                {
                                    // get Faculty by name from admin (Employee)
                                    locFac = admin->get_emp_oneFac(Name);

                                    if(!locFac)
                                    {
                                        do{
                                            check = true;

                                            cout<<"\n\n\t- Faculty Name not found.\n"
                                                <<"\n\t- plz try enter the name again.\n"  
                                                <<"\n\t- or type 'b' if you wanna go back\n";
                                            cin>>chOption;

                                            // input validation
                                            if(cin.fail())
                                            {
                                                cin.clear();
                                                cin.ignore(10000, '\n');
                                                cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again.  !!!\n";
                                                check = false;
                                            }
                                            else
                                            {
                                                if(chOption == 'b' || chOption == 'B')
                                                    goto Section5;
                                                else
                                                    check = false;
                                            }

                                        }while(!check);
                                    }
                                    else
                                    {
                                        // delete the faculty
                                        delete locFac;
                                        cout<<"\n\n\t- Your Faculty is removed successfully.\n\n";
                                    }
                                }

                            }while(!check);
                        }
                        else // Add a Faculty
                        {
                            do{
                                check = true;

                                cout<<"\n\n\t- To add a Faculty, Plz follow the steps below. \n"
                                    <<"\n\t- Enter Faculty Name: ";
                                cin>>Name;

                                // input validation
                                if(cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore(10000, '\n');
                                    cout<<"\n\n\t\t\t!!! You entered unvalid value,plz try again. !!!\n";
                                    check = false;
                                }
                                else
                                {
                                    // search if the name is already exist
                                    locFac =  admin->get_emp_oneFac(Name);
                                    if(locFac)
                                    {
                                        cout<<"\n\n\t- Faculty "<<Name<<" is already there.\n\n\t- Plz try another name.\n";
                                        check = false;
                                    }
                                    else
                                    {
                                        locFac = new Faculty();
                                        locFac->set_fac_name(Name);
                                    }
                                }
                            }while(!check);

                            do{
                                check = true;

                                cout<<"\n\t- Enter Faculty Description: ";
                                cin>>Name; // we will use the same name for Desription as both are string variables 

                                // input validation
                                if(cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore(10000, '\n');
                                    cout<<"\n\n\t\t\t!!! You entered unvalid value,plz try again. !!!\n";
                                    check = false;
                                }
                                else
                                {
                                    locFac = new Faculty();
                                    locFac->set_fac_desc(Name);
                                }
                            }while(!check);

                            // add new Faculty
                            locFac = new Faculty();
                            admin->set_emp_new_fac_autoID(*locFac);
                            cout<<"\n\n\t- Your Faculty are added successfully.\n\n";
                        }
                        goto Section4;
                    }
                    else
                    {
                        // Add or Remove Department
                        if(option == 2)
                        {

                            // Section label
                            Section6:

                            do
                            {
                                check = true;

                                cout<<"\n\n\t- Your Options are: \n"
                                    <<"\n\t1- Add a Department.\n"
                                    <<"\n\t2- Remove a Department.\n"
                                    <<"\n\t3- go back.\n"
                                    <<"\n\t- Your Option Nr. is: ";
                                cin>>option;

                                // input validation
                                if(cin.fail() || option > 3 || option < 1)
                                {
                                    cin.clear();
                                    cin.ignore(10000, '\n');
                                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                    check = false;
                                }
                                else
                                {
                                    if(option == 3)
                                        goto Section4;
                                }

                            }while(!check);

                            // Remove Department
                            if(option == 2)
                            {
                                cout<<"\n\n\t- To Remove a Department, plz pick its Faculty: \n";
                                
                                vFac = admin->get_emp_Fac();

                                if(!vFac->empty())
                                {
                                    do{
                                        check = true;


                                        // print Faculties
                                        count = 0;
                                        vector<Faculty>::iterator it;
                                        for( it = vFac->begin(); it != vFac->end(); it++)
                                        {

                                            cout<<"\n\n\t"<<++count<<"- "<<it->get_fac_name()<<" Faculty\n";
                                        }

                                        // let admin select a Faculty
                                        cout<<"\n\n\t- Plz pick a Faculty Nr. from above: ";
                                        cin>>option;

                                        // input validation
                                        if(cin.fail() || option > count || option < 1)
                                        {
                                            cin.clear();
                                            cin.ignore(10000, '\n');
                                            cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                            check = false;
                                        }
                                        else
                                            *locFac = (*vFac)[--option];
                                        
                                    }while(!check);

                                    do{
                                        check = true;
                                    
                                        cout<<"\n\n\t- Plz enter Your Department Name: ";
                                        cin>>Name;

                                        // input validation
                                        if(cin.fail())
                                        {
                                            cin.clear();
                                            cin.ignore();
                                            cout<<"\n\n\t\t\t!!! You enetered unvalid value, plz try again. !!!\n";
                                            check = false;
                                        }
                                        else
                                        {
                                            // find the Department in a faculty
                                            locDep = locFac->get_one_dep_in_fac(Name);

                                            if(locDep)
                                            {
                                                delete locDep;
                                                cout<<"\n\n\t- The Department is removed successfully.\n";
                                            }
                                            else
                                            {
                                                cout<<"\n\n\t- The Department Name was not found in "<<locFac->get_fac_name()<<" Faculty.\n";
                                                check = false;
                                            }
                                        }

                                    }while(!check);



                                }
                                else
                                {
                                    cout<<"\n\n\t- There is no Faculties there Man.\n";
                                    goto Section4;
                                }

                            }
                            else // Add Department
                            {
                                cout<<"\n\n\t- To Add a department plz follow the steps below: \n";
                                    
                                // get all Faculties to choose one of them
                                vFac = admin->get_emp_Fac();

                                if(!vFac->empty())
                                {

                                    do{
                                        check = true;

                                        cout<<"\n\t- Plz first pick a Faculty: \n";

                                        // print Faculties
                                        count = 0;
                                        vector<Faculty>::iterator it;
                                        for( it = vFac->begin(); it != vFac->end(); it++)
                                        {
                                            cout<<"\n\n\t"<<++count<<"- "<<it->get_fac_name()<<" Faculty\n";
                                        }

                                        cout<<"\n\n\t- Enter your Choice Nr.: ";
                                        cin>>option;

                                        // validation input
                                        if(cin.fail() || option > count || option < 1)
                                        {
                                            cin.clear();
                                            cin.ignore();
                                            cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again.\n";
                                            check = false;
                                        }
                                        else
                                            *locFac = (*vFac)[--option];
                                            
                                    }while(!check);

                                    do{
                                        check = true;

                                        cout<<"\n\n\t- Now enter your Department Name: \n";
                                        cin>>Name;

                                        // input validation
                                        if(cin.fail())
                                        {
                                            cin.clear();
                                            cin.ignore(10000, '\n');
                                            cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                            check = false;
                                        }
                                        else
                                        {
                                            // search of Dep Name in the faculty
                                            locDep = locFac->get_one_dep_in_fac(Name);

                                            if(locDep)
                                            {
                                                cout<<"\n\n\t- The Department Name exist Plz try another name.\n";
                                                check = false;
                                            }
                                            else
                                            {
                                                // Add the Department Name
                                                locDep->set_dep_name(Name);

                                                // get Dep Description
                                                do{
                                                    check = true;
                                                    
                                                    cout<<"\n\n\t- Enter Description for Department "<<Name<<": \n";
                                                    cin>>Name;

                                                    // input validation
                                                    if(cin.fail())
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                        check = false;
                                                    }
                                                    else
                                                    {
                                                        // add Description to department
                                                        locDep->set_dep_desc(Name);

                                                        // add the Department to faculty
                                                        locFac->set_new_dep_in_fac_autoID(*locDep); 
                                                    }
                                                }while(!check);
                                            }
                                        }
                                    }while(!check);
                                }
                                else
                                {
                                    cout<<"\n\n\t- There is no Faculties here Man.\n";
                                    goto Section4;
                                }
                            }

                            goto Section4;
                        }
                        else
                        {
                            // Add or Remove Staff
                            if(option == 3)
                            {
                                // Section label
                                Section7:
    
                                do
                                {
                                    check = true;

                                    cout<<"\n\n\t- Your Options are: \n"
                                        <<"\n\t1- Add a Staff.\n"
                                        <<"\n\t2- Remove a Staff.\n"
                                        <<"\n\t3- go back.\n"
                                        <<"\n\t- Your Option Nr. is: ";
                                    cin>>option;

                                    // input validation
                                    if(cin.fail() || option > 3 || option < 1)
                                    {
                                        cin.clear();
                                        cin.ignore(10000, '\n');
                                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                        check = false;
                                    }
                                    else
                                    {
                                        if(option == 3)
                                            goto Section4;
                                    }

                                }while(!check);
                                
                                // Remove a staff
                                if(option == 2)
                                {
                                    cout<<"\n\n\t- To Remove a Staff, plz pick his Faculty first: \n";
                                
                                    vFac = admin->get_emp_Fac();

                                    if(!vFac->empty())
                                    {
                                        do{
                                            check = true;


                                            // print Faculties
                                            count = 0;
                                            vector<Faculty>::iterator it;
                                            for( it = vFac->begin(); it != vFac->end(); it++)
                                            {

                                                cout<<"\n\n\t"<<++count<<"- "<<it->get_fac_name()<<" Faculty\n";
                                            }

                                            // let admin select a Faculty
                                            cout<<"\n\n\t- Plz pick a Faculty Nr. from above: ";
                                            cin>>option;

                                            // input validation
                                            if(cin.fail() || option > count || option < 1)
                                            {
                                                cin.clear();
                                                cin.ignore(10000, '\n');
                                                cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                check = false;
                                            }
                                            else
                                                *locFac = (*vFac)[--option];
                                            
                                        }while(!check);

                                        cout<<"\n\n\t- Plz pick a Department: ";

                                        vDep = locFac->get_dep_in_fac();

                                        if(!vDep->empty())
                                        {
                                            // print the departments
                                            count = 0;

                                            vector<Department>::iterator it;
                                            for( it = vDep->begin(); it != vDep->end(); it++)
                                                cout<<"\n\t- Department #"<<++count<<" :"<< it->get_dep_name()<<'\n';
                                            
                                            do{
                                                check = true;

                                                // get Department from user
                                                cout<<"\n\n\t- Plz pick a Department Nr.: ";
                                                cin>>option;

                                                // input validation
                                                if(cin.fail() || option > count || option < 1)
                                                {
                                                    cin.clear();
                                                    cin.ignore(10000, '\n');
                                                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                    check = false;
                                                }
                                                else
                                                    *locDep = (*vDep)[--option];
                                                
                                            }while(!check);

                                            
                                            do{
                                                check = true;

                                                // get Staff Name
                                                cout<<"\n\n\t- Enter Staff ID: ";
                                                cin>>ID;

                                                // input validation
                                                if(cin.fail())
                                                {
                                                    cin.clear();
                                                    cin.ignore(10000, '\n');
                                                    cout<<"\n\n\t\t\t!!! You entered unvalid value 1, plz try again. !!!\n";
                                                    check = false;
                                                }
                                                else
                                                {
                                                    locStff = locFac->get_one_stff_in_fac(ID);

                                                    if(locStff)
                                                        delete locStff;
                                                    else
                                                    {
                                                        cout<<"\n\n\t- This ID was not found, plz try again.\n";
                                                        check = false;
                                                    }
                                                }
                                            }while(!check);
                                            
                                            
                                        }
                                        else
                                        {
                                            cout<<"\n\n\t- There are no departments assigned into This Faculty.\n";
                                            goto Section4;
                                        }

                                    }
                                    else
                                    {
                                        cout<<"\n\n\t- There are no Faculties there Man.\n";
                                        goto Section4;
                                    }

                                }
                                else // add a staff
                                {
                                    cout<<"\n\n\t- To Add a Staff, plz pick his Faculty first: \n";
                                
                                    vFac = admin->get_emp_Fac();

                                    if(!vFac->empty())
                                    {
                                        do{
                                            check = true;


                                            // print Faculties
                                            count = 0;
                                            vector<Faculty>::iterator it;
                                            for( it = vFac->begin(); it != vFac->end(); it++)
                                            {

                                                cout<<"\n\n\t"<<++count<<"- "<<it->get_fac_name()<<" Faculty\n";
                                            }

                                            // let admin select a Faculty
                                            cout<<"\n\n\t- Plz pick a Faculty Nr. from above: ";
                                            cin>>option;

                                            // input validation
                                            if(cin.fail() || option > count || option < 1)
                                            {
                                                cin.clear();
                                                cin.ignore(10000, '\n');
                                                cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                check = false;
                                            }
                                            else
                                                *locFac = (*vFac)[--option];
                                            
                                        }while(!check);

                                        cout<<"\n\n\t- Plz pick a Department: ";

                                        vDep = locFac->get_dep_in_fac();

                                        if(!vDep->empty())
                                        {
                                            // print the departments
                                            count = 0;

                                            vector<Department>::iterator it;
                                            for( it = vDep->begin(); it != vDep->end(); it++)
                                                cout<<"\n\t- Department #"<<++count<<" :"<< it->get_dep_name()<<'\n';
                                            
                                            do{
                                                check = true;

                                                // get Department from user
                                                cout<<"\n\n\t- Plz pick a Department Nr.: ";
                                                cin>>option;

                                                // input validation
                                                if(cin.fail() || option > count || option < 1)
                                                {
                                                    cin.clear();
                                                    cin.ignore(10000, '\n');
                                                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                    check = false;
                                                }
                                                else
                                                    *locDep = (*vDep)[--option];
                                                
                                            }while(!check);

                                            // get Staff Data

                                            string degree = "";
                                            string email = "";
                                            double salary = 0.0;

                                            do{
                                                check = true;

                                                // get Staff Name
                                                cout<<"\n\n\t- Enter Staff Name: ";
                                                cin>>Name;

                                                // input validation
                                                if(cin.fail())
                                                {
                                                    cin.clear();
                                                    cin.ignore(10000, '\n');
                                                    cout<<"\n\n\t\t\t!!! You entered unvalid value 1, plz try again. !!!\n";
                                                    check = false;
                                                }

                                                // get Staff Degree
                                                cout<<"\n\n\t- Enter Staff Degree: ";
                                                cin>> degree;

                                                // input validation
                                                if(cin.fail())
                                                {
                                                    cin.clear();
                                                    cin.ignore(10000, '\n');
                                                    cout<<"\n\n\t\t\t!!! You entered unvalid value 2, plz try again. !!!\n";
                                                    check = false;
                                                }
                                                
                                                // get Staff Email
                                                cout<<"\n\n\t- Enter Staff Email: ";
                                                cin>>email;

                                                // input validation
                                                if(cin.fail())
                                                {
                                                    cin.clear();
                                                    cin.ignore(10000, '\n');
                                                    cout<<"\n\n\t\t\t!!! You entered unvalid value 3, plz try again. !!!\n";
                                                    check = false;
                                                }

                                            }while(!check);
                                            
                                            // fill Staff data
                                            locStff->set_stff_name(Name);
                                            locStff->set_stff_degree(degree);
                                            locStff->set_stff_email(email);
                                            locStff->set_stff_faculty(locFac->get_fac_name());
                                            locStff->set_stff_department(locDep->get_dep_name());

                                            // add to faculty in the vector
                                            locFac->set_new_stff_in_fac_autoID(*locStff);
                                        }
                                        else
                                        {
                                            cout<<"\n\n\t- There are no departments assigned into This Faculty.\n";
                                            goto Section4;
                                        }

                                    }
                                    else
                                    {
                                        cout<<"\n\n\t- There are no Faculties there Man.\n";
                                        goto Section4;
                                    }
                                }

                                goto Section4;
                            }
                            else
                            {
                                // Add or Remove Student
                                if(option == 4)
                                {
                                    // Section label
                                    Section8:

                                    do
                                    {
                                        check = true;

                                        cout<<"\n\n\t- Your Options are: \n"
                                            <<"\n\t1- Add a Student.\n"
                                            <<"\n\t2- Remove a Student.\n"
                                            <<"\n\t3- go back.\n"
                                            <<"\n\t- Your Option Nr. is: ";
                                        cin>>option;

                                        // input validation
                                        if(cin.fail() || option > 3 || option < 1)
                                        {
                                            cin.clear();
                                            cin.ignore(10000, '\n');
                                            cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                            check = false;
                                        }
                                        else
                                        {
                                            if(option == 3)
                                                goto Section4;
                                        }

                                    }while(!check);
                                    
                                    // remove Student
                                    if(option == 2)
                                    {
                                        cout<<"\n\n\t- To Remove a Student, plz pick his Faculty first: \n";
                                    
                                        vFac = admin->get_emp_Fac();

                                        if(!vFac->empty())
                                        {
                                            do{
                                                check = true;


                                                // print Faculties
                                                count = 0;
                                                vector<Faculty>::iterator it;
                                                for( it = vFac->begin(); it != vFac->end(); it++)
                                                {

                                                    cout<<"\n\n\t"<<++count<<"- "<<it->get_fac_name()<<" Faculty\n";
                                                }

                                                // let admin select a Faculty
                                                cout<<"\n\n\t- Plz pick a Faculty Nr. from above: ";
                                                cin>>option;

                                                // input validation
                                                if(cin.fail() || option > count || option < 1)
                                                {
                                                    cin.clear();
                                                    cin.ignore(10000, '\n');
                                                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                    check = false;
                                                }
                                                else
                                                    *locFac = (*vFac)[--option];
                                                
                                            }while(!check);

                                            cout<<"\n\n\t- Plz pick a Department: ";

                                            vDep = locFac->get_dep_in_fac();

                                            if(!vDep->empty())
                                            {
                                                // print the departments
                                                count = 0;

                                                vector<Department>::iterator it;
                                                for( it = vDep->begin(); it != vDep->end(); it++)
                                                    cout<<"\n\t- Department #"<<++count<<" :"<< it->get_dep_name()<<'\n';
                                                
                                                do{
                                                    check = true;

                                                    // get Department from user
                                                    cout<<"\n\n\t- Plz pick a Department Nr.: ";
                                                    cin>>option;

                                                    // input validation
                                                    if(cin.fail() || option > count || option < 1)
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                        check = false;
                                                    }
                                                    else
                                                        *locDep = (*vDep)[--option];
                                                    
                                                }while(!check);

                                                
                                                do{
                                                    check = true;

                                                    // get Student ID
                                                    cout<<"\n\n\t- Enter Student ID: ";
                                                    cin>>ID;

                                                    // input validation
                                                    if(cin.fail())
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value 1, plz try again. !!!\n";
                                                        check = false;
                                                    }
                                                    else
                                                    {
                                                        locStd = locDep->get_dep_student(ID);

                                                        if(locStd)
                                                            delete locStd;
                                                        else
                                                        {
                                                            cout<<"\n\n\t- This ID was not found, plz try again.\n";
                                                            check = false;
                                                        }
                                                    }
                                                }while(!check);
                                                
                                                
                                            }
                                            else
                                            {
                                                cout<<"\n\n\t- There are no departments assigned into This Faculty.\n";
                                                goto Section4;
                                            }

                                        }
                                        else
                                        {
                                            cout<<"\n\n\t- There are no Faculties there Man.\n";
                                            goto Section4;
                                        }
                                    }
                                    else // add a student
                                    {
                                        cout<<"\n\n\t- To Add a Student, plz pick his Faculty first: \n";
                                    
                                        vFac = admin->get_emp_Fac();

                                        if(!vFac->empty())
                                        {
                                            do{
                                                check = true;


                                                // print Faculties
                                                count = 0;
                                                vector<Faculty>::iterator it;
                                                for( it = vFac->begin(); it != vFac->end(); it++)
                                                {

                                                    cout<<"\n\n\t"<<++count<<"- "<<it->get_fac_name()<<" Faculty\n";
                                                }

                                                // let admin select a Faculty
                                                cout<<"\n\n\t- Plz pick a Faculty Nr. from above: ";
                                                cin>>option;

                                                // input validation
                                                if(cin.fail() || option > count || option < 1)
                                                {
                                                    cin.clear();
                                                    cin.ignore(10000, '\n');
                                                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                    check = false;
                                                }
                                                else
                                                    *locFac = (*vFac)[--option];
                                                
                                            }while(!check);

                                            cout<<"\n\n\t- Plz pick a Department: ";

                                            vDep = locFac->get_dep_in_fac();

                                            if(!vDep->empty())
                                            {
                                                // print the departments
                                                count = 0;

                                                vector<Department>::iterator it;
                                                for( it = vDep->begin(); it != vDep->end(); it++)
                                                    cout<<"\n\t- Department #"<<++count<<" :"<< it->get_dep_name()<<'\n';
                                                
                                                do{
                                                    check = true;

                                                    // get Department from user
                                                    cout<<"\n\n\t- Plz pick a Department Nr.: ";
                                                    cin>>option;

                                                    // input validation
                                                    if(cin.fail() || option > count || option < 1)
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                        check = false;
                                                    }
                                                    else
                                                        *locDep = (*vDep)[--option];
                                                    
                                                }while(!check);

                                                // get Student Data

                                                string birthDay = "";
                                                string email = "";
                                                int semesterNr = 0;
                                                int studyYearStart = 0;
                                                bool payment = false;

                                                do{
                                                    check = true;

                                                    // get Student Name // validation for name!
                                                    cout<<"\n\n\t- Enter Student Name: ";
                                                    cin>>Name;

                                                    // input validation
                                                    if(cin.fail())
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value 1, plz try again. !!!\n";
                                                        check = false;
                                                    }

                                                    cout<<"\n\n\t- Enter Student Birthday form (dd/mm/yyyy) all in numbers: ";
                                                    cin>>birthDay;
                                                    
                                                    // input validation
                                                    if(cin.fail() && checkDate(birthDay))
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value 2, plz try again. !!!\n";
                                                        check = false;
                                                    }

                                                    // get Student Email // validation for emails!
                                                    cout<<"\n\n\t- Enter Student Email: ";
                                                    cin>> email;

                                                    // input validation
                                                    if(cin.fail())
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value 3, plz try again. !!!\n";
                                                        check = false;
                                                    }
                                                    
                                                    // get Studnt semester Nr.
                                                    cout<<"\n\n\t- Enter Semester Nr.: ";
                                                    cin>>semesterNr;

                                                    // input validation
                                                    if(cin.fail() || semesterNr > 10 || semesterNr < 1)
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value , plz try again. !!!\n";
                                                        check = false;
                                                    }

                                                    // get Student Study Start Year
                                                    cout<<"\n\n\t- Enter Study Start Year";
                                                    cin>>studyYearStart;

                                                    // input validation
                                                    if(cin.fail() || studyYearStart > 3000  || semesterNr < 1900)
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value 5, plz try again. !!!\n";
                                                        check = false;
                                                    }

                                                    cout<<"\n\n\t- Enter Student Payment Status: \n"
                                                        <<"\n\t- 'y' for yes paid. 'n' for paid not.\n";
                                                    cin>>chOption;
                                                    
                                                    // input validation
                                                    if(cin.fail() || chOption != 'n' && chOption != 'N' && chOption != 'y' && chOption != 'Y')
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value 6, plz try again. !!!\n";
                                                        check = false;
                                                    }
                                                    else
                                                    {
                                                        if(chOption == 'y' || chOption == 'Y')
                                                            payment = true;
                                                    }

                                                }while(!check);
                                                
                                                // fill Staff data
                                                locStd->set_std_name(Name);
                                                locStd->set_std_birthday(birthDay);
                                                locStd->set_std_email(email);
                                                locStd->set_std_semesterNr(semesterNr);
                                                locStd->set_std_studyYearStart(studyYearStart);
                                                locStd->set_std_faculty(locFac->get_fac_name());
                                                locStd->set_std_department(locDep->get_dep_name());

                                                // add to faculty in the vector
                                                locDep->set_dep_new_Student_autoID(*locStd);
                                            }
                                            else
                                            {
                                                cout<<"\n\n\t- There are no departments assigned into This Faculty.\n";
                                                goto Section4;
                                            }

                                        }
                                        else
                                        {
                                            cout<<"\n\n\t- There are no Faculties there Man.\n";
                                            goto Section4;
                                        }
                                    }

                                    goto Section4;
                                }
                                else // Add or Remove Course
                                {
                                    // Section label
                                    Section9:


                                    do
                                    {
                                        check = true;

                                        cout<<"\n\n\t- Your Options are: \n"
                                            <<"\n\t1- Add a Course.\n"
                                            <<"\n\t2- Remove a Course.\n"
                                            <<"\n\t3- go back.\n"
                                            <<"\n\t- Your Option Nr. is: ";
                                        cin>>option;

                                        // input validation
                                        if(cin.fail() || option > 3 || option < 1)
                                        {
                                            cin.clear();
                                            cin.ignore(10000, '\n');
                                            cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                            check = false;
                                        }
                                        else
                                        {
                                            if(option == 3)
                                                goto Section4;
                                        }

                                    }while(!check);

                                    // remove course
                                    if(option == 2)
                                    {
                                        cout<<"\n\n\t- To Remove a Course, plz pick its Faculty first: \n";
                                    
                                        vFac = admin->get_emp_Fac();

                                        if(!vFac->empty())
                                        {
                                            do{
                                                check = true;


                                                // print Faculties
                                                count = 0;
                                                vector<Faculty>::iterator it;
                                                for( it = vFac->begin(); it != vFac->end(); it++)
                                                {

                                                    cout<<"\n\n\t"<<++count<<"- "<<it->get_fac_name()<<" Faculty\n";
                                                }

                                                // let admin select a Faculty
                                                cout<<"\n\n\t- Plz pick a Faculty Nr. from above: ";
                                                cin>>option;

                                                // input validation
                                                if(cin.fail() || option > count || option < 1)
                                                {
                                                    cin.clear();
                                                    cin.ignore(10000, '\n');
                                                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                    check = false;
                                                }
                                                else
                                                    *locFac = (*vFac)[--option];
                                                
                                            }while(!check);

                                            cout<<"\n\n\t- Plz pick a Department: ";

                                            vDep = locFac->get_dep_in_fac();

                                            if(!vDep->empty())
                                            {
                                                // print the departments
                                                count = 0;

                                                vector<Department>::iterator it;
                                                for( it = vDep->begin(); it != vDep->end(); it++)
                                                    cout<<"\n\t- Department #"<<++count<<" :"<< it->get_dep_name()<<'\n';
                                                
                                                do{
                                                    check = true;

                                                    // get Department from user
                                                    cout<<"\n\n\t- Plz pick a Department Nr.: ";
                                                    cin>>option;

                                                    // input validation
                                                    if(cin.fail() || option > count || option < 1)
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                        check = false;
                                                    }
                                                    else
                                                        *locDep = (*vDep)[--option];
                                                    
                                                }while(!check);

                                                
                                                do{
                                                    check = true;

                                                    // get Course Name
                                                    cout<<"\n\n\t- Enter Course Name: ";
                                                    cin>>Name;

                                                    // input validation
                                                    if(cin.fail())
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value 1, plz try again. !!!\n";
                                                        check = false;
                                                    }
                                                    else
                                                    {
                                                        locCrs = locDep->get_dep_course(ID);

                                                        if(locCrs)
                                                            delete locCrs;
                                                        else
                                                        {
                                                            cout<<"\n\n\t- This ID was not found, plz try again.\n";
                                                            check = false;
                                                        }
                                                    }
                                                }while(!check);
                                            }
                                            else
                                            {
                                                cout<<"\n\n\t- There are no departments assigned into This Faculty.\n";
                                                goto Section4;
                                            }
                                        }
                                        else
                                        {
                                            cout<<"\n\n\t- There are no Faculties there Man.\n";
                                            goto Section4;
                                        }
                                    }
                                    else // add course
                                    {
                                        cout<<"\n\n\t- To Add a Course, plz pick his Faculty first: \n";
                                    
                                        vFac = admin->get_emp_Fac();

                                        if(!vFac->empty())
                                        {
                                            do{
                                                check = true;


                                                // print Faculties
                                                count = 0;
                                                vector<Faculty>::iterator it;
                                                for( it = vFac->begin(); it != vFac->end(); it++)
                                                {

                                                    cout<<"\n\n\t"<<++count<<"- "<<it->get_fac_name()<<" Faculty\n";
                                                }

                                                // let admin select a Faculty
                                                cout<<"\n\n\t- Plz pick a Faculty Nr. from above: ";
                                                cin>>option;

                                                // input validation
                                                if(cin.fail() || option > count || option < 1)
                                                {
                                                    cin.clear();
                                                    cin.ignore(10000, '\n');
                                                    cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                    check = false;
                                                }
                                                else
                                                    *locFac = (*vFac)[--option];
                                                
                                            }while(!check);

                                            cout<<"\n\n\t- Plz pick a Department: ";

                                            vDep = locFac->get_dep_in_fac();

                                            if(!vDep->empty())
                                            {
                                                // print the departments
                                                count = 0;

                                                vector<Department>::iterator it;
                                                for( it = vDep->begin(); it != vDep->end(); it++)
                                                    cout<<"\n\t- Department #"<<++count<<" :"<< it->get_dep_name()<<'\n';
                                                
                                                do{
                                                    check = true;

                                                    // get Department from user
                                                    cout<<"\n\n\t- Plz pick a Department Nr.: ";
                                                    cin>>option;

                                                    // input validation
                                                    if(cin.fail() || option > count || option < 1)
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value, plz try again. !!!\n";
                                                        check = false;
                                                    }
                                                    else
                                                        *locDep = (*vDep)[--option];
                                                    
                                                }while(!check);

                                                // get Course Data

                                                int semesterNr = 0;
                                                string description = "";
                                                int TotalCWM = 0;
                                                int TotalFinalG = 0;
                                                int successG = 0;
                                                
                                                do{
                                                    check = true;

                                                    // get Course Name // validation for name!
                                                    cout<<"\n\n\t- Enter Course Name: ";
                                                    cin>>Name;

                                                    locCrs = locDep->get_dep_course(Name);

                                                    // input validation
                                                    if(cin.fail() || locCrs)
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value 1, Or the Course Name already exist, plz try again. !!!\n";
                                                        check = false;
                                                    }

                                                    // get Course Final Grad
                                                    cout<<"\n\n\t- Enter Course total grade of Final Grade: ";
                                                    cin>> TotalFinalG;

                                                    // input validation
                                                    if(cin.fail())
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value 2, plz try again. !!!\n";
                                                        check = false;
                                                    }
                                                    
                                                    cout<<"\n\n\t- Enter Course total grade of Class Work Marks: ";
                                                    cin>>TotalCWM;
                                                    
                                                    // input validation
                                                    if(cin.fail() || TotalCWM > TotalFinalG)
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value 3, plz try again. !!!\n";
                                                        check = false;
                                                    }

                                                    // get Course min. Success Grade
                                                    cout<<"\n\n\t- Enter Course min. Success Grade:";
                                                    cin>>successG;

                                                    // input validation
                                                    if(cin.fail() || successG > TotalFinalG)
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value 4, plz try again. !!!\n";
                                                        check = false;
                                                    }

                                                    // get Studnt semester Nr.
                                                    cout<<"\n\n\t- Enter Semester Nr.: ";
                                                    cin>>semesterNr;
                                                                                                        
                                                    // input validation
                                                    if(cin.fail() || semesterNr > 10 || semesterNr < 1)
                                                    {
                                                        cin.clear();
                                                        cin.ignore(10000, '\n');
                                                        cout<<"\n\n\t\t\t!!! You entered unvalid value 5, plz try again. !!!\n";
                                                        check = false;
                                                    }

                                                }while(!check);
                                                
                                                // fill Staff data
                                                locCrs->set_crs_name(Name);
                                                locCrs->set_crs_totalCWM(TotalCWM);
                                                locCrs->set_crs_totalFinalG(TotalFinalG);
                                                locCrs->set_crs_successTotalG(successG);
                                                locCrs->set_crs_semNr(semesterNr);

                                                // add to faculty in the vector
                                                locDep->set_dep_new_Course_autoID(*locCrs);
                                            }
                                            else
                                            {
                                                cout<<"\n\n\t- There are no departments assigned into This Faculty.\n";
                                                goto Section4;
                                            }

                                        }
                                        else
                                        {
                                            cout<<"\n\n\t- There are no Faculties there Man.\n";
                                            goto Section4;
                                        }
                                    }
                                }
                            }    
                        }
                    }    
                }
            }
        }
    }
    // go back top
    goto Section1;
}



/*

    -> Discarded Code and commenets:
       ----------------------------
    // a try to put Students separately in a file and retrieve it to speed up the searching Process:
    // --------------------------------------------------------------------------------------------

    // in set Academy:

    // setting the Student objects to its file
    ofstream fileStudent("DB/Students.txt", ios::out|ios::trunc);
    if(fileStudent.is_open())
    {
        
        fileStudent.close();
    }

    // in get Academy:

    // get the Student objects from its file
    ifstream fileStudent("DB/Student.txt");
    if(fileStudent.is_open() && is_empty(fileStudent))
    {
        Student getStudent;
        while(fileAcademy.eof())
        {
            fileStudent.read((char*) &getStudent, sizeof(getStudent) );
            vStd->push_back(getStudent);
        }

    }else cout<<"\n\n\t\t\t!!! Unable to open Student file. !!!\n";

    // Declared Globally

    // Vector of Student declared public to help us for seaching purposes during the runtime
    vector<Student> *vStd = new vector<Student>;


    // setting the Student objects to its file
    ofstream fileStudent("DB/Students.txt", ios::out|ios::trunc);
    if(fileStudent.is_open())
    {
        
        fileStudent.close();
    }


    // vectors of structs (declared globally):
    // -------------------------------------- 

    // creating a vector of objects instead of arrays
    vector<Faculty> vFac;
    vector<Student> vStd;
    vector<Staff> vStff;
    vector<Employee> vEmp;
    vector<Department> vDep;
    vector<Course> vCrs;


    // Student struct (Constructor):
    // ----------------------------
    
    //payment = nullptr; // is that valid Answer: yes but it will be converted to 0 (false)  not a third value as it seems you want to initialize it
            

    // Course struct:
    // -------------

    // our constants should be written out of the struct !
    const int NrOfStudyDays = 120;


    // Fauclty struct:
    // --------------


    // states of Students Nr. of Std the passed percentage for each year and for all the years untill know


    // array sizes which was declared as const variables:
    // -------------------------------------------------


    // our small arrays based Database
    const int FacN = 100;
    const int StaffN = 1000;
    const int DepN = 10;
    const int JobN = 100;
    const int empN = 1000;
    const int stdN = 10000; 
*/