int mark[20], i, n;
	float avg = 0, avg2 = 0;
	string name[20],temp;

	cout << "enter the number of students: \n";
	cin >> n;
	if (n > 20) {
		cout << "you can not enter more then 20:\n";
	}
	else {
		for (i = 0; i < n; i++)
		{
		l1:cout << "enter name and marks:\n";
			cin >> name[i];
			cin >> mark[i];
			avg = avg + mark[i];
			//temp = name[i];
			

		}
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (name[i] > name[j]) {
					temp = name[i];
					name[i] = name[j];
					name[j] = temp;
					cout << "name already exist:\n";
				
				}

				
				//for (i = 0; i < n; i++)
				//{
				//	//name[i] = name[i + 1];
				//	if (name[i] == name[i + 1])
				//	{
				//		cout << "this name is repeted\n";
				//	}
				//}

			}
		}

			cout << "\t LIST OF STUDENTS \n";
			cout << "\t ---------------------\n";
			cout << "\t NAME \t MARK \n";
			cout << "\t ---- \t ------\n";
			for (i = 0; i < n; i++)
			{
				cout << "\t  " << name[i] << "\t  " << mark[i] << endl;

			}cout << "\t Class average:" << avg / n << endl;



		}
	}
