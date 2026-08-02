class MedianFinder {
public:
    vector<int> arr;
    MedianFinder() {
    }

    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        bool swapped;
    
        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
        
            // If no two elements were swapped, then break
            if (!swapped)
                break;
        }
    }
    
    void addNum(int num) {
        arr.push_back(num);
    }
    
    double findMedian() {
        bubbleSort(arr);
        
        int mid = arr.size() / 2;
        int size = arr.size();
        double median = 0;
        if(size % 2 == 0){
            median = (arr[mid - 1] + arr[mid]) / 2.0;
        } else {
            median = arr[mid];
        }

        return median;
    }
};
