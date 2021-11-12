package Exercicio11;

public class FuncCTR {
    FuncDAO funcDAO = new FuncDAO();
    
    public String mostrar(FuncDTO funcDTO){
        return funcDAO.mostrar(funcDTO);
    }
}
