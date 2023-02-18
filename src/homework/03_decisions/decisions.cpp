//write include statement for decisions header
# include "decisions.h"
# include <string>

//Write code for function(s) code here
std::string get_letter_grade_using_if(int grade)
{
  std::string letter_grade;  
    
    if (grade >=90 && grade<=100)
        {return letter_grade="A";}
            else if (grade>=80 && grade < 90)
                {return letter_grade="B";}
                    else if (grade>=70 && grade < 80)
                        {return letter_grade="C";}
                            else if (grade>=60 && grade < 69)
                                {return letter_grade="D";}
                                    else if (grade>=0 && grade < 59)
                                        {return letter_grade="F";}
}
std::string get_letter_grade_using_switch(int grade)
{
    std::string letter_grade;
    switch(grade){
    case 90 ... 100:
        return letter_grade="A";
    break;
    case 80 ... 89:
        return letter_grade="B";
    break;
    case 70 ... 79:
        return letter_grade="C";
    break;
    case 60 ... 69:
        return letter_grade="D";
    break;
    case 0 ... 59:
        return letter_grade="F";
    break;
    }
}