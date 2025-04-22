class AutoUnbox {
    public static void main(String[] args) {
        Byte bObj = 10;
        Short sObj = 20;
        Integer iObj = 30;
        Long lObj = 40L;
        Float fObj = 50.5f;
        Double dObj = 60.6;
        Character cObj = 'A';
        Boolean boolObj = true;
        byte b = bObj;
        short s = sObj;
        int i = iObj;
        long l = lObj;
        float f = fObj;
        double d = dObj;
        char c = cObj;
        boolean bool = boolObj;
        System.out.println("Autoboxed Values:");
        System.out.println(bObj + " " + sObj + " " + iObj + " " + lObj + " " + fObj + " " + dObj + " " + cObj + " " + boolObj);
        System.out.println("\nUnboxed Values:");
        System.out.println(b + " " + s + " " + i + " " + l + " " + f + " " + d + " " + c + " " + bool);
    }
}
