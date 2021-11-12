package Exercicio10;

public class FuncDAO {
    public String mostrar(FuncDTO funcDTO){
        return "O código informado foi: " +
                funcDTO.getCodigo() + 
               "\nO telefone informadao foi: " +
                funcDTO.getTelefone();
    }
}
