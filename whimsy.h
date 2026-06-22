#include <iostream>
using namespace std;

 int main() {

    int option=0;

    while (option !=6){

        std::cout<<"Welcome to Aida's whimsical library, full of fun and creative ideas!\n";
        std::cout<<"So what brings you to my magical program today?\n";
        std::cout<<"Has the internet become too mundane for you... or do you seek something more ?\n";
        std::cout<<"Whatever it may be that you are searching for, I have some categories that may interest you: \n";
        std::cout<<"\n";
        std::cout<<"1. Hoping to find some new music.\n";
        std::cout<<"2. Looking for some journal prompt entries.\n";
        std::cout<<"3. Searching for a new hobby. \n";
        std::cout<<"4. Coding languages that could be fun. \n";
        std::cout<<"5. Wanting to play a game. I promise this is not a fun game. \n";
        std::cout<<"6. Exit the program.\n";
        std::cout<<"\n";
        std::cout<<"Please input your selection:\n";
        std::cin>>option;


        if (option == 1) {
            std::cout<<"I see you chose new music. Here is a list of my top ten favorite songs in no specific order I like them all equally:\n ";
            std::cout<<"\n";
            std::cout<<"1. Twinkle - Fontaines D.C.\n";
            std::cout<<"2. Pictures of You - The Cure\n";
            std::cout<<"3. Boys Don't Cry - The Cure\n";
            std::cout<<"4. The Universal - Blur\n";
            std::cout<<"5. Hold on Tight- Electric Light Orchestra\n";
            std::cout<<"6. Man of War - Radiohead\n";
            std::cout<<"7. I Wanna Be Adored - The Stone Roses\n";
            std::cout<<"8. Oblivius - The Strokes (notice how it's spelled wrong)\n";
            std::cout<<"9. Winterlong - The Pixies\n";
            std::cout<<"10. That's Right - Cage The Elephant\n";
            std::cout<<"\n";
        }
        if (option == 2) {
            std::cout<<"List of journal prompt entries:\n";
            std::cout<<"\n";
            std::cout<<"1. If you could be a bug for a day what would you be and how would you spend your day? \n";
            std::cout<<"2. If you could be really good at one thing what would it be and why?\n";
            std::cout<<"3. If you had 24 hours left to live, how would you spend your time? \n";
            std::cout<<"4. Go on a walk and draw pictures of the things you see and write why they interested you.\n";
            std::cout<<"5. Make a list of all the places in your town that you would love to visit. \n";
            std::cout<<"6. What are some things that make you excited to start a new week and why? \n";
            std::cout<<"7. Create a summer bucket list. \n";
            std::cout<<"8. Describe your favorite flower and how it makes you feel. \n";
            std::cout<<"9. Who would you be without the challenges that have shaped you? \n";
            std::cout<<"10. What is one thing you could do everyday to live closer to your dreams? \n";
            std::cout<<"\n";
        }

        if (option == 3) {
            std::cout<<"List of new hobbies to try: \n";
            std::cout<<"\n";
            std::cout<<"1. Fillet Crochet\n";
            std::cout<<"2. Knitting \n";
            std::cout<<"3. Learn how to use a rasberry pi \n";
            std::cout<<"4. Build a website \n";
            std::cout<<"5. Read those books on the shelf\n";
            std::cout<<"6. Write a book\n";
            std::cout<<"7. Make a gratitude jar\n";
            std::cout<<"8. Learn to code\n";
            std::cout<<"9. Start Penpalling\n";
            std::cout<<"10. Learn a new language\n";
            std::cout<<"\n";
        }

        if (option == 4) {
            std::cout<<"List of coding languages to try: \n";
            std::cout<<"\n";
            std::cout<<"1. C++\n";
            std::cout<<"2. HTML\n";
            std::cout<<"3. CSS\n";
            std::cout<<"4. Python\n";
            std::cout<<"5. Rust\n";
            std::cout<<"6. Javascript\n";
            std::cout<<"\n";
        }
        if (option == 5) {
            std::cout<<"Welcome to the not so fun game: \n";
            std::cout<<"I am going to describe a functional group and you have to guess it correctly to increase your score. \n";
            std::cout<<"\n";
            int score=0;
            int number;
            std::cout<<"Question 1: A carbon single bonded to an NH2 is...?\n";
            std::cout<<"\n";
            std::cout<<"1. Ether\n";
            std::cout<<"2. Ester\n";
            std::cout<<"3. Amine\n";
            std::cout<<"4. Amide\n";
            std::cin>>number;

            if (number ==3) {
                score+= 25;
            }
            else {
                std::cout<<"The correct answer was Amine\n";
            }
            int num2;
            std::cout<<"A carbon double bonded to an oxygen in between two single bonded carbons is...?\n";
            std::cout<<"\n";
            std::cout<<"1. Carboxylic Acid\n";
            std::cout<<"2. Ketone\n";
            std::cout<<"3. Amine\n";
            std::cout<<"4. Aldehyde\n";
            std::cin>>num2;
            if (num2 == 2) {
                score += 25;
            }
            else {
                std::cout<<"The correct answer was Ketone\n";
            }

            int num3;
            std::cout<<"A carbon connected to an OH group is...?\n";
            std::cout<<"\n";
            std::cout<<"1. Alkyne\n";
            std::cout<<"2. Ketone\n";
            std::cout<<"3. Alcohol\n";
            std::cout<<"4. Aldehyde\n";

            std::cin>>num3;
            if (num3 == 3) {
                score += 25;
            }
            else {
                std::cout<<"The correct answer was Alcohol\n";
            }

            int num4;
            std::cout<<"Two single bonded carbons with an oxygen in the middle of them is...?\n";
            std::cout<<"\n";
            std::cout<<"1. Alkyne\n";
            std::cout<<"2. Ester\n";
            std::cout<<"3. Ether\n";
            std::cout<<"4. Aldehyde\n";
            std::cin>>num4;

            if (num4 == 3) {
                score += 25;
            }
            else {
                std::cout<<"The correct answer was Ether\n";
            }

            std::cout<<"\n";
            std::cout<<"Final score: "<<score<<"\n";
            std::cout<<"Thank you for playing my organic chemistry game! \n";
            std::cout<<"\n";
            std::cout<<"\n";
        }

    }

    std::cout<<"\n";
    std::cout<<"Thankyou for checking out my program and I hope you have found something to do!\n";
    return 0;
}
