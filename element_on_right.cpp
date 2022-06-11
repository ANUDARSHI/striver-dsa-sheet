 public int[] replaceElements(int[] arr) {
        int next = -1;
        int temp = 0;
        for(int i = arr.length - 1 ; i >=0; i--) {
            if(arr[i] > next) {
                temp = arr[i];
                arr[i] = next;
                next = temp;
            } else {
                arr[i] = temp;
            }
        }
        return arr;
    }
