
package cadastro;

import java.util.Scanner;


public class Cadastro {

    public static void main(String[] args) {
        String rua, bairro, cidade, sigla_estado, cep;
        int numero;
        
        Scanner entrada = new Scanner (System.in);
        
        System.out.println("Rua: ");
        rua = entrada.nextLine();
        System.out.println("Número: ");
        numero = entrada.nextInt();
        entrada.nextLine();
        System.out.println("Bairro: ");
        bairro = entrada.nextLine();
        System.out.println("Cidade: ");
        cidade = entrada.nextLine();
        System.out.println("Estado: ");
        sigla_estado = entrada.nextLine();
        System.out.println("CEP: ");
        cep = entrada.nextLine();
        
        Endereco jovio = new Endereco(rua, numero, bairro, cidade, sigla_estado, cep);
        System.out.print("\n\n");
        System.out.printf("Rua: %s\n", jovio.rua);
        System.out.printf("Numero: %d\n", jovio.numero);
        System.out.printf("Bairro: %s\n", jovio.bairro);
        System.out.printf("Cidade: %s\n", jovio.cidade);
        System.out.printf("Estado: %s\n", jovio.sigla_estado);
        System.out.printf("CEP: %s\n", jovio.cep);
        
    }
    
}
