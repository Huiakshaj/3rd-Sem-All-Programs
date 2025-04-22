class WrapperMethods {
    public static void main(String[] args) {
        Integer intObj = Integer.valueOf(100);
        Double doubleObj = Double.valueOf("20.5");
        Boolean boolObj = Boolean.valueOf("true");
        int intVal = intObj.intValue();
        double doubleVal = doubleObj.doubleValue();
        boolean boolVal = boolObj.booleanValue();
        int parsedInt = Integer.parseInt("200");
        double parsedDouble = Double.parseDouble("30.7");
        boolean parsedBool = Boolean.parseBoolean("false");
        System.out.println("Using valueOf(): " + intObj + ", " + doubleObj + ", " + boolObj);
        System.out.println("Using XXXValue(): " + intVal + ", " + doubleVal + ", " + boolVal);
        System.out.println("Using parseXXX(): " + parsedInt + ", " + parsedDouble + ", " + parsedBool);
    }
}
