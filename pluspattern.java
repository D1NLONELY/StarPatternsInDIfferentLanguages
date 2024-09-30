import java.util.*;
public class pluspattern{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        for(int i=0;i<((2*size)+1);i++){
            if(i!=(size)){
                for(int j=0;j<size;j++){
                    System.out.print(' ');
                }
                System.out.print('+');
                for(int j=0;j<size;j++){
                    System.out.print(' ');
                }
            }
            else{
                for(int j=0;j<((2*size)+1);j++){
                    System.out.print('+');
                }
            }
            System.out.print('\n');
        }
        sc.close();
    }
}