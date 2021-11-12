package Exercicio11;

public class FuncDAO {
    public String mostrar(FuncDTO funcDTO){
        
        if(funcDTO.getIdade() >= 18){
            return "A idade informada foi: " +
                    funcDTO.getIdade() +
                    "\nO motorista pode possuir uma CNH!";
        } else {
            return "A idade informada foi: " +
                    funcDTO.getIdade() +
                    "\nO motorista não pode possuir uma CNH!";
        }
    }
}