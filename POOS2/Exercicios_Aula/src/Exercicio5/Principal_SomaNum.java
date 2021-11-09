package Exercicio5;
import javax.swing.JOptionPane;
public class Principal_SomaNum {
    public static void main(String args[]){
        SomaNum soma = new SomaNum();
        
        int nota, resultado = 0;
        
        for(int cont=1; cont<=10; cont++){
            nota = Integer.parseInt(JOptionPane.showInputDialog("Informe a " + cont + "ª nota"));
            resultado += nota;
        }
        
        soma.mostrar(resultado);
    }
}
