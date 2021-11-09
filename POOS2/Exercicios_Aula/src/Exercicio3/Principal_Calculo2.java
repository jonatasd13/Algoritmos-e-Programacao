package Exercicio3;
import javax.swing.JOptionPane;
public class Principal_Calculo2 {
    public static void main(String[] args){
        Calculo calculo = new Calculo();
        
        float salario, salariof, vendas, comissao;
        
        salario = Integer.parseInt(JOptionPane.showInputDialog("Informe o salário do funcionário"));
        vendas = Integer.parseInt(JOptionPane.showInputDialog("Informe as vendas do funcionário"));
        comissao = (float) (vendas*0.04);
        salariof = salario + comissao;
        
        calculo.mostrar(salariof, comissao);
    }
}
