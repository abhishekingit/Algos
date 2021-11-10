public class stackImpl {
    private int maxSize;
    private long[] stackArr;
    private int top;

    public stackImpl(int stackSize) {
        this.maxSize = stackSize;
        stackArr = new long[this.maxSize];
        this.top = -1;
    }

    public void push(long element) {
        if (isFull())
            System.out.println("Stack is full");
        else {
            top++;
            stackArr[top] = element;
        }
    }

    public long pop() {
        long poppedElement;
        if (isEmpty())
            System.out.println("Stack is empty");
        else {
            poppedElement = stackArr[top];
            top--;
            return poppedElement;
        }
        return -1;
    }

    public long peek() {
        return stackArr[top];
    }

    public boolean isEmpty() {
        return (top == -1);
    }

    public boolean isFull() {
        return (top == maxSize - 1);
    }

    public static void main(String[] args) {
        stackImpl s = new stackImpl(5);
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        System.out.println(s.peek());
    }
}