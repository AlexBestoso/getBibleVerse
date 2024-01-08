#include <string>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	srand((unsigned)time(NULL));
	int maxChapter = 150;
	int maxVerse = 45;
	std::string urlMain = "https://www.kingjamesbibleonline.org/";    //1-Thessalonians-Chapter-1/#3"
	std::string books[65] = {
		"Genesis", "Exodus", "Leviticus", "Numbers", "Deuteronomy",
		"Joshua", "Judges", "Ruth", "1-Samuel", "2-Samuel",
		"1-Kings", "2-Kings", "1-Chronicles", "2-Chronicles", "Ezra",
		"Nehemiah", "Esther", "Job", "Psalms", "Proverbs",
		"Ecclesiastes", "Song-of-Solomon", "Isaiah", "Jeremiah", "Lamentations",
		"Ezekiel", "Daniel", "Hosea", "Joel", "Amos",
		"Obadiah", "Jonah", "Micah", "Nahum", "Habakkuk",
		"Zephaniah", "Haggai", "Zechariah", "Malachi", "Matthew",
		"Mark", "Luke", "John", "Acts", "Romans",
		"1-Corinthians", "2-Corinthians", "Galatians", "Ephesians", "Philippians",
		"Colossians", "2-Thessalonians", "1-Timothy", "2-Timothy", "Titus",
		"Philemon", "Hebrews", "James", "1-Peter", "2-Peter",
		"1-John", "2-John", "3-John", "Jude", "Revelation"
	};


	int chapter = 0;
	int verse = 0;
	int id = rand() % 65;

	switch(id){
		case 30:
			maxChapter = 1;
		case 0:
			maxChapter = 50;
		default:
			maxChapter = 150;
			maxVerse = 150;
	}
	
	chapter = (rand() % maxChapter)+1;
	verse = (rand() % maxVerse)+1;

	urlMain += books[id] + "-Chapter-"+std::to_string(chapter)+"/#"+std::to_string(verse);

	printf("Values for Book ID %d: C=%d V=%d\n\nUrl : %s\n", id, chapter, verse, urlMain.c_str());
	return 0;	
}
