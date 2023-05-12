
#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>


#define mCHAR 0
#define mNR 1

#define mNAV 2
#define mNAV2 3

#define mPRG 4
#define mSPRG 5

#define mFUNC 6
#define mSFUNC 7

#define mSYM 8
#define mSSYM 9

#define mMOD 10
#define mSMOD 11			

#define mBCHAR 12
#define mBNR 13
 
/ {
    chosen {
    	zmk,matrix_transform = &default_transform;
    };
};



/ {

    behaviors {
        mdNr: tap_dance_mdNr {
            compatible = "zmk,behavior-tap-dance";
            label = "TAP_DANCE_mdNr";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&sl mNR>, <&to mNr>;
        };
    };

	keymap
	{	
		compatible = "zmk,keymap";

		// --------------------------------------
		// Layer 0 - mChar = 	  Buchstaben	
		// --------------------------------------
	
		mac_buchstaben
		{
			label = "MAC";

			bindings = <

				&kp ESC
				&kp J 
				&kp D	 
				&kp U
				&kp A
				&kp X
				&kp P
				&kp H
				&kp L
				&kp M
				&kp W
				&kp BSPC
	
				&kp DEL
				&kp C
				&kp T
				&kp I
				&kp E
				&kp O
				&kp B
				&kp N
				&kp R
				&kp S
				&kp G
				&kp RET
	
				&none
				&kp F
				&kp V
				&kp MINUS
				&kp Y
				&kp Q
				&kp Z
				&kp SEMI
				&kp LBKT
				&kp SQT
				&kp K
				&none

				&sl mFUNC
				&kp SPACE
				&sl mNAV
				&sl mPRG
				&none
				&sl mMOD
			>;
		};



		// --------------------------------------
		// Layer 1 - mNR = 	  Zahlen	
		// --------------------------------------

		mac_zahlen
		{
			label = "MAC";

			bindings = <

				&kp ESC	
				&kp LS(N3)
				&kp NUBS
				&kp LS(NUBS)			
				&kp NUHS
				&kp X
				&kp LS(N4)
				&kp LA(E)
				&kp LA(M)
				&kp M
				&kp LS(N5)			
				&kp BSPC

				&kp DEL
				&kp N1				
				&kp N2				
				&kp N3				
				&kp N4					
				&kp N5				
				&kp N6				
				&kp N7				
				&kp N8				
				&kp N9				
				&kp N0				
				&kp ENTER 

				&none
				&kp LS(N7)
				&kp LS(N8)
				&kp LS(N9)
				&kp LS(RBRC)
				&kp LS(N0)
				&kp LS(N2)
				&kp RBKT
				&kp COMMA
				&kp DOT
				&kp SLASH		
				&none
		
				&sl mFUNC
				&kp SPACE 
				&sl mNAV
				&sl mPRG
				&none
				&sl mMOD
			>;		
		};



		// --------------------------------------
		// Layer = 2 - mNAV - Navigation
		// -------------------------------------

		mac_navigation
		{		
			label = "MAC";

			bindings = <

				&kp ESC
				&kp LG(LA(LC(F1)))		  	// open
				&kp LC(LS(TAB))				// Tap Switch
				&kp LC(TAB)		  			// Tab Switch 
				&kp LG(LA(LC(F2)))		  	// open
				&kp LG(LA(LC(F3)))		  	// Clipboard History
				&kp LG(HOME)				// Home Sprung
				&kp HOME	 				// Home 
				&kp UP						// Up
				&kp END						// End
				&kp PG_UP 					// Page Up
				&kp BACKSPACE				// Backspace

				&kp DEL 					// Delete
				&kp LG(LA(LC(F4)))		  	// Pfadsuche
				&kp LG(LA(LC(F5)))		  	// Umbennen
				&kp LGUI					// App Switch
				&kp LCTL					// Craft
				&kp LG(LA(LC(F6)))		  	// Fokus
				&kp LG(END) 				// End Sprung
				&kp LEFT 					// Left
				&kp DOWN					// Down
				&kp RIGHT 					// Right
				&kp PG_DN					// Page Down
				&kp ENTER					// Enter
				
				&kp LSHIFT					// Shift
				&kp LG(LA(LC(F7)))		  	// Seitenleiste links
				&kp LG(LA(LC(F8)))		  	// Pfad zurück
				&kp LG(LA(LC(F9)))		  	// Pfad vor
				&kp LG(LA(LC(F10)))		  	// Seitenleiste rechts
				&kp LG(LA(LC(F11)))		  	// open
				&kp LG(LA(LC(F12)))		  	// open
				&kp LS(TAB)					// zurück
				&kp LA(LEFT)				// Wort Sprung
				&kp LA(RIGHT)				// Wort Sprung
				&kp TAB						// vor
				&to mCHAR					// back

				&none
				&sl mBCHAR
				&sl mNAV2					// deep
				&kp LG(SPACE)
				&trans
				&none
			>;
		};

		// --------------------------------------
		// Layer = 3 - mNAV2 - Navigation
		// -------------------------------------

		mac_navigation2
		{		
			label = "MAC";

			bindings = <

				&kp LG(SLASH)				// Plus Alt
				&kp LG(LA(LC(F13)))		  	// Open
				&kp LG(LA(LC(F14)))		  	// Open
				&kp LG(LA(LC(F15)))		  	// Open
				&kp LG(LA(LC(F16)))		  	// Open
				&kp LG(LA(LC(F17)))		  	// Open
				&kp LG(LS(HOME))			// Home Sprung
				&kp LS(HOME) 				// Home 
				&kp LS(UP)					// Shift Up
				&kp LS(END)					// End
				&kp LC(PG_UP) 				// deep page
				&kp LC(RBKT)				// Minus Alt

				&kp LG(KP_MINUS) 			// Delete
				&kp LG(LA(LC(F18)))		  	// Open
				&kp LG(LA(LC(F19)))		  	// Open
				&kp LGUI					// GUI
				&kp LCTL					// CTL
				&kp LG(LA(LC(LS(F1))))	  	// Outlook
				&kp LG(LS(END)) 			// End Sprung Markierung
				&kp LS(LEFT) 				// Shift Left
				&kp LS(DOWN)				// Shift Down
				&kp LS(RIGHT) 				// Shift Right
				&kp LC(PG_DN)				// Control Page
				&kp LG(KP_PLUS)				// Enter
	
				&kp LSHIFT					// Shift
				&kp LG(LA(LC(LS(F2))))		// Outlook
				&kp LG(LA(LC(LS(F3))))		// Zurück History 
				&kp LG(LA(LC(LS(F4))))		// Vor History
				&kp LG(LA(LC(LS(F5))))		// Outlook
				&kp LG(LA(LC(LS(F6))))		// open			
				&kp LG(LA(LC(LS(F7))))		// open
				&kp LG(LA(LS(TAB)))			// TAB Alt
				&kp LA(LS(LEFT))			// Shift Wort Sprung
				&kp LA(LS(RIGHT))			// Shift Wort Sprung
				&kp LG(LA(TAB))				// TAB Alt
				&to mCHAR					// back

				&none
				&sl mBCHAR
				&trans
				&kp LG(LA(LC(SPACE)))	 	 	// Maestro Spotlight
				&trans
				&none
			>;
		};




		// --------------------------------------
		// Layer 4 - mPRG =	Programme
		// --------------------------------------


		mac_programme
		{
			label = "MAC";

			bindings = <

				&kp LG(H)					// Hide
				&kp LG(LA(LS(N1)))
				&kp LG(LA(LS(N2)))
				&kp LG(LA(LS(N3)))
				&kp LG(LA(LS(N4)))
				&kp LG(LA(LS(N5)))
				&kp LG(LA(LS(N6)))
				&kp LG(LA(LS(N7)))
				&kp LG(LA(LS(N8)))
				&kp LG(LA(LS(N9)))
				&kp LG(LA(LS(N0)))
				&kp LG(Q) 					// Quit

				&kp LG(LC(LA(UP)))			// Mission Control All
				&kp LG(LA(N1))
				&kp LG(LA(N2))
				&kp LG(LA(N3))
				&kp LG(LA(N4))
				&kp LG(LA(N5))
				&kp LG(LA(N6))
				&kp LG(LA(N7))
				&kp LG(LA(N8))
				&kp LG(LA(N9))
				&kp LG(LA(N0))
				&kp LG(TAB)					// Letztes Programm

				&to mCHAR					// back		
				&kp LC(LA(C))
				&kp LC(LA(T))
				&kp LC(LA(I))
				&kp LC(LA(E))
				&kp LC(LA(O))
				&kp LC(LA(B))
				&kp LC(LA(N))
				&kp LC(LA(R))
				&kp LC(LA(S))
				&kp LC(LA(G))
				&to mCHAR					// back
		
				&none
				&none
				&none
				&sl mSPRG
				&sl mSYM
				&none
			>;
		};


		// --------------------------------------
		// Layer 5 - mSPRG =	Spezial Prgramme
		// --------------------------------------


		mac_sprogramme
		{

			label = "MAC";

			bindings = <

				&kp LG(LA(H))					// Hard Hide
				&kp LG(LA(LC(LS(N1)))) 			
				&kp LG(LA(LC(LS(N2))))
				&kp LG(LA(LC(LS(N3))))
				&kp LG(LA(LC(LS(N4))))
				&kp LG(LA(LC(LS(N5))))
				&kp LG(LA(LC(LS(N6))))
				&kp LG(LA(LC(LS(N7))))
				&kp LG(LA(LC(LS(N8))))
				&kp LG(LA(LC(LS(N9))))
				&kp LG(LA(LC(LS(N0))))
				&kp LG(LA(ESC))					// Hard Quit
		
				&kp LA(LG(LC(DOWN))) 			// Mission Control Prg
				&kp LG(LA(LC(N1)))
				&kp LG(LA(LC(N2)))
				&kp LG(LA(LC(N3)))
				&kp LG(LA(LC(N4)))
				&kp LG(LA(LC(N5)))
				&kp LG(LA(LC(N6)))
				&kp LG(LA(LC(N7)))
				&kp LG(LA(LC(N8)))
				&kp LG(LA(LC(N9)))
				&kp LG(LA(LC(N0)))
				&kp LA(LG(LC(LS(TAB)))) 		// Prg Intern Cycle

				&to mCHAR						// back
				&kp LC(LA(LS(C)))
				&kp LC(LA(LS(T)))
				&kp LC(LA(LS(I)))
				&kp LC(LA(LS(E)))
				&kp LC(LA(LS(O)))
				&kp LC(LA(LS(B)))
				&none 							// OS Swap
				&kp LC(LA(LS(R)))				
				&kp LC(LA(LS(S)))
				&none 							// OS Swap
				&to mCHAR						// back			
		
				&none
				&none
				&none
				&trans
				&sl mSYM
				&none
			>;
		};



		// --------------------------------------
		// Layer 6 - mFUNC =	Funktionen
		// --------------------------------------

		mac_function
		{
			label = "MAC";

			bindings = <
	
				&kp LC(N6)					// Craft Format 
				&kp LC(N5)					// Craft Format 
				&kp LC(N4)					// Craft Format 
				&kp LC(N3)					// Craft Format 
				&kp LC(N2)					// Craft Format 
				&kp LC(N1)					// Craft Format 
				&kp LG(LA(LC(LS(F8))))		// 
				&kp LG(LA(LC(LS(F9))))		// Window Swap
				&kp LG(LC(UP))				// Window Move
				&kp LG(LA(LC(LS(F10))))		// Window Swap
				&kp LG(LA(LC(LS(F11))))		// 
				&kp LG(LC(Q))				// Sperren 
				
				&kp LS(DEL)					// Delete Special
				&kp LG(LS(B))				// Craft Format
				&kp LG(U) 					// Craft Format
				&kp LG(I)					// Craft Format
				&kp LG(B) 					// Craft Format
				&kp LG(LS(C))				// Craft Format
				&kp LG(LA(LC(LS(F12))))		// 
				&kp LG(LC(LEFT))			// Window Move
				&kp LG(LC(DOWN))			// Window Move
				&kp LG(LC(RIGHT))			// Window Move
				&kp LG(LA(LC(LS(F13))))		// 
				&kp INSERT

				&to mCHAR					// back
				&kp C_PREVIOUS 
				&kp C_PP
				&kp C_PP 
				&kp C_NEXT 
				&bt BT_SEL 0
				&bt BT_NXT 
				&kp C_VOLUME_DOWN 
				&kp C_MUTE
				&kp C_MUTE
				&kp C_VOLUME_UP 
				&to mCHAR					// back		
				
				&sl mSFUNC
				&kp LG(LA(LC(LS(MINUS))))		// Shortcat
				&none
				&none
				&none
				&none
			>;
		};

		// --------------------------------------
		// Layer 7 - mSFUNC =	Spezial Funktionen
		// --------------------------------------

		mac_specialfunction
		{
			label = "MAC";

			bindings = <

				&kp LG(LC(LA(NUHS)))   		// Screenshot
				&kp LG(LA(LC(LS(F14))))		// 
				&kp LG(LA(LC(LS(F15))))		// 
				&kp LG(LA(LC(LS(F16))))		// 
				&kp LG(LA(LC(LS(F17))))		// 
				&kp LG(LA(LC(LS(F18))))		// 
				&kp LG(LA(LC(LS(F19))))		// 
				&kp LG(LA(LS(F1)))			//
				&kp LG(LA(LS(F2)))			//
				&kp LG(LA(LS(F3)))			//
				&kp LG(LA(LS(F4)))			//
				&kp LC(LG(LS(ESC)))			// Herunterfahren

				&kp LG(LA(LC(Y)))			// drehen
				&kp LG(LS(SLASH))			// Craft Format (Durch)
				&kp LG(LS(P))				// Craft Format (Seite)
				&kp LG(LS(NUHS))			// Craft Format (Focus)
				&kp LG(LS(EQUAL))			// Craft Format (Block)
				&kp LG(LS(T))				// Craft Ausklappen
				&kp LG(LA(LS(F5)))			//
				&kp LG(LA(LS(F6)))			//
				&kp LG(LA(LS(F7)))			//
				&kp LG(LA(LS(F8)))			//
				&kp LG(LA(LS(F9)))			//
				&kp LG(LA(LC(Z)))			// drehen

				&to mCHAR					// back
				&trans
				&trans
				&trans
				&trans
				&bt BT_CLR 	
				&bt BT_CLR 	
				&kp LG(LA(LC(GRAVE)))		// Bright
				&trans
				&trans
				&kp LG(LA(LC(EQUAL)))		// Bright
				&to mCHAR					// back
		
				&trans
				&kp LG(LA(LC(LS(MINUS))))		// Shortcat
				&none
				&none
				&none
				&none            
			>;
		};



		// --------------------------------------
		// Layer 8 - mSYM =	Symoble
		// --------------------------------------

		mac_symbole
		{
			label = "MAC";

			bindings = <
				
				&kp LG(LC(SPACE))   		// Sonderzeichen
				&kp LS(N3)
				&kp NUBS
				&kp LS(NUBS)			
				&kp NUHS
				&kp X
				&kp LS(N4)
				&kp LA(E)
				&kp LA(M)
				&kp M
				&kp LS(N5)			
				&kp BACKSPACE

				&kp GRAVE					// quadrat alt
				&kp LA(N7)				
				&kp LA(N)				
				&kp GRAVE				
				&kp LA(L)					
				&kp LS(N6)	
				&kp EQUAL		
				&kp LS(N1)		
				&kp LS(COMMA)	
				&kp LS(DOT)				
				&kp LS(MINUS)				
				&kp ENTER

				&to mCHAR					// back
				&kp LS(N7)
				&kp LS(N8)
				&kp LS(N9)
				&kp LS(RBRC)
				&kp LS(N0)
				&kp LS(N2)
				&kp RBKT
				&kp COMMA
				&kp DOT
				&kp SLASH		
				&to mCHAR					// back
		
				&trans 
				&kp SPACE
				&trans
				&trans
				&sl mSSYM
				&trans
			>;
		};



		// --------------------------------------
		// Layer 9 - mSSYM =	Special Symbole
		// --------------------------------------

		mac_specialsonderzeichen
		{
			label = "MAC";

			bindings = <

				&kp LG(LC(SPACE))   		// Sonderzeichen
				&kp LS(N3)
				&kp LA(N5)
				&kp LA(N6)			
				&kp NUHS
				&kp X
				&kp LS(N4)
				&kp LA(E)
				&kp LA(M)
				&kp M
				&kp LS(N5)			
				&kp BACKSPACE

				&kp GRAVE					// quadrat alt
				&kp LA(N7)				
				&kp LA(N)				
				&kp LS(GRAVE)
				&kp LA(L)					
				&kp LS(N6)				
				&kp LS(EQUAL)	
				&kp LS(N1)				
				&kp LS(COMMA)	
				&kp LS(DOT)				
				&kp LS(MINUS)				
				&kp ENTER

				&to mCHAR					// back
				&kp LS(LA(N7))
				&kp LA(N8)
				&kp LA(N9)
				&kp LS(RBRC)
				&kp LS(N0)
				&kp LS(NUHS)
				&kp RBKT
				&kp COMMA
				&kp DOT
				&kp LS(SLASH)	
				&to mCHAR					// back

				&none
				&kp SPACE
				&none
				&none
				&trans
				&none
			>;
		};	




		// --------------------------------------
		// Layer 10 - mMOD =	GUI
		// --------------------------------------

		mac_mod
		{
			label = "MAC";

			bindings = <

				&kp LG(Y)					// Zurück
				&kp LG(J)
				&kp LG(D)
				&kp LG(U)
				&kp LG(A)
				&kp LG(X)
				&kp LG(P)
				&kp LG(H)
				&kp LG(L) 
				&kp LG(M)
				&kp LG(W) 
				&kp LA(BACKSPACE)			// Wort enfternen
		
				&kp LA(DELETE)				// Wort entfernen
				&kp LG(C)
				&kp LG(T)
				&kp LG(I)
				&kp LG(E)
				&kp LG(O)	
				&kp LG(B)
				&kp LG(N)
				&kp LG(R)
				&kp LG(S)
				&kp LG(G)
				&kp LG(ENTER)				// Enter Mod	

				&to mCHAR					// back
				&kp LG(F)
				&kp LG(V)
				&kp LG(MINUS)
				&kp LG(Y)
				&kp LG(Q)
				&kp LG(Z)
				&kp LG(SEMICOLON)
				&kp LG(LEFT_BRACKET)
				&kp LG(SINGLE_QUOTE)
				&kp LG(K) 
				&to mCHAR					// back			
		
				&none
				&kp LG(SPACE)
				&none
				&none
				&none
				&sl mSMOD
			>;
		};



		// --------------------------------------
		// Layer 11 - mSMOD =	Spezial GUI
		// --------------------------------------

		mac_smod
		{	
			label = "MAC";

			bindings = <
			
				&kp LS(LG(Y))					// Wiederholen
				&kp LA(LG(LC(J)))
				&kp LA(LG(LC(D)))
				&kp LA(LG(LC(U)))
				&kp LA(LG(LC(A)))
				&kp LA(LG(LC(X)))
				&kp LA(LG(LC(P)))
				&kp LA(LG(LC(H))) 
				&kp LA(LG(LC(L))) 
				&kp LA(LG(LC(M)))
				&kp LA(LG(LC(W)))
				&kp LG(BACKSPACE)			// Zeile enfternen
		
				&kp LG(DELETE)				// Zeile entfernen 
				&kp LA(LG(LC(C)))
				&kp LA(LG(LC(T)))
				&kp LA(LG(LC(I)))
				&kp LA(LG(LC(E)))
				&kp LA(LG(LC(O)))
				&kp LA(LG(LC(B)))
				&kp LA(LG(LC(N)))
				&kp LA(LG(LC(R)))
				&kp LA(LG(LC(S)))
				&kp LA(LG(LC(G)))
				&kp LA(LG(ENTER))			// Enter Mod

				&to mCHAR					// back
				&kp LA(LG(LC(F)))
				&kp LA(LG(LC(V)))
				&kp LA(LG(LC(MINUS)))
				&kp LA(LG(LC(Y)))
				&kp LA(LG(LC(Q)))
				&kp LA(LG(LC(Z)))
				&kp LA(LG(LC(SEMICOLON)))
				&kp LA(LG(LC(LEFT_BRACKET)))
				&kp LA(LG(LC(SINGLE_QUOTE)))
				&kp LA(LG(LC(K)))
				&to mCHAR					// back

				&none
				&kp LA(LG(LC(SPACE)))
				&none
				&none
				&none
				&trans
			>;
		};



		// --------------------------------------
		// Layer 12 - mBCHAR = 	  Buchstaben	
		// --------------------------------------
	
		mac_bigbuchstaben
		{
			label = "MAC";

			bindings = <

				&kp ESC
				&kp LS(J) 
				&kp LS(D)	 
				&kp LS(U)
				&kp LS(A)
				&kp LS(X)
				&kp LS(P)
				&kp LS(H)
				&kp LS(L)
				&kp LS(M)
				&kp LS(W)
				&kp LS(BSPC)
	
				&kp LS(DEL)
				&kp LS(C)
				&kp LS(T)
				&kp LS(I)
				&kp LS(E)
				&kp LS(O)
				&kp LS(B)
				&kp LS(N)
				&kp LS(R)
				&kp LS(S)
				&kp LS(G)
				&kp LS(RET)
	
				&kp LSHIFT
				&kp LS(F)
				&kp LS(V)
				&kp LS(MINUS)
				&kp LS(Y)
				&kp LS(Q)
				&kp LS(Z)
				&kp LS(SEMI)
				&kp LS(LBKT)
				&kp LS(SQT)
				&kp LS(K)
				&kp LSHIFT

				&none
				&trans
				&none
				&none
				&trans
				&none
			>;
		};


		// --------------------------------------
		// Layer 13 - mBNR = 	  Zahlen	
		// --------------------------------------

		mac_zahlen2
		{
			label = "MAC";

			bindings = <

				&kp ESC	
				&kp LS(N3)
				&kp NUBS
				&kp LS(NUBS)			
				&kp NUHS
				&kp X
				&kp LS(N4)
				&kp LA(E)
				&kp LA(M)
				&kp M
				&kp LS(N5)			
				&kp BSPC

				&kp DEL
				&kp N1				
				&kp N2				
				&kp N3				
				&kp N4					
				&kp N5				
				&kp N6				
				&kp N7				
				&kp N8				
				&kp N9				
				&kp N0				
				&kp ENTER 

				&kp LSHIFT
				&kp LS(N7)
				&kp LS(N8)
				&kp LS(N9)
				&kp LS(RBRC)
				&kp LS(N0)
				&kp LS(N2)
				&kp RBKT
				&kp COMMA
				&kp DOT
				&kp SLASH		
				&trans
		
				&none
				&trans
				&none
				&none
				&trans
				&none
			>;		
		};
	};
};
