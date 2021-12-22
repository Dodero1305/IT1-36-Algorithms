#include <iostream>
using namespace std;
/*Độ  phức tạp thuật toán của quick sort
Trường hợp tốt: O(nlog(n))
Trung bình: O(nlog(n))
Trường hợp xấu: O(n^2)
Không gian bộ nhớ sử dụng: O(log(n))
*/

//
int partition(int arr[], int low, int high)   // thuật toán phân đoạn
{
	int pivot = arr[high];      //pivot là phần tử so sánh
	int left = low;
	int right = high - 1;

	while(true){
        while(left <= right && arr[left] < pivot) 	//tìm phần tử >= arr[pivot]
			left++;
        while(right >= left && arr[right] > pivot)	//tìm phần tử <= arr[pivot]
			right--;
        if (left >= right)		// duyệt xong thì thoát khỏi vòng lặp
			break;
        swap(arr[left], arr[right]);     // nếu chưa duyệt xong thì đổi chỗ
        
        left++;
        right--;
    }
    swap(arr[left], arr[high]);
    return left;		// trả về chỉ số sẽ dùng để chia, đổi mảng
}
	
// hàm thực hiện quick sort
void quick_sort(int arr[], int low, int high) 
{
	if(low < high)
	{
		int local=partition(arr, low, high);	//local là nơi phần tử này đứng chia hai mảng thành trái phải

		quick_sort(arr, low,  local -1);	// gọi đệ quy sắp xếp mảng trái
		quick_sort(arr, local + 1, high);	// gọi đệ quy sắp xếp mảng phải
	}
}

void print_array(int printarr[],int size_array)			// hàm in các mảng ra khi đã biết kích thước mảng
{
	for (int i = 0; i < size_array; i++)
	cout << printarr[i];
}

int main()
{
	
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i< n; i++)
		cin >> arr[i];
	quick_sort(arr, 0, n-1);
	print_array(arr, n);
	return 0;
	
}

