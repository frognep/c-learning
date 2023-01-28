#include <iostream>

int main()
{
    int run_again {1};
    char user_response { };
    int user_num { }; 
    int first_digit { };
    int second_digit { };
    // int y=0;
    
    while (run_again != 0)
    {
        std::cout << "Enter a two-digit number: ";
        std::cin >> user_num;

        first_digit = user_num / 10;
        second_digit = user_num % 10;

        if (user_num == 10)
        {
            std::cout << "   Your number is: Ten\n";
        }
        else if (user_num == 11)
        {
            std::cout << "   Your number is: Eleven\n";
        }
        else if (user_num == 12)
        {
            std::cout << "   Your number is: Twelve\n";
        }
        else if (user_num == 13)
        {
            std::cout << "   Your number is: Thirteen\n";
        }
        else if (user_num == 14)
        {
            std::cout << "   Your number is: Fourteen\n";
        }
        else if (user_num == 15)
        {
            std::cout << "   Your number is: Fifteen\n";
        }
        else if (user_num == 16)
        {
            std::cout << "   Your number is: Sixteen\n";
        }
        else if (user_num == 17)
        {
            std::cout << "   Your number is: Seventeen\n";
        }
        else if (user_num == 18)
        {
            std::cout << "   Your number is: Eighteen\n";
        }
        else if (user_num == 19)
        {
            std::cout << "   Your number is: Nineteen\n";
        }
        else if (user_num == 20)
        {
            std::cout << "   Your number is: Twenty\n";
        }
    // -------------------------------------------------//
        if (first_digit == 2 and user_num != 20)
        {
            std::cout << " Your number is: Twenty";
        }
        else if (first_digit == 3)
        {
            std::cout << "   Your number is: Thirty";
        }
        else if (first_digit == 4)
        {
            std::cout << "   Your number is: Fourty";
        }
        else if (first_digit == 5)
        {
            std::cout << "   Your number is: Fifty";
        }
        else if (first_digit == 6)
        {std::cout << "   Your number is: Sixty";
        }
        else if (first_digit == 7)
        {
            std::cout << "   Your number is: Seventy";
        }
        else if (first_digit == 8)
        {
            std::cout << "   Your number is: Eighty";
        }
        else if (first_digit == 9)
        {
            std::cout << "   Your number is: Ninety";
        }
    // -------------------------------------------------//

        if (first_digit != 1)
        {
            if (second_digit == 1)
            {
                std::cout << "-one \n";
            }
            else if (second_digit == 2)
            {
                std::cout << "-two \n";
            }
            else if (second_digit == 3)
            {
                std::cout << "-three \n";
            }
            else if (second_digit == 4)
            {
                std::cout << "-four \n";
            }
            else if (second_digit == 5)
            {
                std::cout << "-five \n";
            }
            else if (second_digit == 6)
            {
                std::cout << "-six \n";
            }
            else if (second_digit == 7)
            {
                std::cout << "-seven \n";
            }
            else if (second_digit == 8)
            {
                std::cout << "-eight\n ";
            }
            else if (second_digit == 9)
            {
                std::cout << "-nine \n";
            }
        }

        std::cout << "Would you like to try again?(y/n):  ";
        std::cin >> user_response;
        
        if (user_response == 'n')
        {
            run_again = 0;
        }
    }
// -------------------------------------------------//
}
