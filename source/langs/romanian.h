#define	I_SPEAK "Vorbesc Romana."
#define	L001(a,b) S("PRIVMSG %s :Inca nu ai stabilit o parola, pentru a stabili una: \2/msg %s PASS \
<parolaVeche> <parolaNoua>\2 (pentru ca este prima data cand stabilesti o parola, foloseste '0' pentru parolaVeche)\n",a,b)
#define	L002(a,b,c) S("NOTICE %s :Am anulat ban-ul permanent #%d, %s.\n",a,b,c)
#define	L003(a,b) S("NOTICE %s :Nu pot deschide %s :(\n",a,b)
#define L004(a,b,c) S("PRIVMSG %s :%s, Am %d SEEN'uri in baza de date.\n",a,b,c)
#define	L005(a,b) S("PRIVMSG %s :Tu ar trebui sa stii mai multe decat mine, %s.\n",a,b)
#define	L006(a,b,c,d) S("PRIVMSG %s :%s, N-am dat cu ochii de %s %s\n",a,b,c,d)
#define	L007(a,b) S("NOTICE %s :Autotopic in %s era dezactivat \n",a,b)
#define	L008(a,b) S("NOTICE %s :Autotopic in %s este acum dezactivat\n",a,b);
#define	L009(a,b,c) S("NOTICE %s :AUTOTOPIC @ %s Activ: %s\n",a,b,c)
#define	L010(a,b,c) S("NOTICE %s :AUTOTOPIC @ %s actualizat: %s\n",a,b,c)
#define	L011(a,b,c) S("PRIVMSG %s :%s, s-a facut! Acum am %d randomstuffs.\n",a,b,c)
#define	L012(a,b) S("NOTICE %s :Parola pentru %s a fost actualizata.\n",a,b)
#define	L013(a) S("NOTICE %s :Parola incorecta!\n",a)
#define	L014(a) S("NOTICE %s :Nici o potrivire!\n",a)
#define	L015(a,b,c,d) S("NOTICE %s :Am sters user-ul: %s [%d:%d]\n",a,b,c,d)
#define	L016(a,b) S("PRIVMSG %s :%s: Nu se imparte prin 0!!\n",a,b)
#define	L017(a,b) S("PRIVMSG %s :%s: Operatie ilegala!\n",a,b)
#define	L018(a,b,c,d,e) S("KICK %s %s :%s (adding ignore #%d: %s)\n",a,b,c,d,e)
#define	L019(a,b,c) S("PRIVMSG %s :Ignor pe #%d: %s!\n",a,b,c);
#define L020(a,b,c,d) S("NOTICE %s :Actualizat: #%d: \37[\37%s\37]\37 info\2:\2 %s\n",a,b,c,d)
#define	L021(a,b,c,d) S("PRIVMSG %s :%s \37%s\37.. am cautat in %d inregistrari.\n",a,b,c,d)
#define	L022(a,b,c) S("PRIVMSG %s :Am gasit mai mult de \37%d\37 potriviri, te rog incearca sa reduci numarul\2:\2 \
%s\n",a,b,c);
#define	L023(a,b,c) S("PRIVMSG %s :Am gasit \37o\37 potrivire, %s\2:\2 %s\n",a,b,c)
#define	L024(a,b,c,d) S("PRIVMSG %s :Am gasit \37%d\37 potriviri, %s\2:\2 %s\n",a,b,c,d)
#define	L025(a,b) S("PRIVMSG %s :Am gasit %ld inregistrari dedublate...si le-am sters.\n",a,b)
#define	L026(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Rulez %s. Am %ld inregistrari in baza de date, Uptime: \
%d zile%s, %02d:%02d, Am fost intrebat %ld intrebari, %ld inregistrari adaugate, si %ld inregistrari sterse. \
Timp de procesare: %1.4lf sec%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L027(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Rulez %s. Am %ld topics in baza de date, Uptime: \
%d ore%s, %d min%s, Au fost puse %ld intrebari, %ld inregistrari noi, si %ld inregistrari sterse. \
Timp de procesare: %1.4lf sec%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L028(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Rulez %s. Am %ld inregistrari in baza de date, Uptime: \
%d min%s, %d sec%s, S-au pus %ld intrebari, %ld inregistrari au fost adaugate, si %ld inregistrari au fost sterse. \
Timp de procesare: %1.4lf sec%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L029(a,b,c,d) S("PRIVMSG %s :%s: Am sters inregistrarea #%ld, \2%s\2.\n",a,b,c,d)
#define	L030(a,b,c) S("PRIVMSG %s :%s\2:\2 Nu am gasit nici o inregistrare %s. Suprimare ratata.\n",a,b,c)
#define	L029n(a,b,c,d) S("NOTICE %s :%s: Am sters inregistrarea #%ld, \2%s\2.\n",a,b,c,d)
#define	L030n(a,b,c) S("NOTICE %s :%s\2:\2 Nu am gasit nici o inregistrare %s. Suprimare ratata.\n",a,b,c)
#define	L031(a,b) S("NOTICE %s :Syntax: \2/msg %s PASS <parolaVeche> <parolaNoua>\2\n",a,b)
#define	L032(a)	Snow("QUIT :K\2\2illed (%s (pentru ca am zis eu!))\n",a)
#define	L033(a)	S("NOTICE %s :Syntax: UP <#chan> <parola>\n",a)
#define	L034(a)	S("NOTICE %s :Syntax: OP <#chan> [nicks] <parola>\n",a)
#define	L035(a)	S("NOTICE %s :Syntax: DEOP <#chan> [nicks] <parola>\n",a)
#define	L036(a)	S("NOTICE %s :Specifica un nick!\n",a)
#define	L037(a,b) S("NOTICE %s :Incerc /nick %s\n",a,b)
#define	L038(a,b) S("NOTICE %s :Incearca /nick %s-fraiere.\n",a,b)
#define	L039(a,b) S("PRIVMSG %s :Plec din %s\n",a,b)
#define	L040(a,b) S("PRIVMSG %s :Intru in %s\n",a,b)
#define	L041(a)	S("PRIVMSG %s :Specifica un nick/canal!\n",a)
#define	L042(a)	S("NOTICE %s :Specifica u@h-ul de sters!\n",a)
#define	L043(a) S("NOTICE %s :Acest ban nu exista.\n",a)
#define	L044(a)	S("NOTICE %s :Specifica u@h-ul de sters!\n",a)
#define	L045(a) S("NOTICE %s :Ce-ar fi sa NU fac asta?\n",a)
#define	L046(a)	S("PRIVMSG %s :Am facut copie de siguranta pentru baza de date.\n",a)
#define	L047(a,b) S("NOTICE %s :SINTAXA: %cAUTOTOPIC <topic>  (seteaza-l \"0\" pentru a-l dezactiva)\n",a,b)
#define	L048(a)	S("NOTICE %s :Sintaxa: SETCHAN <canalNou>\n",a)
#define	L049(a,b) S("NOTICE %s :Canalul implicit: %s\n",a,b)
#define	L050(a)	S("NOTICE %s :Sintaxa: SETCHAR <nou caracter de comanda>\n",a)
#define	L051(a,b) S("NOTICE %s :Noul caracter de comanda este: %c\n",a,b)
#define	L052(a)	S("NOTICE %s :Sintaxa: SETUSER <nou userID> (trebuie restart)\n",a)
#define	L053(a,b) S("NOTICE %s :userID-ul actual este: %s\n",a,b)
#define	L054(a)	S("NOTICE %s :Sintaxa: SETNICK <noulNick>\n",a)
#define	L055(a)	S("NOTICE %s :Sintaxa: ADDUSER <#canal> <*user@*.host> <nivel> <parola>. exemplu; ADDUSER #darkbot \
*jason@*.superlink.net 3 parolaLui ... foloseste #* daca vrei sa-i acorzi acces in toate canalele.\n",a)
#define	L056(a)	sprintf(temp, "nu am folosit \2%cSETINFO\2 inca!",a)
#define	L057(a,b,c)	S("NOTICE %s :Am adaugat userul: %s - nivel %d\n",a,b,c)
#define	L058(a,b,c)	S("NOTICE %s :Sintaxa: %c%s <u@h> [motiv]\n",a,b,c)
#define	L059(a,b,c,d) S("NOTICE %s :Am adugat ban-ul permanent #%d, %s; motiv: %s\n",a,b,c,d)
#define	L060(a)	S("NOTICE %s :Sintaxa: REPEAT <numar> <durataRepetitiei> <comanda irc>\n",a)
#define	L061(a)	S("NOTICE %s :S-a facut.\n",a)
#define	L062(a) S("QUIT :Fac un restart %s ...\n",a);
#define	L064(a,b) S("PRIVMSG %s :%s, ce vrei sa adaugi?\n",a,b)
#define	L064n(a,b) S("NOTICE %s :%s, ce vrei sa adaugi?\n",a,b)
#define	L065(a,b) S("PRIVMSG %s :Ce adaug, %s?\n",a,b);
#define	L066(a,b,c)	S("PRIVMSG %s :%s: Ce sa adaug pentru %s?\n",a,b,c)
#define	L067(a,b) S("PRIVMSG %s :Okay, %s :)\n",a,b)
#define	L065n(a,b) S("NOTICE %s :Ce adaug, %s?\n",a,b);
#define	L066n(a,b,c) S("NOTICE %s :%s: Ce sa adaug pentru %s?\n",a,b,c)
#define	L067n(a,b) S("NOTICE %s :Okay, %s :)\n",a,b)
#define	L068(a,b) S("PRIVMSG %s :Ce sa inlocuiesc, %s?\n",a,b)
#define	L069(a,b,c) S("PRIVMSG %s :%s: Ce ar trebui sa inlocuiasca %s?\n",a,b,c)
#define	L070(a,b,c) S("PRIVMSG %s :%s, %s a fost actualizat.\n",a,b,c)
#define	L071(a,b,c,d) S("PRIVMSG %s :Am %s %d ban-uri permanente%s incarcate in ram.\n",a,b,c,d)
#define	L073(a,b,c) S("PRIVMSG %s :%s, %d secunde ramase pana la randstuff\n",a,b,c)
#define	L074(a,b,c)	S("PRIVMSG %s :%s: are %d caractere.\n",a,b,c)
#define	L075(a,b,c,d) S("PRIVMSG %s :%s, Sunt %d lucruri de zis%s in coada.\n",a,b,c,d)
#define	L076(a,b) S("PRIVMSG %s :Am vazut %d join-uri pana acum.\n",a,b)
#define	L077(a,b,c,d,e)	S("PRIVMSG %s :Am %s %d servere%s in lista. Acum sunt pe server-ul \
#%d.\n",a,b,c,d,e)
#define	L078(a,b,c)	S("PRIVMSG %s :%s, caracterul meu de comanda este: %c\n",a,b,c)
#define	L079(a,b,c)	S("PRIVMSG %s :Ce ar trebui sa %s, %s?\n",a,b,c)
#define	L080(a,b) S("PRIVMSG %s :%s, trebuie sa specifici o adresa!\n",a,b)
#define	L081(a,b) S("PRIVMSG %s :Nu am putut sa caut %s.\n",a,b)
#define	L083(a,b,c)	S("PRIVMSG %s :%s: Ce vrei sa-i spun lu' %s?\n",a,b,c)
#define	L084(a,b,c)	S("PRIVMSG %s :%s, Sa-i spun lu' %s CE?\n",a,b,c)
#define	L085(a,b) S("PRIVMSG %s :CUI sa-i spun, %s?\n",a,b)
#define	L083n(a,b,c) S("NOTICE %s :%s: Ce vrei sa-i spun lu' %s?\n",a,b,c)
#define	L084n(a,b,c) S("NOTICE %s :%s, Sa-i spun lu' %s CE?\n",a,b,c)
#define	L085n(a,b) S("NOTICE %s :CUI sa-i spun, %s?\n",a,b)
#define	L086(a,b) S("PRIVMSG %s :%s\2:\2 ce intrebai?\n",a,b)
#define	L087(a,b,c,d,e) S("PRIVMSG %s :%s %s %s? Ce-ar fi sa reformulezi?  (scrie %cHELP pentru sintaxa \
)\n",a,b,c,d,e)
#define	L086n(a,b) S("NOTICE %s :%s\2:\2 ce intrebai?\n",a,b)
#define	L087n(a,b,c,d,e) S("NOTICE %s :%s %s %s? Ce-ar fi sa reformulezi?  (scrie %cHELP pentru sintaxa \
)\n",a,b,c,d,e)
#define	L088(a) S("QUIT :%s e inaccesibil!\n",a)
#define	L089(a)	S("PRIVMSG %s :\1ACTION se trezeste...\1\n",a)
#define	L090(a,b) S("PRIVMSG %s :Ma flood-eaza. Renunt la coada de comenzi. \
%d comenzi sterse.\n",a,b)
#define Lbadtopic(a,b) S("PRIVMSG %s :Ne pare rau  %s, dar suportul pentru acel topic a fost anulat.\n",a,b);
#define Lbadtopic2(a,b) S("NOTICE %s :Ne pare rau  %s, dar suportul pentru acel topic a fost anulat.\n",a,b); 