package Exercicio11;

import javax.swing.JOptionPane;
public class FuncVIEW {
    public static void main(String args[]){
        try{
            FuncDTO funcDTO = new FuncDTO();
            FuncCTR funcCTR = new FuncCTR();
            
            funcDTO.setIdade(Integer.parseInt(JOptionPane.showInputDialog("Informe a idade do motorista")));

            JOptionPane.showMessageDialog(null, funcCTR.mostrar(funcDTO));
        }
        catch (Exception e){
            JOptionPane.showMessageDialog(null, "Erro no sistema: " + e.getMessage());
        }
    }
}
