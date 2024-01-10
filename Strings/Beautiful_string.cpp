/*

Ninja has been given a binary string ‘STR’ containing either ‘0’ or ‘1’. A binary string is called beautiful 
if it contains alternating 0s and 1s.
For Example:‘0101’, ‘1010’, ‘101’, ‘010’ are beautiful strings.
He wants to make ‘STR’ beautiful by performing some operations on it. In one operation, Ninja can convert ‘0’ 
into ‘1’ or vice versa.
Your task is to determine the minimum number of operations Ninja should perform to make ‘STR’ beautiful.

2 // Test cases
0000
1010
Sample Output 1 :
2
0

*/

// *************************************** CODE ***************************************

/*

int makeBeautiful(string str) 
{
	int i=0,n=str.length();
	int count1=0;
	int count2=0;
	string str1="";
	string str2="";

	// Pehli pattern generate karo

	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			str1+='0';
		}

		else
		{
			str1+='1';
		}
	}

	// // dusri pattern generate karo

	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			str2+='1';
		}

		else
		{
			str2+='0';
		}
	}

	// ab compare karo changes aur minimum changes jisme ho wo count return karo

	for(int i=0;i<n;i++)
	{
		if(str[i]!=str1[i])
		{
			count1++;
		}
	}

	for(int i=0;i<n;i++)
	{
		if(str[i]!=str2[i])
		{
			count2++;
		}
	}

	return min(count1,count2);

}


// Youtube : https://youtu.be/P1hgy238oPU?feature=shared

*/

// ********************  Another solution with no extra space *****************************

/*

// Count the number of operations needed to change the string to '010101...'

    for (int i = 0; i < n; ++i) {

        if (i % 2 == 0 && str[i] != '0') {

            count1++;

        }

        if (i % 2 == 1 && str[i] != '1') {

            count1++;

        }

    }

    // Count the number of operations needed to change the string to '101010...'

    for (int i = 0; i < n; ++i) {

        if (i % 2 == 0 && str[i] != '1') {

            count2++;

        }

        if (i % 2 == 1 && str[i] != '0') {

            count2++;

        }

    }

    // Return the minimum of the two counts

    return min(count1, count2);

*/