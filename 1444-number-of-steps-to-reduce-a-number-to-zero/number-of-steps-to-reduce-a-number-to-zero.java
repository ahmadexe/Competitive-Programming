class Solution {
    public int recursion(int num, int steps){
        if (num == 0) {
            return steps;
        }
        if (num%2 == 0){
            return recursion (num/2, steps+1);
        }
        return recursion (num-1, steps+1);
    }

    public int numberOfSteps(int num) {
        return recursion (num, 0);
    }
}