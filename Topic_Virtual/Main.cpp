#include "Topic.h"
#include "CPP.h"
#include "Java.h"

int main()
{
	CPP* sep = new CPP("C++", "basic_construction", 10, 95, themeSize::basic_constructions, 23);
	Java oct("Java", "OOP", 30, 87, themeSize::OOP, "Spring");
	Java* nov = new Java("Java", "JavaFx", 30, 87);
	CPP dec("C++", "multithreading", 30, 87);
	Java jan("Java");

	Topic** arr = new Topic*[5]{sep, &oct, nov, &dec, &jan};
	for (int i = 0; i < 5; ++i)
	{
		arr[i]->display();
		displaySeparator();
	}
	delete sep;
	delete nov;
	delete[] arr;
	return 0;
}