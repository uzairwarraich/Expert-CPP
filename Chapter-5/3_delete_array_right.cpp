void print_sorted() {
  short* arr{new short[420]};
  for (int ix = 0; ix < 420; ++ix) {
    std::cin >> arr[ix];
    if (arr[ix] < 0) return;
  }
  std::sort(arr, arr + 420);
  // print the sorted array, code omitted for brevity
  delete[] arr;
}