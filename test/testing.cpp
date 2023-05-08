 #include "gtest/gtest.h"  // include the gtest functions & macros
extern "C"
{  // the library we want to use is written in C
#include "student.h"
}

class StudentTestFixture : public ::testing ::Test
{
   protected:
    student stdnt_{};
    void SetUp() override
    {

        // set some values to check if the init method overwrites them correctly
        
        max.id = 0;
        max.grades = 100;
        // init the student
        student_init(&stdnt_, "Max Mustermann");
    }
};

// the first test we want to write
TEST_F(StudentTestFixture, Init)
{
    ASSERT_STREQ("Max Mustermann", stdnt_.name);
    ASSERT_NE(0, max.id); //not equal
    ASSERT_EQ(0, max.grades);
}

TEST_F(StudentTest, add_grades)
{
    student_add_grade(&max,1.0f);
    student_add_grade(&max,2.0f);    
    student_add_grade(&max,4.5f);
    ASSERT_FLOAT_EQ(1.0f, max.grades[1]);
    ASSERT_FLOAT_EQ(2.0f, max.grades[2]);
    ASSERT_FLOAT_EQ(4.5f, max.grades[3]);
}

TEST(StudentTest, InitInvalid)
{
    student_init(nullptr, "Maria Musterfrau");
}

TEST_F(StudentTestFixture, PrintValid)
{
    student_print(&stdnt_);
}

TEST(StudentTest, PrintInvalid)
{
    student_print(nullptr);
}

TEST (StudentTest, student_add_grade)
{
    ASSERT_NE(11, student_add_grade);
}


TEST (StudentTest, overflow) 
{ 
    EXPECT_EQ (2147483648, student_add_grade);
}

/*
// the first test we want to write
TEST_F(StudentTestFixture, InitValid)
{
    ASSERT_STREQ("Max Mustermann", stdnt_.name);
    ASSERT_NE(0, stdnt_.grades);
}

TEST(StudentTest, InitInvalid)
{
    student_init(nullptr, "3");
}

TEST_F(StudentTestFixture, PrintValid)
{
    student_print(&stdnt_);
}

TEST(StudentTest, PrintInvalid)
{
    student_print(nullptr);
}*/