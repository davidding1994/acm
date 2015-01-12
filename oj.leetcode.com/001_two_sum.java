import java.util.*;
public class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int[] ret = { 0, 0 };
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        for (int i = 0; i < numbers.length; i++)
            map.put(numbers[i], i + 1);
        for (int i = 0; i < numbers.length; i++) {
            Integer temp = map.get(target - numbers[i]);
            if (temp != null && temp != i + 1) {
                ret[0] = i + 1;
                ret[1] = temp;
                break;
            }
        }
        return ret;
    }
    public static Scanner in = new Scanner(System.in);
    public void solve(){
        while(in.hasNext()) {
            int n = in.nextInt();
            int []numbers = new int [n];
            for (int i = 0; i < n; i ++) {
                numbers[i] = in.nextInt();
            }
            for (int x:twoSum(numbers, in.nextInt())){
                System.out.print(x + " ");
            }
            System.out.println("");
        }
        return ;
    }
    public static void main(String args[]){
        Solution s = new Solution();
        s.solve();
    }
}
