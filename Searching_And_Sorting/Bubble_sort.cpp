/*

Bubble Sort is one of the sorting algorithms that works by repeatedly swapping the adjacent elements of the array if they are not in sorted order.
You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Bubble Sort algorithm.

*/

// ************************************** CODE ****************************************

/*

void bubbleSort(vector<int>& arr, int n)
{   
//    for(int i=0;i<n-1;i++)
//    {
//       for(int j=0;j<n-i-1;j++)
//       {
//           if(arr[j]>arr[j+1])
//           {
//               swap(arr[j],arr[j+1]);
//           }
//       }
//    }

        //  optimised approach

    for(int i=0;i<n-1;i++)
   {
       bool swapped =false;

      for(int j=0;j<n-i-1;j++)
      {
          if(arr[j]>arr[j+1])
          {
              swap(arr[j],arr[j+1]);
              swapped=true;
          }
      }
      if(swapped==false) break;
   }
      

//    agar round 1 chal rha hai to 1st element uski sahi position pe aa jayega
//  round 2 k liye 2 largest last me chale jayenge, so on and so forth
}


// https://youtu.be/zOhUavxlzw4?feature=shared


*/