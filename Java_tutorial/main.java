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
