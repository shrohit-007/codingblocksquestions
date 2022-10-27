import java.util.*;
public class Main{
	static int answer=0;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n5=sc.nextInt();
		boolean[][] grid = new boolean[n5][n5];
		N_Queen(grid, n5, 0);
		System.out.println(answer);

	}

	public static void N_Queen(boolean[][] grid, int totalqueens, int row) {
		if (totalqueens == 0) {
			//Display(grid);
			answer++;
			return;
		}
		for (int col = 0; col < grid.length; col++) {
			if (issafe(grid, row, col) == true) {
				grid[row][col] = true;
				N_Queen(grid, totalqueens - 1, row + 1);
				grid[row][col] = false;
			}

		}

	}

	public static boolean issafe(boolean[][] grid, int row, int col) {
		// TODO Auto-generated method stub

		int r = row;
		// vertical
		while (r >= 0) {
			if (grid[r][col] == true) {
				return false;
			}
			r--;
		}

		// left Diagonal
		r = row;
		int c = col;
		while (r >= 0 && c >= 0) {
			if (grid[r][c] == true) {
				return false;
			}
			c--;
			r--;
		}
		// left Diagonal
		r = row;
		c = col;
		while (r >= 0 && c < grid.length) {
			if (grid[r][c] == true) {
				return false;
			}
			c++;
			r--;
		}
		return true;
	}

	private static void Display(boolean[][] grid) {
		// TODO Auto-generated method stub
		String ans="";
		for (int i = 0; i < grid.length; i++) {
			for (int j = 0; j < grid.length; j++) {
				if(grid[i][j]==true)
				{
					ans+="{";
					ans+=i+1;
					ans+="-";
					ans+=j+1;
					ans+="} ";
				}
			}
			//System.out.println();
		}
		System.out.print(ans+" ");
	}
}
