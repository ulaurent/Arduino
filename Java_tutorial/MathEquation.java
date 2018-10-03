public class MathEquation {
    private double leftVals;
    private double rightVals;
    private char opCodes;
    private double results;

    public double getLeftVals() {
        return leftVals;
    }

    public void setLeftVals(double leftVals) {
        this.leftVals = leftVals;
    }

    public double getRightVals() {
        return rightVals;
    }

    public void setRightVals(double rightVals) {
        this.rightVals = rightVals;
    }

    public char getOpCodes() {
        return opCodes;
    }

    public void setOpCodes(char opCodes) {
        this.opCodes = opCodes;
    }

    public double getResults() {
        return results;
    }

    /*Demonstration of overloading of constructors (same method name, different parameters)*/
    public MathEquation (){}

    public MathEquation(char opCodes){
        this.opCodes =opCodes;
    }

    public MathEquation(char opCodes, double leftVals, double rightVals){
        this(opCodes);
        this.leftVals = leftVals;
        this.rightVals = rightVals;
    }

    public void execute (double leftVals, double rightVals){
        this.leftVals = leftVals;
        this.rightVals = rightVals;

        execute();
    }

    public void execute(){
        if(opCodes == 'a'){
            results = leftVals + rightVals;

        }
        else if(opCodes == 'b'){
            results = leftVals + rightVals;

        }
        else if(opCodes == 'c'){
            results = leftVals + rightVals;

        }
        else if(opCodes == 'd'){
            results = rightVals != 0.0d? leftVals / rightVals: 0.0d; // rightVal[i] not equal to zero? then left / right, otherwise equal to zero

        }
    }
}
