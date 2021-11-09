package Exercicio2;
import javax.swing.JOptionPane;
public class Principal_Calculo {
    public static void main(String[] args){
        Calculo calculo = new Calculo();
        
        float salario, salariof, aumento;
        
        salario = Integer.parseInt(JOptionPane.showInputDialog("Informe o salário do funcionário"));
        aumento = Integer.parseInt(JOptionPane.showInputDialog("Informe o aumento em porcentagem"));
        salariof = salario + (salario * (aumento/100));
        
        calculo.mostrar(salariof);
    }
}
