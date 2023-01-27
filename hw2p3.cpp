#include <iostream>

int main()
{
    int total_students { };
    int baseball_count { };
    int basketball_count { };
    int football_count { };
    int soccer_count { };
    int sport_answer { };

    std::cout << "Number of students in the class: ";
    std::cin >> total_students;
    std::cout << std::endl;
    
    int student_counter { 1 };

    while (student_counter != total_students + 1)
    {
        std::cout << "Student " << student_counter << std::endl;
        student_counter = student_counter + 1;

        std::cout << "Which of the following sport you like the most:\n" 
                  << "1. Baseball\n"
                  << "2. Basketball\n"
                  << "3. Football\n"
                  << "4. Soccer\n"
                  << "Enter your answer: ";
        std::cin  >> sport_answer;

        if (sport_answer == 1)
        {
            baseball_count = baseball_count + 1;
        }
        else if (sport_answer == 2)
        {
            basketball_count = basketball_count + 1;
        }
        else if (sport_answer == 3)
        {
            football_count = football_count + 1;
        }
        else
        {
            soccer_count = soccer_count + 1;
        }

        std::cout << "\n";
    }

    std::cout << "Final answer after " << total_students << " students:\n"
              << "==============================\n"
              << "There are "          << total_students << " in the class\n";

    float baseball_percentage = { };
    float basketball_percentage = { };
    float football_percentage = { };
    float soccer_percentage = { };

    baseball_percentage = static_cast < double >(baseball_count) / total_students;
    basketball_percentage = static_cast < double >(basketball_count) / total_students;
    football_percentage = static_cast < double >(football_count) / total_students;
    soccer_percentage = static_cast < double >(soccer_count) / total_students;

    std::cout << baseball_percentage * 100 << "% of students like baseball" <<"\n";
    std::cout << basketball_percentage * 100 << "% of students like basketball" <<"\n";
    std::cout << football_percentage * 100 << "% of students like football" <<"\n";
    std::cout << soccer_percentage * 100 << "% of students like soccers" <<"\n";

    return 0;
}