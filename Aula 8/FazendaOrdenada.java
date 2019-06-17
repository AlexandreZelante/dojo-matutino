import java.util.*;

class Gado{

    public Gado(String nome, int idade, int saldoDeCones){
        this.nome = nome;
        this.idade = idade;
        this.saldoDeCones = saldoDeCones;
        //laora me da um cone pf
    }
    
    String nome;
    int idade;
    private int saldoDeCones;

    public int getSaldo(){
    	return this.saldoDeCones; 
    }
    public void deposita(int cone){
    	this.saldoDeCones += cone;
    }
    public void saque(int cone){
    	this.saldoDeCones -= cone;
    }

    public static void exibeGado(Gado[] boiada){
        System.out.println("Digite a posicao do gado: "); //joao gado maior
        Scanner sc = new Scanner(System.in);
        int i = sc.nextInt();
        System.out.println("Nome: " + boiada[i].nome);
        System.out.println("Idade: " + boiada[i].idade);
        System.out.println("Saldo de Cones: " + boiada[i].getSaldo());
    }

    public static void exibeBoiada(Gado[] boiada){
        System.out.println("Aqui esta nossa boiada: ");
        for(int i = 0; i < 10; i++){
            System.out.println(boiada[i].nome + " " + boiada[i].idade + " " + boiada[i].getSaldo());
        }
    }

    public static void ordenaBoiada(Gado[] boiada){
        for(int j = 0; j < boiada.length-1; j++){
            for(int i = 0; i < boiada.length-j-1; i++){
                if(boiada[i].idade > boiada[i+1].idade){
                    Gado auxGado = boiada[i];
                    boiada[i] = boiada[i+1];
                    boiada[i+1] = auxGado;
                }
            }    
        }
    }
}

public class FazendaOrdenada{
    public static void main(String[] args){
        Gado[] boiada = new Gado[10];
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i < 10; i++) {
            String nome = sc.nextLine();
            int idade = Integer.parseInt(sc.nextLine());
            int saldoDeCones = Integer.parseInt(sc.nextLine());
            Gado boi = new Gado(nome, idade,saldoDeCones);

         	// int qtdCone;
        	// qtdCone = Integer.parseInt(sc.nextLine());
        	// boi.deposita(qtdCone);
            boiada[i] = boi;

        }

        Gado.exibeGado(boiada);
        System.out.println();
        System.out.println("----Boiada não ordenada---- ");
        Gado.exibeBoiada(boiada);
        System.out.println();
        Gado.ordenaBoiada(boiada);
        System.out.println("----Boiada ordenada----");
        Gado.exibeBoiada(boiada);
    }
}
