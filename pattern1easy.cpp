int main(){
	int n; // n number of rows
	cin >> n; // inputting n
  int i , j;
    for(i = 0 ; i < n; i++)
    {
      for(j = n-i ; j > 0; j--)
      {
        cout << "*";
      }
      cout << endl;
    }
}
