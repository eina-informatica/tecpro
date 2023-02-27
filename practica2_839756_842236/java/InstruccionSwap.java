import java.util.Stack;

public class InstruccionSwap extends Instruccion {
    @Override
    public void ejecutar(Stack<Integer> s) {
        int x = s.pop();
        int y = s.pop();
        s.push(x);
        s.push(y);
    }

    @Override
    public void listar() {
        System.out.println("swap");
    }
}
