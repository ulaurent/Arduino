/* A student class defines a student of having a name and a set of grades.
* It will include a
* setName(); set the name of the student
* readGrades(); read the set of grades for each student
* overallGrade(); Returns (as a double) the overall grade of a student */


import java.util.Scanner;

public class Student {

    private String name;
    private double programGrade;
    private double examGrade;

    public Student(){

    }

    public Student(String name){
        this.name = name;
    }

    public void setName(String nameIn){
        name = nameIn;
    }

    // Prompts the user to enter grades in for a student
    public void readGrades(){
        Scanner keyboard = new Scanner(System.in);

        System.out.println("Please, enter the program grade and exam grade for "+ name + ":");
        programGrade = keyboard.nextDouble();
        examGrade = keyboard.nextDouble();
    }

    public double overallGrade(){
        final double
                PROGRAM_WEIGHT = 0.40;
                final double EXAM_WEIGHT = 1 - PROGRAM_WEIGHT; // Exam & Program grade wight in class

        double overallGrade = (programGrade * PROGRAM_WEIGHT)+(examGrade * EXAM_WEIGHT);

        System.out.println("The overall Grade for "+ name + ": "+ overallGrade);
        return overallGrade;
    }

}
