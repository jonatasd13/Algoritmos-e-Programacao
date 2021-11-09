package Exemplo_Aula5;
import javax.swing.JOptionPane;
public class Principal_Tabuada {
    public static void main(String args[]){
        Tabuada tabuada = new Tabuada();
        JOptionPane.showMessageDialog(null, 
                tabuada.calcular_Tabuada(Integer.parseInt(
                JOptionPane.showInputDialog(
                        "Informe o número para calcular a tabuada")))
        );
    }
}
