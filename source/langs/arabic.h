#define	I_SPEAK "I speak Arabic."
#define	L001(a,b) S("PRIVMSG %s :Lam tada3 kalimate Morour, Li wad3i Kalimate Morour: \2/msg %s PASS <kalimate Morour 9adima> <kalimate Morour Jadida>\2 (Bima Anaha hya Al Marra Oula Allati takhtaro fiha kalimate Morour , Ista3mile '0' Sifr Ka kalimate Morour 9adima)\n",a,b)
#define	L002(a,b,c) S("NOTICE %s :7odifa Ban Da4im #%d, %s.\n",a,b,c)
#define	L003(a,b) S("NOTICE %s :Ghayr 9adir 3ala fat7 %s :(\n",a,b)
#define L004(a,b,c) S("PRIVMSG %s :%s, honaka %d SEEN's fi 9a3idat bayanati.\n",a,b,c)
#define	L005(a,b) S("PRIVMSG %s :3alayka an ta3rifa akthar mini 7awla hada al mawdou3, %s.\n",a,b)
#define	L006(a,b,c,d) S("PRIVMSG %s :%s, Lam ara %s %s\n",a,b,c,d)
#define	L007(a,b) S("NOTICE %s :Autotopic 3ala %s hia OFF\n",a,b)
#define	L008(a,b) S("NOTICE %s :Autotopic on %s hya l4an OFF\n",a,b);
#define	L009(a,b,c) S("NOTICE %s :AUTOTOPIC @ %s ON: %s\n",a,b,c)
#define	L010(a,b,c) S("NOTICE %s :AUTOTOPIC @ %s 7odetha: %s\n",a,b,c)
#define	L011(a,b,c) S("PRIVMSG %s :%s, Anhayte. Honaka l2ana %d min al achya2 al 3achwa2iya.\n",a,b,c)
#define	L012(a,b) S("NOTICE %s :kalimte Morour li %s 9ad Jodithate.\n",a,b)
#define	L013(a) S("NOTICE %s :kalimate Morour khat2a!\n",a)
#define	L014(a) S("NOTICE %s :ghayr mawjood!\n",a)
#define	L015(a,b,c,d) S("NOTICE %s :7odifa al Mostakhdim: %s [%d:%d]\n",a,b,c,d)
#define	L016(a,b) S("PRIVMSG %s :%s: ta9ssim bi Sifr khata2!\n",a,b)
#define	L017(a,b) S("PRIVMSG %s :%s: 3amalia ghayr 9anounia!\n",a,b)
#define	L018(a,b,c,d,e) S("KICK %s %s :%s (idafatoka il tajahol #%d: %s)\n",a,b,c,d,e)
#define	L019(a,b,c) S("PRIVMSG %s :idafatoka ila tajahol #%d: %s!\n",a,b,c);
#define L020(a,b,c,d) S("NOTICE %s :7oditha #%d: \37[\37%s\37]\37 Ma3loumate\2:\2 %s\n",a,b,c,d)
#define	L021(a,b,c,d) S("PRIVMSG %s :%s \37%s\37.. %d Madda bo7itate.\n",a,b,c,d)
#define	L022(a,b,c) S("PRIVMSG %s :Wajadto akthar min \37%d\37 min fadlek ij3al ba7thaka akthar di9a\2:\2 \%s\n",a,b,c);
#define	L023(a,b,c) S("PRIVMSG %s :wajadto \37Motatabi9\37 Wa7eda, %s\2:\2 %s\n",a,b,c)
#define	L024(a,b,c,d) S("PRIVMSG %s :wajadto \37%d\37 Motatabi9, %s\2:\2 %s\n",a,b,c,d)
#define	L025(a,b) S("PRIVMSG %s :wajadto %ld madkhal motachabih. 9ad 7odifou.\n",a,b)
#define	L026(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Astakhdimo %s. Ladaya %ld mawadee3 fi 9a3idate bayanaty, moshaghal limodaate: %d yawm%, %02d:%02d, honaka %ld as2ila tori7at, %ld mawdoo3 odifa, and %ld mawdoo3 7odifa, Mondo an Wasalte. Wa9te Al 3amalia: %1.4lf sec%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L027(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Astakhdimo %s. ladaya %ld mawadee3 fi 9a3idate bayanaty, moshaghal limodaate: %d sa3at%s, %d da9i9a%s, honaka %ld as2ila tori7at, %ld mawdoo3 odifa, and %ld mawdoo3 7odifa, Mondo an Wasalte. wa9t al 3amalia: %1.4lf sec%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L028(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Astakhdimo %s. Ladaya %ld mawadee3 fi 9a3idate bayanaty, moshaghal limodaate: %d min%s, %d sec%s, honaka %ld as2ila tori7at, %ld mawdoo3 odifa, and %ld mawdoo3 7odifa, Mondo an Wasalte. wa9t al 3amalia: %1.4lf sec%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L029(a,b,c,d) S("PRIVMSG %s :%s: La9ad 7adaftou al mawdou3 #%ld, \2%s\2.\n",a,b,c,d)
#define	L029n(a,b,c,d) S("NOTICE %s :%s: La9ad 7adaftou al mawdou3 #%ld, \2%s\2.\n",a,b,c,d)
#define	L030(a,b,c) S("PRIVMSG %s :%s\2:\2 lam yakoun fii stita3aty woujouda al mawdou3 %s. 3amaliyat al 7adf fashilate.\n",a,b,c)
#define	L030n(a,b,c) S("NOTICE %s :%s\2:\2 lam yakoun fii stita3aty woujouda al mawdou3 %s. 3amaliyat al 7adf fashilate.\n",a,b,c)
#define	L031(a,b) S("NOTICE %s :A Tari9a: \2/msg %s PASS <kalimate Morour 9adima> <kalimate Morour Jadida>\2\n",a,b)
#define	L032(a)	Snow("QUIT :K\2\2illed (%s (li anani 9olto kadalik!))\n",a)
#define	L033(a)	S("NOTICE %s :A Tari9a: UP <#chan> <kalimate Morour>\n",a)
#define	L034(a)	S("NOTICE %s :A Tari9a: OP <#chan> [la9ab] <kalimate Morour>\n",a)
#define	L035(a)	S("NOTICE %s :A Tari9a: DEOP <#chan> [la9ab] <kalimate Morour>\n",a)
#define	L036(a)	S("NOTICE %s :7adid la9ab!\n",a)
#define	L037(a,b) S("NOTICE %s :Asta3id li /nick %s\n",a,b)
#define	L038(a,b) S("NOTICE %s :O7awil /nick %s-dork.\n",a,b)
#define	L039(a,b) S("PRIVMSG %s :Moghadir %s\n",a,b)
#define	L040(a,b) S("PRIVMSG %s :Dokhoul %s\n",a,b)
#define	L041(a)	S("PRIVMSG %s :7adid la9ab/9anate!\n",a)
#define	L042(a)	S("NOTICE %s :Adkhil user@host Li takhaloss minh!\n",a)
#define	L043(a) S("NOTICE %s :La youjad ayo ban.\n",a)
#define	L044(a)	S("NOTICE %s :Adkhil user@host Lil 7adf!\n",a)
#define	L045(a) S("NOTICE %s :wa ida lam af3al kadalik??\n",a)
#define	L046(a)	S("PRIVMSG %s :9a3idate al bayanate 9ad do3imate.\n",a)
#define	L047(a,b) S("NOTICE %s :A Tari9a: %cAUTOTOPIC <Mawdou3>  (Da3 \"0\" Lil 2itfa2)\n",a,b)
#define	L048(a)	S("NOTICE %s :A Tari9a: SETCHAN <9anate jadida>\n",a)
#define	L049(a,b) S("NOTICE %s :9anat Ra2issiya: %s\n",a,b)
#define	L050(a)	S("NOTICE %s :A Tari9a: SETCHAR <ARRamz al jadid>\n",a)
#define	L051(a,b) S("NOTICE %s :Ramz al 9iyada al aana: %c\n",a,b)
#define	L052(a)	S("NOTICE %s :A Tari9a: SETUSER <howia jadida> (Yatattalab I3adat Atachghil)\n",a)
#define	L053(a,b) S("NOTICE %s :al hawia al asslia l'aan: %s\n",a,b)
#define	L054(a)	S("NOTICE %s :A Tari9a: SETNICK <La9ab Jadid>\n",a)
#define	L055(a)	S("NOTICE %s :A Tari9a: ADDUSER <#9anate> <*user@*.host> <Daraja> <Kalimate Morour>. ie; ADDUSER #darkbot *bot@*.darkbot.info 3 kalimate Morourih... Ista3mil #* Ida Aradta i3ta2aho Madkhal Fi Jamee3 al 9anawate.\n",a)
#define	L056(a)	sprintf(temp, "Lam astakhdim \2%cSETINFO\2 Ba3d!",a)
#define	L057(a,b,c)	S("NOTICE %s :Odifa Al Mostakhdem: %s - level %d\n",a,b,c)
#define	L058(a,b,c)	S("NOTICE %s :A Tari9a: %c%s <user@host> [Sabab]\n",a,b,c)
#define	L059(a,b,c,d) S("NOTICE %s :Odifa fi al ban Da2im #%d, %s; Sabab: %s\n",a,b,c,d)
#define	L060(a)	S("NOTICE %s :A Tari9a: I3adat <Kam min Marra> <Modda> <bayanate-raw>\n",a)
#define	L061(a)	S("NOTICE %s :Otmima.\n",a)
#define	L062(a) S("QUIT :I3ada Tachghil %s ...\n",a);
#define	L064(a,b) S("PRIVMSG %s :%s, Mada Torido An Todife?\n",a,b)
#define	L064n(a,b) S("NOTICE %s :%s, Mada Torido An Todife?\n",a,b)
#define	L065(a,b) S("PRIVMSG %s :Idafate Mada, %s?\n",a,b);
#define	L066(a,b,c)	S("PRIVMSG %s :%s: Ayate ma3loumate yajibe an todafa %s?\n",a,b,c)
#define	L067(a,b) S("PRIVMSG %s :7assanan, %s :)\n",a,b)
#define Lbadtopic(a,b) S("PRIVMSG %s :Assif %s, Lakena Daa3ma Li dalika al Mawdou3 9ad Ozile.\n",a,b);
#define Lbadtopic2(a,b) S("NOTICE %s :Assif %s, Lakena Daa3ma Li dalika al Mawdou3 9ad Ozile.\n",a,b);
#define	L065n(a,b) S("NOTICE %s :Idafate Mada, %s?\n",a,b);
#define	L066n(a,b,c)	S("NOTICE %s :%s: Ayate ma3loumate yajibe an todafa %s?\n",a,b,c)
#define	L067n(a,b) S("NOTICE %s :7assanan, %s :)\n",a,b)
#define	L068(a,b) S("PRIVMSG %s :Astabdile Mada, %s?\n",a,b)
#define	L069(a,b,c) S("PRIVMSG %s :%s: Ayate ma3loumate yajibe an astabdile %s?\n",a,b,c)
#define	L070(a,b,c) S("PRIVMSG %s :%s, %s 9ad Joddida.\n",a,b,c)
#define	L071(a,b,c,d) S("PRIVMSG %s :Honaka %d ban Da2im%s fi Dakira.\n",a,b,c,d)
#define	L073(a,b,c) S("PRIVMSG %s :%s, %d tania marrate 9able al achya2 al 3achwa2iya\n",a,b,c)
#define	L074(a,b,c)	S("PRIVMSG %s :%s: Fiha %d Ramz.\n",a,b,c)
#define	L075(a,b,c,d) S("PRIVMSG %s :%s, Honaka 7aalian %d mawdou3%s fi 7alate intidar.\n",a,b,c,d)
#define	L076(a,b) S("PRIVMSG %s :Ra2ayto %d yandam 7ata al ana.\n",a,b)
#define	L077(a,b,c,d,e)	S("PRIVMSG %s :Honaka %s %d khadim%s Fi 9a2imate khoddami. Ana 7alian Fi Al khadim #%d.\n",a,b,c,d,e)
#define	L078(a,b,c)	S("PRIVMSG %s :%s, Ramz 9iyadaty howa: %c\n",a,b,c)
#define	L079(a,b,c)	S("PRIVMSG %s :Mada yajib An %O7arrire li, %s?\n",a,b,c)
#define	L080(a,b) S("PRIVMSG %s :%s, Ta7taj lita7did 3onwane!\n",a,b)
#define	L081(a,b) S("PRIVMSG %s :Ghayre  9adir 3ala Nadar a3la %s.\n",a,b)
#define	L083(a,b,c)	S("PRIVMSG %s :%s: Mada torido an Okhbir %s?\n",a,b,c)
#define	L083n(a,b,c)	S("NOTICE %s :%s: Mada torido an Okhbir %s?\n",a,b,c)
#define	L084(a,b,c)	S("PRIVMSG %s :%s, Okhbir %s 7awla Mada?\n",a,b,c)
#define	L084n(a,b,c)	S("NOTICE %s :%s, Okhbir %s 7awla Mada?\n",a,b,c)
#define	L085(a,b) S("PRIVMSG %s :Okhbir Man, %s?\n",a,b)
#define	L085n(a,b) S("NOTICE %s :Okhbir Man, %s?\n",a,b)
#define	L086(a,b) S("PRIVMSG %s :%s\2:\2 A tas2ale?\n",a,b)
#define	L086n(a,b) S("NOTICE %s :%s\2:\2 A tas2ale?\n",a,b)
#define	L087(a,b,c,d,e) S("PRIVMSG %s :%s %s %s? A3id siyaghate dalika?  (A tari9a %cHELP Lilmossa3ada 7awla Na7we)\n",a,b,c,d,e)
#define	L087n(a,b,c,d,e) S("NOTICE %s :%s %s %s? A3id siyaghate dalika?  (A tari9a %cHELP Lilmossa3ada 7awla Na7we)\n",a,b,c,d,e)
#define	L088(a) S("QUIT :%s Mo7ashashe!\n",a)
#define	L089(a)	S("PRIVMSG %s :\1ACTION Yastay9id...\1\n",a)
#define	L090(a,b) S("PRIVMSG %s :Ata3arad lil'flood. Irssal 9a2imate al intidar (al ma3loumate fi intidar al irssal). %d Band 7odifa.\n",a,b)
