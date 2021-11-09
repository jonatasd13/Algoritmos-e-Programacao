package Exercicio3;
import javax.swing.JOptionPane;
public class Calculo2 {
    private float salariof, comissao;
    public void mostrar(float salariof, float comissao){
        this.salariof = salariof;
        this.comissao = comissao;
        JOptionPane.showMessageDialog(null, "O salário final é: " + this.salariof + " A comissão sobre as vendas são: " + this.comissao);
    }
}
