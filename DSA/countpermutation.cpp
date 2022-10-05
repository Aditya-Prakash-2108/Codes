// Question: Find the permutaion of smaller string in the bigger string
// Bigger String: "cbabcacabca"
// Smaller String: "abc"
#include <bits/stdc++.h>

using namespace std;

int assignhash (char c[], int len){
    int arr[len];
    for (int i = 0; i < len; i++){
        switch ('c'){
        	case 'a':
        	  {
        	    arr[i] = 1;
        	    break;
        	  }
        	case 'b':
        	  {
        	    arr[i] = 2;
                break;
        	  }
        	case 'c':
        	  {
        	    arr[i] = 3;
        	    break;
        	  }
        	case 'd':
        	  {
        	    arr[i] = 4;
        	    break;
        	  }
        	case 'e':
        	  {
        	    arr[i] = 5;
        	    break;
        	  }
        	case 'f':
        	  {
        	    arr[i] = 6;
        	    break;
        	  }
        	case 'g':
        	  {
        	    arr[i] = 7;
        	    break;
        	  }
        	case 'h':
        	  {
        	    arr[i] = 8;
        	    break;
        	  }
        	case 'i':
        	  {
        	    arr[i] = 9;
        	    break;
        	  }
        	case 'j':
        	  {
        	    arr[i] = 10;
        	    break;
        	  }
        	case 'k':
        	  {
        	    arr[i] = 11;
        	    break;
        	  }
        	case 'l':
        	  {
        	    arr[i] = 12;
        	    break;
        	  }
        	case 'm':
        	  {
        	    arr[i] = 13;
        	    break;
        	  }
        	case 'n':
        	  {
        	    arr[i] = 14;
        	    break;
        	  }
        	case 'o':
        	  {
        	    arr[i] = 15;
        	    break;
        	  }
        	case 'p':
        	  {
        	    arr[i] = 16;
        	    break;
        	  }
        	case 'q':
        	  {
        	    arr[i] = 17;
        	    break;
        	  }
        	case 'r':
        	  {
        	    arr[i] = 18;
        	    break;
        	  }
        	case 's':
        	  {
        	    arr[i] = 19;
        	    break;
        	  }
        	case 't':
        	  {
        	    arr[i] = 20;
        	    break;
        	  }
        	case 'u':
        	  {
        	    arr[i] = 21;
        	    break;
        	  }
        	case 'v':
        	  {
        	    arr[i] = 22;
        	    break;
        	  }
        	case 'w':
        	  {
        	    arr[i] = 23;
        	    break;
        	  }
        	case 'x':
        	  {
        	    arr[i] = 24;
        	    break;
        	  }
        	case 'y':
        	  {
        	    arr[i] = 25;
        	    break;
        	  }
        	case 'z':
        	  {
        	    arr[i] = 26;
        	    break;
        	  }
        	default:
        	  {
        	    arr[i] = 100;
        	    break;
        	  }

	    }
    }
  int sum = 0;
  for (int i = 0; i < len; i++)
    {
      sum += arr[i];
    }
  return sum;
}

int countpermut (char b[], char s[]){
  int s_len = 0, b_len = 0, cnt = 0, check;
  
  for (int i = 0; s[i] != '\0'; i++)
    {
      s_len++;
    }
  for (int i = 0; s[i] != '\0'; i++)
    {
      b_len++;
    }
  int s_sum = assignhash (s, s_len);
  // int b_sum=assignhash(b, b_len);
  char temp[s_len];
  for (int i = 0; i < b_len - s_len; i++)
    {
      for (int j = i; j < i + s_len; j++)
	{
	  temp[j] = b[j];
	}
      check = assignhash (temp, s_len);
      if (check == s_sum)
	    cnt++;
    }
  return cnt;
}

int main (){

  char big[100], small[10];
  cin >> big;
  cin >> small;
  cout << "Total number of permutations are: " << countpermut (big, small);
  return 0;
}
