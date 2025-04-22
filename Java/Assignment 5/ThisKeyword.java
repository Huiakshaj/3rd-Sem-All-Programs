class ThisKeyword {
    int num;
    ThisKeyword(int num) {
        this.num = num;
    }
    void display() {
        System.out.println("Value of num: " + this.num);
    }
    public static void main(String[] args) {
        ThisKeyword obj = new ThisKeyword(10);
        obj.display();
    }
}
