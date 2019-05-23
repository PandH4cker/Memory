#include "../headers/memory.h"

int graphicInterfaceMemory()
{
	srand(time(NULL));
	const char * fontPath = "./Fonts/colour_brush/colour.ttf";
	if(SDLnIMGnTTF_Initialize() == EXIT_FAILURE)
		return EXIT_FAILURE;

	SDL_Window * window = SDL_CreateWindow("Memory", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
													 SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if(!window)
	{
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[!] Unable to create window: %s\n", SDL_GetError());
		TTF_Quit();
		IMG_Quit();
		SDL_Quit();
		return EXIT_FAILURE;
	}

	SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if(!renderer)
	{
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[!] Unable to create renderer: %s\n", SDL_GetError());
		TTF_Quit();
		IMG_Quit();
		SDL_DestroyWindow(window);
		SDL_Quit();
		return EXIT_FAILURE;
	}

	SDL_Texture * background = loadTexture("./Images/background.png", renderer);
	if(!background)
	{
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}

	SDL_Color white = {255, 255, 255, 0xFF};
	SDL_Texture * textMemory = renderText("Memory", fontPath, white, 140, renderer);
	if(!textMemory)
	{
		SDL_DestroyTexture(background);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}
	int xTextMemory = 795, yTextMemory = 250;

	SDL_Color green = {0, 255, 0, 0xFF};
	SDL_Texture * textWon = renderText("Gagne !", fontPath, green, 140, renderer);
	if(!textWon)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}
	int xTextWon = SCREEN_WIDTH/2, yTextWon = SCREEN_HEIGHT/2;

	SDL_Texture * onePlayerButton = loadTexture("./Images/onePlayerButton.png", renderer);
	if(!onePlayerButton)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}
	int xOnePlayer = 800, yOnePlayer = 585;

	SDL_Texture * twoPlayerButton = loadTexture("./Images/twoPlayerButton.png", renderer);
	if(!twoPlayerButton)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);
		SDL_DestroyTexture(onePlayerButton);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}
	int xTwoPlayer = 800, yTwoPlayer = 685;

	SDL_Texture * exitButton = loadTexture("./Images/exitButton.png", renderer);
	if(!exitButton)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);		
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}
	int xExit = 800, yExit = 785;

	SDL_Texture * letterButton = loadTexture("./Images/letterButton.png", renderer);
	if(!letterButton)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);		
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}
	int xLetter = 800, yLetter = 485;

	SDL_Texture * flowerButton = loadTexture("./Images/flowerButton.png", renderer);
	if(!flowerButton)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);		
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		SDL_DestroyTexture(letterButton);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}
	int xFlower = 800, yFlower = 585;

	SDL_Texture * catButton = loadTexture("./Images/catButton.png", renderer);
	if(!catButton)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);		
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		SDL_DestroyTexture(letterButton);
		SDL_DestroyTexture(flowerButton);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}
	int xCat = 800, yCat = 685;

	SDL_Texture * returnButton = loadTexture("./Images/returnButton.png", renderer);
	if(!returnButton)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);		
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		SDL_DestroyTexture(letterButton);
		SDL_DestroyTexture(flowerButton);
		SDL_DestroyTexture(catButton);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}
	int xReturn = 800, yReturn = 785;

	SDL_Texture * backgroundCardFleur = loadTexture("./Images/Fleur/backgroundCardFleur.png", renderer);
	if(!backgroundCardFleur)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);		
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		SDL_DestroyTexture(letterButton);
		SDL_DestroyTexture(flowerButton);
		SDL_DestroyTexture(catButton);
		SDL_DestroyTexture(returnButton);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}
	int xStartCard = 105, yStartCard = 230;

	SDL_Texture * verticalBar = loadTexture("./Images/verticalBar.png", renderer);
	if(!verticalBar)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);		
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		SDL_DestroyTexture(letterButton);
		SDL_DestroyTexture(flowerButton);
		SDL_DestroyTexture(catButton);
		SDL_DestroyTexture(returnButton);
		SDL_DestroyTexture(backgroundCardFleur);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}


	SDL_Texture * flowers[10] = {
		loadTexture("./Images/Fleur/Fleur1.png", renderer),
		loadTexture("./Images/Fleur/Fleur2.png", renderer),
		loadTexture("./Images/Fleur/Fleur3.png", renderer),
		loadTexture("./Images/Fleur/Fleur4.png", renderer),
		loadTexture("./Images/Fleur/Fleur5.png", renderer),
		loadTexture("./Images/Fleur/Fleur6.png", renderer),
		loadTexture("./Images/Fleur/Fleur7.png", renderer),
		loadTexture("./Images/Fleur/Fleur8.png", renderer),
		loadTexture("./Images/Fleur/Fleur9.png", renderer),
		loadTexture("./Images/Fleur/Fleur10.png", renderer)		
	};

	for(int i = 0; i < 10; ++i)
	{
		if(!flowers[i])
		{
			SDL_DestroyTexture(background);
			SDL_DestroyTexture(textMemory);
			SDL_DestroyTexture(textWon);			
			SDL_DestroyTexture(onePlayerButton);
			SDL_DestroyTexture(twoPlayerButton);
			SDL_DestroyTexture(exitButton);
			SDL_DestroyTexture(letterButton);
			SDL_DestroyTexture(flowerButton);
			SDL_DestroyTexture(catButton);
			SDL_DestroyTexture(returnButton);
			SDL_DestroyTexture(backgroundCardFleur);
			SDL_DestroyTexture(verticalBar);
			cleanUp(window, renderer);
			return EXIT_FAILURE;
		}
	}
	int matrixFlowers[4][5] = {
		{10, 9, 7, 2, 5},
		{1, 8, 6, 1, 4},
		{5, 4, 3, 10, 3},
		{9, 8, 7, 6, 2}
	};

	SDL_Texture * backgroundCardChat = loadTexture("./Images/Chat/backgroundCardChat.png", renderer);
	if(!backgroundCardChat)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);			
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		SDL_DestroyTexture(letterButton);
		SDL_DestroyTexture(flowerButton);
		SDL_DestroyTexture(catButton);
		SDL_DestroyTexture(returnButton);
		SDL_DestroyTexture(backgroundCardFleur);
		SDL_DestroyTexture(verticalBar);
		for(int i = 0; i < 10; ++i)
			SDL_DestroyTexture(flowers[i]);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}

	SDL_Texture * cats[12] = {
		loadTexture("./Images/Chat/chat1.png", renderer),
		loadTexture("./Images/Chat/chat2.png", renderer),
		loadTexture("./Images/Chat/chat3.png", renderer),
		loadTexture("./Images/Chat/chat4.png", renderer),
		loadTexture("./Images/Chat/chat5.png", renderer),
		loadTexture("./Images/Chat/chat6.png", renderer),
		loadTexture("./Images/Chat/chat7.png", renderer),
		loadTexture("./Images/Chat/chat8.png", renderer),
		loadTexture("./Images/Chat/chat9.png", renderer),
		loadTexture("./Images/Chat/chat10.png", renderer),
		loadTexture("./Images/Chat/chat11.png", renderer),
		loadTexture("./Images/Chat/chat12.png", renderer)
	};

	for(int i = 0; i < 12; ++i)
	{
		if(!cats[i])
		{
			SDL_DestroyTexture(background);
			SDL_DestroyTexture(textMemory);
			SDL_DestroyTexture(textWon);			
			SDL_DestroyTexture(onePlayerButton);
			SDL_DestroyTexture(twoPlayerButton);
			SDL_DestroyTexture(exitButton);
			SDL_DestroyTexture(letterButton);
			SDL_DestroyTexture(flowerButton);
			SDL_DestroyTexture(catButton);
			SDL_DestroyTexture(returnButton);
			SDL_DestroyTexture(backgroundCardFleur);
			SDL_DestroyTexture(backgroundCardChat);
			SDL_DestroyTexture(verticalBar);
			for(int j = 0; j < 10; ++j)
				SDL_DestroyTexture(flowers[j]);
			cleanUp(window, renderer);
			return EXIT_FAILURE;
		}
	}
	int matrixCats[4][6] = {
		{6, 12, 1, 3, 5, 7},
		{2, 3, 8, 9, 10, 11},
		{1, 4, 12, 11, 6, 7},
		{2, 5, 4, 8, 9, 10}
	};

	SDL_Texture * backgroundCardLettre = loadTexture("./Images/Lettre/backgroundCardLettre.png", renderer);
	if(!backgroundCardLettre)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);			
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		SDL_DestroyTexture(letterButton);
		SDL_DestroyTexture(flowerButton);
		SDL_DestroyTexture(catButton);
		SDL_DestroyTexture(returnButton);
		SDL_DestroyTexture(backgroundCardFleur);
		SDL_DestroyTexture(backgroundCardChat);
		SDL_DestroyTexture(verticalBar);
		for(int i = 0; i < 10; ++i)
			SDL_DestroyTexture(flowers[i]);
		for(int i = 0; i < 12; ++i)
			SDL_DestroyTexture(cats[i]);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}

	SDL_Texture * letters[8] = {
		loadTexture("./Images/Lettre/lettreB.png", renderer),
		loadTexture("./Images/Lettre/lettreC.png", renderer),
		loadTexture("./Images/Lettre/lettreE.png", renderer),
		loadTexture("./Images/Lettre/lettreF.png", renderer),
		loadTexture("./Images/Lettre/lettreH.png", renderer),
		loadTexture("./Images/Lettre/lettreK.png", renderer),
		loadTexture("./Images/Lettre/lettreS.png", renderer),
		loadTexture("./Images/Lettre/lettreU.png", renderer)
	};

	for(int i = 0; i < 8; ++i)
		if(!letters[i])
		{
			SDL_DestroyTexture(background);
			SDL_DestroyTexture(textMemory);
			SDL_DestroyTexture(textWon);			
			SDL_DestroyTexture(onePlayerButton);
			SDL_DestroyTexture(twoPlayerButton);
			SDL_DestroyTexture(exitButton);
			SDL_DestroyTexture(letterButton);
			SDL_DestroyTexture(flowerButton);
			SDL_DestroyTexture(catButton);
			SDL_DestroyTexture(returnButton);
			SDL_DestroyTexture(backgroundCardLettre);
			SDL_DestroyTexture(backgroundCardFleur);
			SDL_DestroyTexture(backgroundCardChat);
			SDL_DestroyTexture(verticalBar);
			for(int i = 0; i < 10; ++i)
				SDL_DestroyTexture(flowers[i]);
			for(int i = 0; i < 12; ++i)
				SDL_DestroyTexture(cats[i]);
			cleanUp(window, renderer);
			return EXIT_FAILURE;
		}

	int matrixLetters[4][4] = {
			{1, 8, 2, 7},
			{3, 6, 4, 5},
			{1, 3, 2, 4},
			{5, 7, 6, 8}
		};

	SDL_Texture * textPlayerOne = renderText("Joueur 1", fontPath, white, 60, renderer);
	if(!textPlayerOne)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);			
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		SDL_DestroyTexture(letterButton);
		SDL_DestroyTexture(flowerButton);
		SDL_DestroyTexture(catButton);
		SDL_DestroyTexture(returnButton);
		SDL_DestroyTexture(backgroundCardLettre);
		SDL_DestroyTexture(backgroundCardFleur);
		SDL_DestroyTexture(backgroundCardChat);
		SDL_DestroyTexture(verticalBar);
		for(int i = 0; i < 8; ++i)
			SDL_DestroyTexture(letters[i]);
		for(int i = 0; i < 10; ++i)
			SDL_DestroyTexture(flowers[i]);
		for(int i = 0; i < 12; ++i)
			SDL_DestroyTexture(cats[i]);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}
	int xTextPlayerOne = 1600, yTextPlayerOne = 200;

	SDL_Texture * textPlayerTwo = renderText("Joueur 2", fontPath, white, 60, renderer);
	if(!textPlayerTwo)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);			
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		SDL_DestroyTexture(letterButton);
		SDL_DestroyTexture(flowerButton);
		SDL_DestroyTexture(catButton);
		SDL_DestroyTexture(returnButton);
		SDL_DestroyTexture(backgroundCardLettre);
		SDL_DestroyTexture(backgroundCardFleur);
		SDL_DestroyTexture(backgroundCardChat);
		SDL_DestroyTexture(verticalBar);
		SDL_DestroyTexture(textPlayerOne);
		for(int i = 0; i < 8; ++i)
			SDL_DestroyTexture(letters[i]);
		for(int i = 0; i < 10; ++i)
			SDL_DestroyTexture(flowers[i]);
		for(int i = 0; i < 12; ++i)
			SDL_DestroyTexture(cats[i]);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}
	int xTextPlayerTwo = 1600, yTextPlayerTwo = 700;

	int scorePlayerOne = 0, scorePlayerTwo = 0;

	char scoreStringPlayerOne[6];
	char scoreStringPlayerTwo[6];

	sprintf(scoreStringPlayerOne, "%d", scorePlayerOne);
	sprintf(scoreStringPlayerTwo, "%d", scorePlayerTwo);

	SDL_Texture * textScorePlayerOne = renderText(scoreStringPlayerOne, fontPath, white, 60, renderer);
	if(!textScorePlayerOne)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);			
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		SDL_DestroyTexture(letterButton);
		SDL_DestroyTexture(flowerButton);
		SDL_DestroyTexture(catButton);
		SDL_DestroyTexture(returnButton);
		SDL_DestroyTexture(backgroundCardLettre);
		SDL_DestroyTexture(backgroundCardFleur);
		SDL_DestroyTexture(backgroundCardChat);
		SDL_DestroyTexture(verticalBar);
		SDL_DestroyTexture(textPlayerOne);
		SDL_DestroyTexture(textPlayerTwo);
		for(int i = 0; i < 8; ++i)
			SDL_DestroyTexture(letters[i]);
		for(int i = 0; i < 10; ++i)
			SDL_DestroyTexture(flowers[i]);
		for(int i = 0; i < 12; ++i)
			SDL_DestroyTexture(cats[i]);
		cleanUp(window, renderer);
		return EXIT_FAILURE;
	}

	SDL_Texture * textScorePlayerTwo = renderText(scoreStringPlayerTwo, fontPath, white, 60, renderer);
	if(!textScorePlayerTwo)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);			
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		SDL_DestroyTexture(letterButton);
		SDL_DestroyTexture(flowerButton);
		SDL_DestroyTexture(catButton);
		SDL_DestroyTexture(returnButton);
		SDL_DestroyTexture(backgroundCardLettre);
		SDL_DestroyTexture(backgroundCardFleur);
		SDL_DestroyTexture(backgroundCardChat);
		SDL_DestroyTexture(verticalBar);
		SDL_DestroyTexture(textPlayerOne);
		SDL_DestroyTexture(textPlayerTwo);
		SDL_DestroyTexture(textScorePlayerOne);
		for(int i = 0; i < 8; ++i)
			SDL_DestroyTexture(letters[i]);
		for(int i = 0; i < 10; ++i)
			SDL_DestroyTexture(flowers[i]);
		for(int i = 0; i < 12; ++i)
			SDL_DestroyTexture(cats[i]);
		cleanUp(window, renderer);
		return EXIT_FAILURE;		
	}

	SDL_Texture * textPlayerOneWon = renderText("Joueur 1 Gagne !", fontPath, green, 80, renderer);
	if(!textPlayerOneWon)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);			
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		SDL_DestroyTexture(letterButton);
		SDL_DestroyTexture(flowerButton);
		SDL_DestroyTexture(catButton);
		SDL_DestroyTexture(returnButton);
		SDL_DestroyTexture(backgroundCardLettre);
		SDL_DestroyTexture(backgroundCardFleur);
		SDL_DestroyTexture(backgroundCardChat);
		SDL_DestroyTexture(verticalBar);
		SDL_DestroyTexture(textPlayerOne);
		SDL_DestroyTexture(textPlayerTwo);
		SDL_DestroyTexture(textScorePlayerOne);
		SDL_DestroyTexture(textScorePlayerTwo);
		for(int i = 0; i < 8; ++i)
			SDL_DestroyTexture(letters[i]);
		for(int i = 0; i < 10; ++i)
			SDL_DestroyTexture(flowers[i]);
		for(int i = 0; i < 12; ++i)
			SDL_DestroyTexture(cats[i]);
		cleanUp(window, renderer);
		return EXIT_FAILURE;		
	}

	SDL_Texture * textPlayerTwoWon = renderText("Joueur 2 Gagne !", fontPath, green, 80, renderer);
	if(!textPlayerTwoWon)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);			
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		SDL_DestroyTexture(letterButton);
		SDL_DestroyTexture(flowerButton);
		SDL_DestroyTexture(catButton);
		SDL_DestroyTexture(returnButton);
		SDL_DestroyTexture(backgroundCardLettre);
		SDL_DestroyTexture(backgroundCardFleur);
		SDL_DestroyTexture(backgroundCardChat);
		SDL_DestroyTexture(verticalBar);
		SDL_DestroyTexture(textPlayerOne);
		SDL_DestroyTexture(textPlayerTwo);
		SDL_DestroyTexture(textScorePlayerOne);
		SDL_DestroyTexture(textScorePlayerTwo);
		SDL_DestroyTexture(textPlayerOneWon);
		for(int i = 0; i < 8; ++i)
			SDL_DestroyTexture(letters[i]);
		for(int i = 0; i < 10; ++i)
			SDL_DestroyTexture(flowers[i]);
		for(int i = 0; i < 12; ++i)
			SDL_DestroyTexture(cats[i]);
		cleanUp(window, renderer);
		return EXIT_FAILURE;				
	}

	SDL_Texture * textDraw = renderText("Egalite !", fontPath, green, 80, renderer);
	if(!textDraw)
	{
		SDL_DestroyTexture(background);
		SDL_DestroyTexture(textMemory);
		SDL_DestroyTexture(textWon);			
		SDL_DestroyTexture(onePlayerButton);
		SDL_DestroyTexture(twoPlayerButton);
		SDL_DestroyTexture(exitButton);
		SDL_DestroyTexture(letterButton);
		SDL_DestroyTexture(flowerButton);
		SDL_DestroyTexture(catButton);
		SDL_DestroyTexture(returnButton);
		SDL_DestroyTexture(backgroundCardLettre);
		SDL_DestroyTexture(backgroundCardFleur);
		SDL_DestroyTexture(backgroundCardChat);
		SDL_DestroyTexture(verticalBar);
		SDL_DestroyTexture(textPlayerOne);
		SDL_DestroyTexture(textPlayerTwo);
		SDL_DestroyTexture(textScorePlayerOne);
		SDL_DestroyTexture(textScorePlayerTwo);
		SDL_DestroyTexture(textPlayerOneWon);
		SDL_DestroyTexture(textPlayerTwoWon);
		for(int i = 0; i < 8; ++i)
			SDL_DestroyTexture(letters[i]);
		for(int i = 0; i < 10; ++i)
			SDL_DestroyTexture(flowers[i]);
		for(int i = 0; i < 12; ++i)
			SDL_DestroyTexture(cats[i]);
		cleanUp(window, renderer);
		return EXIT_FAILURE;			
	}
	

	int onePlayerSelect = 0;
	int twoPlayerSelect = 0;
	int exitSelect = 0;
	int letterSelect = 0;
	int flowerSelect = 0;
	int catSelect = 0;
	int returnSelect = 0;
	int startedSelect = 1;

	int won = 0;

	int isPlayerOne = 1;
	int isPlayerTwo = 0;

	bool lettersSelect[4][4] = {false};
	bool judgeLetters[4][4] = {false};

	bool flowersSelect[4][5] = {false};
	bool judgeFlowers[4][5] = {false};

	bool catsSelect[4][6] = {false};
	bool judgeCats[4][6] = {false};

	bool forTwo;
	int countForTwo = 0;

	Uint32 frameStart, frameTime;
	while(!SDL_QuitRequested())
	{
		frameStart = SDL_GetTicks();
		SDL_Event event;
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
				case SDL_MOUSEBUTTONDOWN:
					if(event.button.button == SDL_BUTTON_LEFT)
					{
						if(!onePlayerSelect && !twoPlayerSelect && !exitSelect)
						{
							if(isInRegion(event.button.x, event.button.y, 
										  xOnePlayer, xOnePlayer + BUTTON_WIDTH, 
										  yOnePlayer, yOnePlayer + BUTTON_HEIGHT))
							{
								onePlayerSelect = 1;
								twoPlayerSelect = 0;
								exitSelect = 0;
							}

							else if(isInRegion(event.button.x, event.button.y, 
											   xTwoPlayer, xTwoPlayer + BUTTON_WIDTH, 
											   yTwoPlayer, yTwoPlayer + BUTTON_HEIGHT))
							{
								onePlayerSelect = 0;
								twoPlayerSelect = 1;
								exitSelect = 0;
							}

							else if(isInRegion(event.button.x, event.button.y, 
											   xExit, xExit + BUTTON_WIDTH, 
											   yExit, yExit + BUTTON_HEIGHT))
							{
								onePlayerSelect = 0;
								twoPlayerSelect = 0;
								exitSelect = 1;
							}
						}

						else if((onePlayerSelect || twoPlayerSelect) && !flowerSelect && !letterSelect && !catSelect)
						{
							if(isInRegion(event.button.x, event.button.y,
										  xLetter, xLetter + BUTTON_WIDTH,
										  yLetter, yLetter + BUTTON_HEIGHT))
							{
								letterSelect = 1;
								flowerSelect = 0;
								catSelect = 0;
								returnSelect = 0;

								shuffle(4, 4, matrixLetters);
							}

							else if(isInRegion(event.button.x, event.button.y,
										  	   xFlower, xFlower + BUTTON_WIDTH,
										  	   yFlower, yFlower + BUTTON_HEIGHT))
							{
								letterSelect = 0;
								flowerSelect = 1;
								catSelect = 0;
								returnSelect = 0;

								shuffle(4, 5, matrixFlowers);
							}

							else if(isInRegion(event.button.x, event.button.y,
										  	   xCat, xCat + BUTTON_WIDTH,
										  	   yCat, yCat + BUTTON_HEIGHT))
							{
								letterSelect = 0;
								flowerSelect = 0;
								catSelect = 1;
								returnSelect = 0;

								shuffle(4, 6, matrixCats);
							}

							else if(isInRegion(event.button.x, event.button.y,
											   xReturn, xReturn + BUTTON_WIDTH,
											   yReturn, yReturn + BUTTON_HEIGHT))
							{
								letterSelect = 0;
								flowerSelect = 0;
								catSelect = 0;
								returnSelect = 1;
							}	

						}

						else if(letterSelect)
						{
							for(int i = 0; i < 4; ++i)
								for(int j = 0; j < 4; ++j)
									if(isInRegion(event.button.x, event.button.y,
												  xStartCard + 350 * j, xStartCard + 350 * j + LETTER_WIDTH,
												  yStartCard - 100 + 200 * i, yStartCard - 100 + 200 * i + LETTER_HEIGHT)) //1825
									{
										if(!judgeLetters[i][j])
										{
											forTwo = isTwoSelect(4, 4, lettersSelect, judgeLetters, matrixLetters);
											if(!forTwo)
												countForTwo++;
											if(twoPlayerSelect && countForTwo == 2)
											{
												if(isPlayerOne)
												{
													isPlayerOne = 0;
													isPlayerTwo = 1;
													countForTwo = 0;
												}

												else if(isPlayerTwo)
												{
													isPlayerTwo = 0;
													isPlayerOne = 1;
													countForTwo = 0;
												}
											}
											if(twoPlayerSelect && forTwo)
											{
												if(isPlayerOne)
												{
													scorePlayerOne+= 100;
													isPlayerOne = 0;
													isPlayerTwo = 1;

													SDL_DestroyTexture(textScorePlayerOne);
													sprintf(scoreStringPlayerOne, "%d", scorePlayerOne);

													textScorePlayerOne = renderText(scoreStringPlayerOne, fontPath, white, 60, renderer);
													if(!textScorePlayerOne)
													{
														SDL_DestroyTexture(background);
														SDL_DestroyTexture(textMemory);
														SDL_DestroyTexture(textWon);			
														SDL_DestroyTexture(onePlayerButton);
														SDL_DestroyTexture(twoPlayerButton);
														SDL_DestroyTexture(exitButton);
														SDL_DestroyTexture(letterButton);
														SDL_DestroyTexture(flowerButton);
														SDL_DestroyTexture(catButton);
														SDL_DestroyTexture(returnButton);
														SDL_DestroyTexture(backgroundCardLettre);
														SDL_DestroyTexture(backgroundCardFleur);
														SDL_DestroyTexture(backgroundCardChat);
														SDL_DestroyTexture(verticalBar);
														SDL_DestroyTexture(textPlayerOne);
														SDL_DestroyTexture(textPlayerTwo);
														SDL_DestroyTexture(textScorePlayerTwo);
														SDL_DestroyTexture(textPlayerOneWon);
														SDL_DestroyTexture(textPlayerTwoWon);
														SDL_DestroyTexture(textDraw);
														for(int i = 0; i < 8; ++i)
															SDL_DestroyTexture(letters[i]);
														for(int i = 0; i < 10; ++i)
															SDL_DestroyTexture(flowers[i]);
														for(int i = 0; i < 12; ++i)
															SDL_DestroyTexture(cats[i]);
														cleanUp(window, renderer);
														return EXIT_FAILURE;		
													}
												}
												else if(isPlayerTwo)
												{
													scorePlayerTwo+= 100;
													isPlayerTwo = 0;
													isPlayerOne = 1;

													SDL_DestroyTexture(textScorePlayerTwo);
													sprintf(scoreStringPlayerTwo, "%d", scorePlayerTwo);

													textScorePlayerTwo = renderText(scoreStringPlayerTwo, fontPath, white, 60, renderer);
													if(!textScorePlayerTwo)
													{
														SDL_DestroyTexture(background);
														SDL_DestroyTexture(textMemory);
														SDL_DestroyTexture(textWon);			
														SDL_DestroyTexture(onePlayerButton);
														SDL_DestroyTexture(twoPlayerButton);
														SDL_DestroyTexture(exitButton);
														SDL_DestroyTexture(letterButton);
														SDL_DestroyTexture(flowerButton);
														SDL_DestroyTexture(catButton);
														SDL_DestroyTexture(returnButton);
														SDL_DestroyTexture(backgroundCardLettre);
														SDL_DestroyTexture(backgroundCardFleur);
														SDL_DestroyTexture(backgroundCardChat);
														SDL_DestroyTexture(verticalBar);
														SDL_DestroyTexture(textPlayerOne);
														SDL_DestroyTexture(textPlayerTwo);
														SDL_DestroyTexture(textScorePlayerOne);
														SDL_DestroyTexture(textPlayerOneWon);
														SDL_DestroyTexture(textPlayerTwoWon);
														SDL_DestroyTexture(textDraw);
														for(int i = 0; i < 8; ++i)
															SDL_DestroyTexture(letters[i]);
														for(int i = 0; i < 10; ++i)
															SDL_DestroyTexture(flowers[i]);
														for(int i = 0; i < 12; ++i)
															SDL_DestroyTexture(cats[i]);
														cleanUp(window, renderer);
														return EXIT_FAILURE;																
													}
												}
											}

											lettersSelect[i][j] = !lettersSelect[i][j];
										}
									}
						}

						else if(flowerSelect)
						{
							for(int i = 0; i < 4; ++i)
								for(int j = 0; j < 5; ++j)
									if(isInRegion(event.button.x, event.button.y,
												  xStartCard + 300 * j, xStartCard + 300 * j + FLOWER_WIDTH,
												  yStartCard + 200 * i, yStartCard + 200 * i + FLOWER_HEIGHT)) //1845
									{
										if(!judgeFlowers[i][j])
										{
											forTwo = isTwoSelect(4, 5, flowersSelect, judgeFlowers, matrixFlowers);
											if(!forTwo)
												countForTwo++;
											if(twoPlayerSelect && countForTwo == 2)
											{
												if(isPlayerOne)
												{
													isPlayerOne = 0;
													isPlayerTwo = 1;
													countForTwo = 0;
												}

												else if(isPlayerTwo)
												{
													isPlayerTwo = 0;
													isPlayerOne = 1;
													countForTwo = 0;
												}
											}											
											if(twoPlayerSelect && forTwo)
											{
												if(isPlayerOne)
												{
													scorePlayerOne+= 100;
													isPlayerOne = 0;
													isPlayerTwo = 1;

													SDL_DestroyTexture(textScorePlayerOne);
													sprintf(scoreStringPlayerOne, "%d", scorePlayerOne);

													textScorePlayerOne = renderText(scoreStringPlayerOne, fontPath, white, 60, renderer);
													if(!textScorePlayerOne)
													{
														SDL_DestroyTexture(background);
														SDL_DestroyTexture(textMemory);
														SDL_DestroyTexture(textWon);			
														SDL_DestroyTexture(onePlayerButton);
														SDL_DestroyTexture(twoPlayerButton);
														SDL_DestroyTexture(exitButton);
														SDL_DestroyTexture(letterButton);
														SDL_DestroyTexture(flowerButton);
														SDL_DestroyTexture(catButton);
														SDL_DestroyTexture(returnButton);
														SDL_DestroyTexture(backgroundCardLettre);
														SDL_DestroyTexture(backgroundCardFleur);
														SDL_DestroyTexture(backgroundCardChat);
														SDL_DestroyTexture(verticalBar);
														SDL_DestroyTexture(textPlayerOne);
														SDL_DestroyTexture(textPlayerTwo);
														SDL_DestroyTexture(textScorePlayerTwo);
														SDL_DestroyTexture(textPlayerOneWon);
														SDL_DestroyTexture(textPlayerTwoWon);
														SDL_DestroyTexture(textDraw);
														for(int i = 0; i < 8; ++i)
															SDL_DestroyTexture(letters[i]);
														for(int i = 0; i < 10; ++i)
															SDL_DestroyTexture(flowers[i]);
														for(int i = 0; i < 12; ++i)
															SDL_DestroyTexture(cats[i]);
														cleanUp(window, renderer);
														return EXIT_FAILURE;		
													}
												}
												else if(isPlayerTwo)
												{
													scorePlayerTwo+= 100;
													isPlayerTwo = 0;
													isPlayerOne = 1;

													SDL_DestroyTexture(textScorePlayerTwo);
													sprintf(scoreStringPlayerTwo, "%d", scorePlayerTwo);

													textScorePlayerTwo = renderText(scoreStringPlayerTwo, fontPath, white, 60, renderer);
													if(!textScorePlayerTwo)
													{
														SDL_DestroyTexture(background);
														SDL_DestroyTexture(textMemory);
														SDL_DestroyTexture(textWon);			
														SDL_DestroyTexture(onePlayerButton);
														SDL_DestroyTexture(twoPlayerButton);
														SDL_DestroyTexture(exitButton);
														SDL_DestroyTexture(letterButton);
														SDL_DestroyTexture(flowerButton);
														SDL_DestroyTexture(catButton);
														SDL_DestroyTexture(returnButton);
														SDL_DestroyTexture(backgroundCardLettre);
														SDL_DestroyTexture(backgroundCardFleur);
														SDL_DestroyTexture(backgroundCardChat);
														SDL_DestroyTexture(verticalBar);
														SDL_DestroyTexture(textPlayerOne);
														SDL_DestroyTexture(textPlayerTwo);
														SDL_DestroyTexture(textScorePlayerOne);
														SDL_DestroyTexture(textPlayerOneWon);
														SDL_DestroyTexture(textPlayerTwoWon);
														SDL_DestroyTexture(textDraw);
														for(int i = 0; i < 8; ++i)
															SDL_DestroyTexture(letters[i]);
														for(int i = 0; i < 10; ++i)
															SDL_DestroyTexture(flowers[i]);
														for(int i = 0; i < 12; ++i)
															SDL_DestroyTexture(cats[i]);
														cleanUp(window, renderer);
														return EXIT_FAILURE;																
													}
												}
											}

											flowersSelect[i][j] = !flowersSelect[i][j];
										}
									}
						}

						else if(catSelect)
						{
							for(int i = 0; i < 4; ++i)
								for(int j = 0; j < 6; ++j)
									if(isInRegion(event.button.x, event.button.y,
												  xStartCard + 250 * j, xStartCard + 250 * j + CAT_WIDTH,
												  yStartCard + 200 * i, yStartCard + 200 * i + CAT_HEIGHT)) //1797
									{
										if(!judgeCats[i][j])
										{
											forTwo = isTwoSelect(4, 6, catsSelect, judgeCats, matrixCats);
											if(!forTwo)
												countForTwo++;
											if(twoPlayerSelect && countForTwo == 2)
											{
												if(isPlayerOne)
												{
													isPlayerOne = 0;
													isPlayerTwo = 1;
													countForTwo = 0;
												}

												else if(isPlayerTwo)
												{
													isPlayerTwo = 0;
													isPlayerOne = 1;
													countForTwo = 0;
												}
											}											
											if(twoPlayerSelect && forTwo)
											{
												if(isPlayerOne)
												{
													scorePlayerOne+= 100;
													isPlayerOne = 0;
													isPlayerTwo = 1;

													SDL_DestroyTexture(textScorePlayerOne);
													sprintf(scoreStringPlayerOne, "%d", scorePlayerOne);

													textScorePlayerOne = renderText(scoreStringPlayerOne, fontPath, white, 60, renderer);
													if(!textScorePlayerOne)
													{
														SDL_DestroyTexture(background);
														SDL_DestroyTexture(textMemory);
														SDL_DestroyTexture(textWon);			
														SDL_DestroyTexture(onePlayerButton);
														SDL_DestroyTexture(twoPlayerButton);
														SDL_DestroyTexture(exitButton);
														SDL_DestroyTexture(letterButton);
														SDL_DestroyTexture(flowerButton);
														SDL_DestroyTexture(catButton);
														SDL_DestroyTexture(returnButton);
														SDL_DestroyTexture(backgroundCardLettre);
														SDL_DestroyTexture(backgroundCardFleur);
														SDL_DestroyTexture(backgroundCardChat);
														SDL_DestroyTexture(verticalBar);
														SDL_DestroyTexture(textPlayerOne);
														SDL_DestroyTexture(textPlayerTwo);
														SDL_DestroyTexture(textScorePlayerTwo);
														SDL_DestroyTexture(textPlayerOneWon);
														SDL_DestroyTexture(textPlayerTwoWon);
														SDL_DestroyTexture(textDraw);
														for(int i = 0; i < 8; ++i)
															SDL_DestroyTexture(letters[i]);
														for(int i = 0; i < 10; ++i)
															SDL_DestroyTexture(flowers[i]);
														for(int i = 0; i < 12; ++i)
															SDL_DestroyTexture(cats[i]);
														cleanUp(window, renderer);
														return EXIT_FAILURE;		
													}
												}
												else if(isPlayerTwo)
												{
													scorePlayerTwo+= 100;
													isPlayerTwo = 0;
													isPlayerOne = 1;

													SDL_DestroyTexture(textScorePlayerTwo);
													sprintf(scoreStringPlayerTwo, "%d", scorePlayerTwo);

													textScorePlayerTwo = renderText(scoreStringPlayerTwo, fontPath, white, 60, renderer);
													if(!textScorePlayerTwo)
													{
														SDL_DestroyTexture(background);
														SDL_DestroyTexture(textMemory);
														SDL_DestroyTexture(textWon);			
														SDL_DestroyTexture(onePlayerButton);
														SDL_DestroyTexture(twoPlayerButton);
														SDL_DestroyTexture(exitButton);
														SDL_DestroyTexture(letterButton);
														SDL_DestroyTexture(flowerButton);
														SDL_DestroyTexture(catButton);
														SDL_DestroyTexture(returnButton);
														SDL_DestroyTexture(backgroundCardLettre);
														SDL_DestroyTexture(backgroundCardFleur);
														SDL_DestroyTexture(backgroundCardChat);
														SDL_DestroyTexture(verticalBar);
														SDL_DestroyTexture(textPlayerOne);
														SDL_DestroyTexture(textPlayerTwo);
														SDL_DestroyTexture(textScorePlayerOne);
														SDL_DestroyTexture(textPlayerOneWon);
														SDL_DestroyTexture(textPlayerTwoWon);
														SDL_DestroyTexture(textDraw);
														for(int i = 0; i < 8; ++i)
															SDL_DestroyTexture(letters[i]);
														for(int i = 0; i < 10; ++i)
															SDL_DestroyTexture(flowers[i]);
														for(int i = 0; i < 12; ++i)
															SDL_DestroyTexture(cats[i]);
														cleanUp(window, renderer);
														return EXIT_FAILURE;																
													}
												}
											}

											catsSelect[i][j] = !catsSelect[i][j];
										}
									}
						}


					}
				break;
			}
		}

		if(returnSelect)
		{
			returnSelect = 0;
			onePlayerSelect = 0;
			twoPlayerSelect = 0;
		}

		if(exitSelect)
		{
			SDL_DestroyTexture(background);
			SDL_DestroyTexture(textMemory);
			SDL_DestroyTexture(textWon);			
			SDL_DestroyTexture(onePlayerButton);
			SDL_DestroyTexture(twoPlayerButton);
			SDL_DestroyTexture(exitButton);
			SDL_DestroyTexture(letterButton);
			SDL_DestroyTexture(flowerButton);
			SDL_DestroyTexture(catButton);
			SDL_DestroyTexture(returnButton);
			SDL_DestroyTexture(backgroundCardLettre);
			SDL_DestroyTexture(backgroundCardFleur);
			SDL_DestroyTexture(backgroundCardChat);
			SDL_DestroyTexture(verticalBar);
			SDL_DestroyTexture(textPlayerOne);
			SDL_DestroyTexture(textPlayerTwo);
			SDL_DestroyTexture(textScorePlayerOne);
			SDL_DestroyTexture(textScorePlayerTwo);
			SDL_DestroyTexture(textPlayerOneWon);
			SDL_DestroyTexture(textPlayerTwoWon);
			SDL_DestroyTexture(textDraw);
			for(int i = 0; i < 8; ++i)
				SDL_DestroyTexture(letters[i]);
			for(int i = 0; i < 10; ++i)
				SDL_DestroyTexture(flowers[i]);
			for(int i = 0; i < 12; ++i)
				SDL_DestroyTexture(cats[i]);
			cleanUp(window, renderer);
			return EXIT_SUCCESS;
		}

		SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0x00);
		SDL_RenderClear(renderer);
		renderTexture(background, renderer, 0, 0, NULL);
		if(twoPlayerSelect && (letterSelect || flowerSelect || catSelect))
		{
			renderTexture(verticalBar, renderer, 300, 0, NULL);
			renderTexture(textPlayerOne, renderer, xTextPlayerOne, yTextPlayerOne, NULL);
			renderTexture(textPlayerTwo, renderer, xTextPlayerTwo, yTextPlayerTwo, NULL);
			renderTexture(textScorePlayerOne, renderer, xTextPlayerOne, yTextPlayerOne + 100, NULL);
			renderTexture(textScorePlayerTwo, renderer, xTextPlayerTwo, yTextPlayerTwo + 100, NULL);
		}

		if(hasWon(4, 4, judgeLetters))
		{
			flowerSelect = 0;
			letterSelect = 0;
			catSelect = 0;
			returnSelect = 1;
			won = 1;
			if(twoPlayerSelect)
			{
				if(scorePlayerOne > scorePlayerTwo)
					renderTexture(textPlayerOneWon, renderer, xTextWon, yTextWon, NULL);
				else if(scorePlayerOne < scorePlayerTwo)
					renderTexture(textPlayerTwoWon, renderer, xTextWon, yTextWon, NULL);
				else
					renderTexture(textDraw, renderer, xTextWon, yTextWon, NULL);
				scorePlayerOne = 0;
				scorePlayerTwo = 0;
				isPlayerOne = 1;
				isPlayerTwo = 0;
			}

			for(int i = 0; i < 4; ++i)
				for(int j = 0; j < 4; ++j)
				{
					judgeLetters[i][j] = false;
					lettersSelect[i][j] = false;

				}

			if(onePlayerSelect)
				renderTexture(textWon, renderer, xTextWon, yTextWon, NULL);
			goto renderPresent;
		}


		if(hasWon(4, 5, judgeFlowers))
		{
			flowerSelect = 0;
			letterSelect = 0;
			catSelect = 0;
			returnSelect = 1;
			won = 1;
			if(twoPlayerSelect)
			{
				if(scorePlayerOne > scorePlayerTwo)
					renderTexture(textPlayerOneWon, renderer, xTextWon, yTextWon, NULL);
				else if(scorePlayerOne < scorePlayerTwo)
					renderTexture(textPlayerTwoWon, renderer, xTextWon, yTextWon, NULL);
				else
					renderTexture(textDraw, renderer, xTextWon, yTextWon, NULL);
				scorePlayerOne = 0;
				scorePlayerTwo = 0;
				isPlayerOne = 1;
				isPlayerTwo = 0;
			}
			for(int i = 0; i < 4; ++i)
				for(int j = 0; j < 5; ++j)
				{
					judgeFlowers[i][j] = false;
					flowersSelect[i][j] = false;
				}

			if(onePlayerSelect)	
				renderTexture(textWon, renderer, xTextWon, yTextWon, NULL);
			goto renderPresent;
		}

		if(hasWon(4, 6, judgeCats))
		{
			flowerSelect = 0;
			letterSelect = 0;
			catSelect = 0;
			returnSelect = 1;
			won = 1;
			if(twoPlayerSelect)
			{
				if(scorePlayerOne > scorePlayerTwo)
					renderTexture(textPlayerOneWon, renderer, xTextWon, yTextWon, NULL);
				else if(scorePlayerOne < scorePlayerTwo)
					renderTexture(textPlayerTwoWon, renderer, xTextWon, yTextWon, NULL);
				else
					renderTexture(textDraw, renderer, xTextWon, yTextWon, NULL);
				scorePlayerOne = 0;
				scorePlayerTwo = 0;
				isPlayerOne = 1;
				isPlayerTwo = 0;
			}
			for(int i = 0; i < 4; ++i)
				for(int j = 0; j < 6; ++j)
				{
					judgeCats[i][j] = false;
					catsSelect[i][j] = false;
				}

			if(onePlayerSelect)	
				renderTexture(textWon, renderer, xTextWon, yTextWon, NULL);
			goto renderPresent;
		}


		if(letterSelect)
		{
			if(startedSelect)
			{
				for(int i = 0; i < 4; ++i)
					for(int j = 0; j < 4; ++j)
						switch(matrixLetters[i][j])
						{
							case 1:
								renderTexture(letters[0], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);
							break;
							case 2:
								renderTexture(letters[1], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);							
							break;
							case 3:
								renderTexture(letters[2], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);							
							break;
							case 4:
								renderTexture(letters[3], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);							
							break;
							case 5:
								renderTexture(letters[4], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);							
							break;
							case 6:
								renderTexture(letters[5], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);							
							break;
							case 7:
								renderTexture(letters[6], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);							
							break;
							case 8:
								renderTexture(letters[7], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);
							break;
						}
				goto renderPresent;				
			}
			for(int i = 0; i < 4; ++i)
				for(int j = 0; j < 4; ++j)
				{
					if(!lettersSelect[i][j])
						renderTexture(backgroundCardLettre, renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);
					else
						switch(matrixLetters[i][j])
						{
							case 1:
								renderTexture(letters[0], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);
							break;
							case 2:
								renderTexture(letters[1], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);							
							break;
							case 3:
								renderTexture(letters[2], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);							
							break;
							case 4:
								renderTexture(letters[3], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);							
							break;
							case 5:
								renderTexture(letters[4], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);							
							break;
							case 6:
								renderTexture(letters[5], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);							
							break;
							case 7:
								renderTexture(letters[6], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);							
							break;
							case 8:
								renderTexture(letters[7], renderer, xStartCard + 350 * j, yStartCard - 100 + 200 * i, NULL);
							break;
						}
				}
		}



		if(flowerSelect)
		{
			if(startedSelect)
			{
				for(int i = 0; i < 4; ++i)
					for(int j = 0; j < 5; ++j)
						switch(matrixFlowers[i][j])
						{
							case 1:
								renderTexture(flowers[0], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);
							break;
							case 2:
								renderTexture(flowers[1], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
							case 3:
								renderTexture(flowers[2], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
							case 4:
								renderTexture(flowers[3], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
							case 5:
								renderTexture(flowers[4], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
							case 6:
								renderTexture(flowers[5], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
							case 7:
								renderTexture(flowers[6], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
							case 8:
								renderTexture(flowers[7], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);
							break;
							case 9:
								renderTexture(flowers[8], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
							case 10:
								renderTexture(flowers[9], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
						}
				goto renderPresent;				
			}
			for(int i = 0; i < 4; ++i)
				for(int j = 0; j < 5; ++j)
				{
					if(!flowersSelect[i][j])
						renderTexture(backgroundCardFleur, renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);
					else
						switch(matrixFlowers[i][j])
						{
							case 1:
								renderTexture(flowers[0], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);
							break;
							case 2:
								renderTexture(flowers[1], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
							case 3:
								renderTexture(flowers[2], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
							case 4:
								renderTexture(flowers[3], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
							case 5:
								renderTexture(flowers[4], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
							case 6:
								renderTexture(flowers[5], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
							case 7:
								renderTexture(flowers[6], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
							case 8:
								renderTexture(flowers[7], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);
							break;
							case 9:
								renderTexture(flowers[8], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
							case 10:
								renderTexture(flowers[9], renderer, xStartCard + 300 * j, yStartCard + 200 * i, NULL);							
							break;
						}
				}
		}

		if(catSelect)
		{
			if(startedSelect)
			{
				for(int i = 0; i < 4; ++i)
					for(int j = 0; j < 6; ++j)
						switch(matrixCats[i][j])
						{
							case 1:
								renderTexture(cats[0], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);
							break;
							case 2:
								renderTexture(cats[1], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 3:
								renderTexture(cats[2], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 4:
								renderTexture(cats[3], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 5:
								renderTexture(cats[4], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 6:
								renderTexture(cats[5], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 7:
								renderTexture(cats[6], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 8:
								renderTexture(cats[7], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);
							break;
							case 9:
								renderTexture(cats[8], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 10:
								renderTexture(cats[9], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 11:
								renderTexture(cats[10], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 12:
								renderTexture(cats[11], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;							
						}
				goto renderPresent;				
			}
			for(int i = 0; i < 4; ++i)
				for(int j = 0; j < 6; ++j)
				{
					if(!catsSelect[i][j])
						renderTexture(backgroundCardChat, renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);
					else
						switch(matrixCats[i][j])
						{
							case 1:
								renderTexture(cats[0], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);
							break;
							case 2:
								renderTexture(cats[1], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 3:
								renderTexture(cats[2], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 4:
								renderTexture(cats[3], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 5:
								renderTexture(cats[4], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 6:
								renderTexture(cats[5], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 7:
								renderTexture(cats[6], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 8:
								renderTexture(cats[7], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);
							break;
							case 9:
								renderTexture(cats[8], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 10:
								renderTexture(cats[9], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 11:
								renderTexture(cats[10], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;
							case 12:
								renderTexture(cats[11], renderer, xStartCard + 250 * j, yStartCard + 200 * i, NULL);							
							break;

						}
				}
		}


		if(!onePlayerSelect && !twoPlayerSelect)
		{
			renderTexture(onePlayerButton, renderer, xOnePlayer, yOnePlayer, NULL);
			renderTexture(twoPlayerButton, renderer, xTwoPlayer, yTwoPlayer, NULL);
			renderTexture(exitButton, renderer, xExit, yExit, NULL);
		}

		else if((onePlayerSelect || twoPlayerSelect) && (!flowerSelect && !letterSelect && !catSelect))
		{
			renderTexture(letterButton, renderer, xLetter, yLetter, NULL);
			renderTexture(flowerButton, renderer, xFlower, yFlower, NULL);
			renderTexture(catButton, renderer, xCat, yCat, NULL);
			renderTexture(returnButton, renderer, xReturn, yReturn, NULL);
		}

		if(!flowerSelect && !letterSelect && !catSelect)
			renderTexture(textMemory, renderer, xTextMemory, yTextMemory, NULL);
		renderPresent:SDL_RenderPresent(renderer);
		if(startedSelect && (flowerSelect || letterSelect || catSelect))
		{
			SDL_Delay(1500);
			startedSelect = 0;
		}

		if(won)
		{
			SDL_Delay(1500);
			won = 0;
			startedSelect = 1;
		}

		frameTime = SDL_GetTicks() - frameStart;
		if(frameTime < DELAY_TIME)
			SDL_Delay((int)(DELAY_TIME - frameTime));
	}

	SDL_DestroyTexture(background);
	SDL_DestroyTexture(textMemory);
	SDL_DestroyTexture(textWon);	
	SDL_DestroyTexture(onePlayerButton);
	SDL_DestroyTexture(twoPlayerButton);
	SDL_DestroyTexture(exitButton);
	SDL_DestroyTexture(letterButton);
	SDL_DestroyTexture(flowerButton);
	SDL_DestroyTexture(catButton);
	SDL_DestroyTexture(returnButton);
	SDL_DestroyTexture(backgroundCardLettre);
	SDL_DestroyTexture(backgroundCardFleur);
	SDL_DestroyTexture(backgroundCardChat);
	SDL_DestroyTexture(verticalBar);
	SDL_DestroyTexture(textPlayerOne);
	SDL_DestroyTexture(textPlayerTwo);
	SDL_DestroyTexture(textScorePlayerOne);
	SDL_DestroyTexture(textScorePlayerTwo);
	SDL_DestroyTexture(textPlayerOneWon);
	SDL_DestroyTexture(textPlayerTwoWon);
	SDL_DestroyTexture(textDraw);
	for(int i = 0; i < 8; ++i)
		SDL_DestroyTexture(letters[i]);
	for(int i = 0; i < 10; ++i)
		SDL_DestroyTexture(flowers[i]);
	for(int i = 0; i < 12; ++i)
		SDL_DestroyTexture(cats[i]);
	cleanUp(window, renderer);
	return EXIT_SUCCESS;
}

int SDLnIMGnTTF_Initialize()
{
	int flags = IMG_INIT_PNG;
	int initted = IMG_Init(flags);

	if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) != 0)
	{
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[!] Unable to initialize SDL: %s\n", SDL_GetError());
		return EXIT_FAILURE;
	}

	if((initted & flags) != flags)
	{
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[!] Unable to initialize png images: %s\n", IMG_GetError());
		return EXIT_FAILURE;
	}

	if(TTF_Init() == -1)
	{
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[!] Unable to initialize font feature: %s\n", TTF_GetError());
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}

bool isInRegion(int x, int y, int xInf, int xSup, int yInf, int ySup)
{
	if((x >= xInf && x <= xSup) && (y >= yInf && y <= ySup))
		return true;
	return false;
}

SDL_Texture * loadTexture(const char * file, SDL_Renderer * renderer)
{
	SDL_Texture * texture = IMG_LoadTexture(renderer, file);
	if(!texture)
	{
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[!] Unable to create texture: %s\n", SDL_GetError());
		return NULL;
	}

	return texture;
}

SDL_Texture * renderText(const char * text, const char * fontName, SDL_Color color, int fontSize, SDL_Renderer * renderer)
{
	TTF_Font * font = TTF_OpenFont(fontName, fontSize);
	if(!font)
	{
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[!] Unable to open font: %s\n", TTF_GetError());
		return NULL;
	}

	SDL_Surface * surface = TTF_RenderText_Blended(font, text, color);
	if(!surface)
	{
		TTF_CloseFont(font);
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[!] Unable to apply text on surface: %s\n", TTF_GetError());
		return NULL;
	}

	SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, surface);
	if(!texture)
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "[!] Unable to create texture: %s\n", SDL_GetError());

	SDL_FreeSurface(surface);
	TTF_CloseFont(font);
	return texture;
}

void renderTextureClip(SDL_Texture * texture, SDL_Renderer * renderer, SDL_Rect dest, SDL_Rect * clip)
{
	SDL_RenderCopy(renderer, texture, clip, &dest);
}

void renderTexture(SDL_Texture * texture, SDL_Renderer * renderer, int x, int y, SDL_Rect * clip)
{
	SDL_Rect dest;
	dest.x = x;
	dest.y = y;

	if(!clip)
		SDL_QueryTexture(texture, NULL, NULL, &dest.w, &dest.h);
	else
	{
		dest.w = clip->w;
		dest.h = clip->h;
	}

	renderTextureClip(texture, renderer, dest, clip);
}

void cleanUp(SDL_Window * window, SDL_Renderer * renderer)
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	TTF_Quit();
	IMG_Quit();
	SDL_Quit();
}

bool isTwoSelect(int nbLin, int nbCol, bool tab[nbLin][nbCol], bool judge[nbLin][nbCol], int matrix[nbLin][nbCol])
{
	int i1 = -1, j1 = -1, i2 = -1, j2 = -1;
	for(int i = 0; i < nbLin; ++i)
		for(int j = 0; j < nbCol; ++j)
		{	
			if(tab[i][j] && !judge[i][j])
			{
				if(i1 == -1)
					i1 = i, j1 = j;
				else
				{
					i2 = i, j2 = j;
					if(matrix[i1][j1] == matrix[i2][j2])
					{
						judge[i1][j1] = judge[i2][j2] = true;
						return true;
					}
					else
					{
						tab[i1][j1] = tab[i2][j2] = false;
						return false;
					}

				}
			}
		}
	return false;	
}

bool hasWon(int nbLin, int nbCol, bool judge[nbLin][nbCol])
{
	for(int i = 0; i < nbLin; ++i)
		for(int j = 0;  j < nbCol; ++j)
			if(!judge[i][j])
				return false;
	return true;
}

void shuffle(int nbLin, int nbCol, int matrix[nbLin][nbCol])
{
	for(int i = 0; i < nbLin; ++i)
	{
		int r = rand() % (nbLin - i);
		for(int j = 0; j < nbCol; ++j)
		{
			int temp = matrix[i][j];
			matrix[i][j] = matrix[r][j];
			matrix[r][j] = temp;
		}
	}
}