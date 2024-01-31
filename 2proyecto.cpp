#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

// Función para generar un vector de números aleatorios
std::vector<int> generarNumeros(int n) {
    std::vector<int> numeros(n);
    std::srand(std::time(0));
    for(int i = 0; i < n; i++) {
        numeros[i] = std::rand() % 100;
    }
    return numeros;
}

// Función para imprimir un vector
void imprimirVector(const std::vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

// Implementación del algoritmo de ordenamiento Bubble Sort
int bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    int intercambios = 0;
    for(int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
                intercambios++;
            }
        }
    }
    return intercambios;
}

// Implementación del algoritmo de ordenamiento Insertion Sort
int insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    int intercambios = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            intercambios++;
        }
        arr[j + 1] = key;
    }
    return intercambios;
}

// Implementación del algoritmo de ordenamiento Selection Sort
int selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    int intercambios = 0;
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        std::swap(arr[min_idx], arr[i]);
        intercambios++;
    }
    return intercambios;
}

// Implementación del algoritmo de ordenamiento Counting Sort
int countingSort(std::vector<int>& arr) {
    int n = arr.size();
    int intercambios = 0;
    int max = *max_element(arr.begin(), arr.end());
    std::vector<int> count(max+1, 0);
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int index = 0;
    for(int i = 0; i <= max; i++) {
        while(count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
            intercambios++;
        }
    }
    return intercambios;
}

// Implementación del algoritmo de ordenamiento Quick Sort
int partition(std::vector<int>& arr, int low, int high, int& intercambios) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
            intercambios++;
        }
    }
    std::swap(arr[i + 1], arr[high]);
    intercambios++;
    return (i + 1);
}

void quickSort(std::vector<int>& arr, int low, int high, int& intercambios) {
    if (low < high) {
        int pi = partition(arr, low, high, intercambios);
        quickSort(arr, low, pi - 1, intercambios);
        quickSort(arr, pi + 1, high, intercambios);
    }
}

int quickSort(std::vector<int>& arr) {
    int intercambios = 0;
    quickSort(arr, 0, arr.size() - 1, intercambios);
    return intercambios;
}

// Implementación del algoritmo de ordenamiento Merge Sort
void merge(std::vector<int>& arr, int l, int m, int r, int& intercambios) {
    int n1 = m - l + 1;
    int n2 = r - m;
    std::vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
            intercambios += n1 - i;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& arr, int l, int r, int& intercambios) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m, intercambios);
        mergeSort(arr, m + 1, r, intercambios);
        merge(arr, l, m, r, intercambios);
    }
}

int mergeSort(std::vector<int>& arr) {
    int intercambios = 0;
    mergeSort(arr, 0, arr.size() - 1, intercambios);
    return intercambios;
}

int main() {
    int n;
    std::cout << "Introduce el número de elementos a ordenar: ";
    std::cin >> n;

    std::vector<int> numeros = generarNumeros(n);

    std::cout << "Números aleatorios generados: ";
    imprimirVector(numeros);

    std::vector<int> bubble = numeros;
    std::vector<int> insert = numeros;
    std::vector<int> select = numeros;
    std::vector<int> counting = numeros;
    std::vector<int> quick = numeros;
    std::vector<int> merge = numeros;

    int intercambiosBubble = bubbleSort(bubble);
    int intercambiosInsert = insertionSort(insert);
    int intercambiosSelect = selectionSort(select);
    int intercambiosCounting = countingSort(counting);
    int intercambiosQuick = quickSort(quick);
    int intercambiosMerge = mergeSort(merge);

    std::cout << "Bubble Sort realizó " << intercambiosBubble << " intercambios. Números ordenados: ";
    imprimirVector(bubble);
    std::cout << "Insertion Sort realizó " << intercambiosInsert << " intercambios. Números ordenados: ";
    imprimirVector(insert);
    std::cout << "Selection Sort realizó " << intercambiosSelect << " intercambios. Números ordenados: ";
    imprimirVector(select);
    std::cout << "Counting Sort realizó " << intercambiosCounting << " intercambios. Números ordenados: ";
    imprimirVector(counting);
    std::cout << "Quick Sort realizó " << intercambiosQuick << " intercambios. Números ordenados: ";
    imprimirVector(quick);
    std::cout << "Merge Sort realizó " << intercambiosMerge << " intercambios. Números ordenados: ";
    imprimirVector(merge);

    return 0;
}
