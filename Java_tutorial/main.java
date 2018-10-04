/* Gradually upgrading a Mathe Equationg program basics*/

public class Main {

    public static void main(String[] args) {


        // your declaring an array of Mathequations called equations
        // Then your instantiate equations using the 'new' op. and set the size of the array to 4
        // so each index of the equations array will be of type MathEquations
        // so being of type MathEquations comes with different variables to make up that type
        MathEquation[] equations = new MathEquation[4];

        //equations[0] = new MathEquation(); // Instead of that, see next line
        equations[0] = create(1.0, 3.2, 'a');
        equations[1] = create(4.5, 7.8, 'b');
        equations[2] = create(2.1,7.8,'c');
        equations[3] = create(5.6,0.0, 'd');


        //for each loop
        for (MathEquation i: equations){
            i.execute();
            //System.out.println(i);
            System.out.println("result = "+i.getResults());
        }

        System.out.println();
        System.out.println("USING OVERLOADS");
        System.out.println();

        double leftDouble = 9.0d;
        double rightDouble = 4.0d;
        int leftInt = 9;
        int rightInt = 4;


        MathEquation equationOverload = new MathEquation('d');

        equationOverload.execute(leftInt,rightInt);

        System.out.println("results ==");
        System.out.println(equationOverload.getOpCodes());
        System.out.println(equationOverload.getResults());


        /*Set the full names of People class*/
        Name student1 = new Name();
        student1.setFirst("Lavhana");
        student1.setLast("Towns");
        System.out.println("Hi my first name is: "+ student1.getFirst());
        System.out.println("My last name is: "+ student1.getLast());
        student1.displayString();


        // Student receiving overall Grades

        Student Ben = new Student("Ben");

        Ben.readGrades();

        Ben.overallGrade();

        //System.out.println("Overall Grade is : "+Ben.overallGrade());
    }

    // This function create takes in 3 args, and when called, you have to have 3 args, and it will set the args equal
    // to the variables that make up the type MathEquation
    public static MathEquation create (double leftVal, double rightVal, char opCode) {
        MathEquation equations = new MathEquation();
        equations.setLeftVals(leftVal);
        equations.setRightVals(rightVal);
        equations.setOpCodes(opCode);

        return equations;
    }
}
