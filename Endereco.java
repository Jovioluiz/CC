/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cadastro;

/**
 *
 * @author usuario
 */
public class Endereco {
    public String rua, bairro, cidade, sigla_estado, cep;
    int numero;
    
    public Endereco(String Rua,  int Numero, String Bairro, String Cidade, String Sigla_estado, String Cep){
        rua=Rua;
        numero=Numero;
        bairro=Bairro;
        cidade=Cidade;
        sigla_estado=Sigla_estado;
        cep=Cep;
        
    }
}
