#include<iostream>
using namespace std;

class Movie																//class
{
	private:
		string rating;
	
	public:
		string title;
		string director;
		
		Movie(string aTitle, string aDirector, string aRating)			//constructor
		{
			title = aTitle;
			director = aDirector;
			rating = aRating;

		};
		
		void setRating(string aRating)									//setter
		{
			if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
			{
				rating = aRating;
			}
			else
				rating = "NR";
		};
		
		string getRating()												//getter
		{
			return rating;
		};
};


int main()
{
	Movie avengers("The Avengers", "Joss Whedon", "PG-13");
	
	//avengers.setRating("Dog");
	
	cout<<avengers.getRating();
	
	
	return 0;
	
}
