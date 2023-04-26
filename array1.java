class array1 {
        public static void main(String args[])
            {
                int i,j;
                Scanner sc=new Scanner(System.in);
                int rows=sc.nextInt();
                int cols=sc.nextInt();
                int numbers[][]=new int[rows][cols];
                for(i=0;i<rows;i++)
                {
                for(j=0;j<cols;j++)
        {
        numbers[i][j]=sc.nextInt();
        }
            }
        for(i=0;i<rows;i++)
        {
            for(j=0;j<cols;j++)
            {
            System.out.print(numbers[i][j] + "  ");
            }
            System.out.println();
        }
            }
        }
            
        
        

