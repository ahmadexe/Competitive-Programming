import java.util.Arrays;

public class perfectSum{
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5};
        int sum = 4;
        perfect(arr, sum);
    }
    public static void perfect(int[] arr, int number){
        Arrays.sort(arr);
        int left = 0;
        int right = arr.length-1;
        while (left < right){
            if (arr[left] + arr[right] == number){
                System.out.print("The values are "+arr[left]+" "+arr[right]);
                left++;
                right--;
            }
            else if (arr[left] + arr[right] < number){
                left++;
            }
            else{
                right--;
            }
        }
    }
}