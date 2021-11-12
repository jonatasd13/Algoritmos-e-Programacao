package Exercicio10;

import javax.swing.JOptionPane;
public class FuncVIEW {
    public static void main(String args[]){
        try{
            FuncDTO funcDTO = new FuncDTO();
            FuncCTR funcCTR = new FuncCTR();
            
            funcDTO.setCodigo(Integer.parseInt(JOptionPane.showInputDialog("Informe o código do funcionário")));
            funcDTO.setTelefone(Integer.parseInt(JOptionPane.showInputDialog("Informe o telefone do funcionário")));
            
            JOptionPane.showMessageDialog(null, funcCTR.mostrar(funcDTO));
        }
        catch (Exception e){
            JOptionPane.showMessageDialog(null, "Erro no sistema: " + e.getMessage());
        }
    }
}
