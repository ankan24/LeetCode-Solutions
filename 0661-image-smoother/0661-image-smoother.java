class Solution {
    public int[][] imageSmoother(int[][] img) {
        int r = img.length;
        int c = img[0].length;

        int ans[][] = new int[r][c];

        int neighbour[][] = { {-1,-1} , {-1,0},{-1,1},
                               {0,-1} , {0,0} , {0,1},
                               {1,-1} , {1,0} , {1,1} };

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int sum = 0;
                int count = 0;

                for(int arr[] : neighbour){

                    int a = i+arr[0];
                    int b = j+arr[1];

                    if(a>=0 && b>=0 && a<r && b<c){
                        sum += img[a][b];
                        count++;
                    }
                }
                ans[i][j] = sum/count;
            }
        }
        return ans;
    }
}