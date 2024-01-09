#include <string>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "./bible.class.h"

/*
 * TODO: Create the following classes and implement the outlined functionality.
 *
 * 	- Verse [ ] 
 * 	- Chapter [ ]
 * 	- Book [ ]
 * 	- Testament [ ]
 * 	- Bible [ ]
 *
 * Verse:
 * 	Must contain: 
 * 		verseId, 
 * 		verseLength, 
 * 		verseText
 * 	Might do:
 * 		- Graphical stuff
 * Chapter:
 * 	Must contain: 
 * 		chapterId, 
 * 		chapterVerseCount, 
 * 		chapterVerses.
 * 	Might do:
 * 		- Graphical stuff
 * Book:
 * 	Must contain: 
 * 		bookId, 
 * 		bookName, 
 * 		bookChapterCount, 
 * 		bookChapters
 * 	Might do:
 * 		- Graphical stuff
 * Testament:
 * 	Must contain: 
 * 		testamentId, 
 * 		testamentBookCount, 
 * 		testamentBooks
 * 	Might do:
 * 		- Graphical stuff
 * Bible:
 * 	Must contain: 
 * 		bibleTestamentCount, bibleTestaments
 * 	Must do:
 * 		-Fetch any arbitrary verse regardless of recursion depth.
 *		-Internal randomization algorithms for generating verses.
 * 
 * */

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
	int bookId = rand() % 65;

	/* 
	 * TODO: Ensure that the total number of chapters in the chosen book reflects the literal amount of chapters.
	 * */
	switch(bookId){
		case 30: // Amos
			maxChapter = 1;
			break;
		case 0: // Genesis
			maxChapter = 50;
			break;
		case 3: // Malachi
			maxChapter = 4;
			break;
		case 11: // 2 Kings
			 maxChapter = 25;
			 break;
		default: // genesis
			maxChapter = 150;
			maxVerse = 150;
	}
	
	chapter = (rand() % maxChapter)+1;
	verse = (rand() % maxVerse)+1;

	urlMain += books[bookId] + "-Chapter-"+std::to_string(chapter)+"/#"+std::to_string(verse);

	printf("Values for Book ID %d: C=%d V=%d\n\nUrl : %s\n", bookId, chapter, verse, urlMain.c_str());
	return 0;	
}
