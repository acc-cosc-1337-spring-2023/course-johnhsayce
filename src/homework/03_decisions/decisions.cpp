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