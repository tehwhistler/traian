#define	I_SPEAK "Ich spreche deutsch."
#define	L001(a,b) S("PRIVMSG %s :Sie haben kein Passwort gesetzt. Um dies nachzuholen: \2/msg %s PASS \
<altpasswort> <neupasswort>\2 (Da dies ihr erstes Passwort sein wird, verwenden sie '0' als altpasswort)\n",a,b)
#define	L002(a,b,c) S("NOTICE %s :Permanenten Bann geloescht #%d, %s.\n",a,b,c)
#define	L003(a,b) S("NOTICE %s :Kann %s nicht oeffnen :(\n",a,b)
#define L004(a,b,c) S("PRIVMSG %s :%s, Es gibt %d SEEN's in meiner Datenbank.\n",a,b,c)
#define	L005(a,b) S("PRIVMSG %s :Darueber wissen Sie mehr als ich, %s.\n",a,b)
#define	L006(a,b,c,d) S("PRIVMSG %s :%s, Ich habe %s nicht gesehen in %s\n",a,b,c,d)
#define	L007(a,b) S("NOTICE %s :Autotopic auf %s wurde abgestellt (OFF)\n",a,b)
#define	L008(a,b) S("NOTICE %s :Autotopic aud %s ist nun abgestellt (OFF)\n",a,b);
#define	L009(a,b,c) S("NOTICE %s :AUTOTOPIC @ %s angestellt (ON): %s\n",a,b,c)
#define	L010(a,b,c) S("NOTICE %s :AUTOTOPIC @ %s aktualisiert (UPDATED): %s\n",a,b,c)
#define	L011(a,b,c) S("PRIVMSG %s :%s, erledigt. Es gibt nun %d Sprueche.\n",a,b,c)
#define	L012(a,b) S("NOTICE %s :Passwort fuer %s wurde aktualisiert.\n",a,b)
#define	L013(a) S("NOTICE %s :Falsches Passwort!\n",a)
#define	L014(a) S("NOTICE %s :kein Treffer!\n",a)
#define	L015(a,b,c,d) S("NOTICE %s :Nutzer geloescht: %s [%d:%d]\n",a,b,c,d)
#define	L016(a,b) S("PRIVMSG %s :%s: Teilen durch 0 aus politischen Gruenden derzeit nicht moeglich!\n",a,b)
#define	L017(a,b) S("PRIVMSG %s :%s: Unzulaessige Aktion!\n",a,b)
#define	L018(a,b,c,d,e) S("KICK %s %s :%s (Fuege ignoriere #%d: %s hinzu)\n",a,b,c,d,e)
#define	L019(a,b,c) S("PRIVMSG %s :Ignore ab sofort #%d: %s!\n",a,b,c);
#define L020(a,b,c,d) S("NOTICE %s :Aktualisiere #%d: \37[\37%s\37]\37 Info\2:\2 %s\n",a,b,c,d)
#define	L021(a,b,c,d) S("PRIVMSG %s :%s \37%s\37.. %d Eintraege durchsucht.\n",a,b,c,d)
#define	L022(a,b,c) S("PRIVMSG %s :Habe mehr als \37%d\37 Treffer gefunden, bitte grenzen sie die Suche ein\2:\2 \
%s\n",a,b,c);
#define	L023(a,b,c) S("PRIVMSG %s :Ich habe \37einen\37 Treffer, %s\2:\2 %s\n",a,b,c)
#define	L024(a,b,c,d) S("PRIVMSG %s :Ich habe \37%d\37 Treffer gefunden, %s\2:\2 %s\n",a,b,c,d)
#define	L025(a,b) S("PRIVMSG %s :%ld Themenduplikate gefunden. Sie wurden geloescht.\n",a,b)
#define	L026(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Lasse %s laufen. Ich habe %ld Themen in meiner Datenbank, Laufzeit: \
%d Tage%s, %02d:%02d, Es wurden %ld Fragen gestellt, %ld Themen ergaenzt und %ld Themen geloescht. \
Prozess Zeit: %1.4lf sek%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L027(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Lasse %s laufen. I habe %ld Themen in meiner Datenbank, Laufzeit: \
%d Stunden%s, %d Minuten%s, Es wurden %ld Fragen gestellt, %ld Themen ergaenzt und %ld Themen geloescht. \
Prozesszeit: %1.4lf Sekunden%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L028(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Lasse %s laufen. Ich habe %ld Themen in meiner Datenbank, Laufzeit: \
%d Minuten%s, %d Sekunden%s, Es wurden %ld Fragen gestellt, %ld Themen hinzugefuegt und %ld Themen geloescht. \
Prozesszeit: %1.4lf Sekunden%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L029(a,b,c,d) S("PRIVMSG %s :%s: Ich habe #%ld Themen geloescht, \2%s\2.\n",a,b,c,d)
#define	L030(a,b,c) S("PRIVMSG %s :%s\2:\2 Ich kann Themaeintrag %s nicht finden. Loeschen gescheitert.\n",a,b,c)
#define	L029n(a,b,c,d) S("NOTICE %s :%s: Ich habe #%ld Themen geloescht, \2%s\2.\n",a,b,c,d)
#define	L030n(a,b,c) S("NOTICE %s :%s\2:\2 Ich kann Themaeintrag %s nicht finden. Loeschen gescheitert.\n",a,b,c)
#define	L031(a,b) S("NOTICE %s :Syntax: \2/msg %s PASS <oldpass> <newpass>\2\n",a,b)
#define	L032(a)	Snow("QUIT :G\2\2etoetet (%s (weil ich es so sage!))\n",a)
#define	L033(a)	S("NOTICE %s :Syntax: UP <#chan> <pass>\n",a)
#define	L034(a)	S("NOTICE %s :Syntax: OP <#chan> [nicks] <pass>\n",a)
#define	L035(a)	S("NOTICE %s :Syntax: DEOP <#chan> [nicks] <pass>\n",a)
#define	L036(a)	S("NOTICE %s :Spezifiziere einen nick!\n",a)
#define	L037(a,b) S("NOTICE %s :Versuche /nick %s\n",a,b)
#define	L038(a,b) S("NOTICE %s :Versuche /nick %s-dummy.\n",a,b)
#define	L039(a,b) S("PRIVMSG %s :Verlasse %s\n",a,b)
#define	L040(a,b) S("PRIVMSG %s :Betrete %s\n",a,b)
#define	L041(a)	S("PRIVMSG %s :Spezifiziere einen nick/chan!\n",a)
#define	L042(a)	S("NOTICE %s :Geben sie u@h um zu loeschen!\n",a)
#define	L043(a) S("NOTICE %s :Keine solche Verbannung vorhanden.\n",a)
#define	L044(a)	S("NOTICE %s :Geben sie u@h um sie zu loeschen!\n",a)
#define	L045(a) S("NOTICE %s :Wie waers wenn ich dass nicht tue?\n",a)
#define	L046(a)	S("PRIVMSG %s :Datenbank gesichert.\n",a)
#define	L047(a,b) S("NOTICE %s :SYNTAX: %cAUTOTOPIC <topic>  (setze \"0\" um abzuschalten)\n",a,b)
#define	L048(a)	S("NOTICE %s :Syntax: SETCHAN <new channels>\n",a)
#define	L049(a,b) S("NOTICE %s :Standard Raum: %s\n",a,b)
#define	L050(a)	S("NOTICE %s :Syntax: SETCHAR <new command char>\n",a)
#define	L051(a,b) S("NOTICE %s :Neues Kommandozeichen nun: %c\n",a,b)
#define	L052(a)	S("NOTICE %s :Syntax: SETUSER <new userid> (benoetigt einen Neustart)\n",a)
#define	L053(a,b) S("NOTICE %s :Standard NutzerID jetzt: %s\n",a,b)
#define	L054(a)	S("NOTICE %s :Syntax: SETNICK <newnick>\n",a)
#define	L055(a)	S("NOTICE %s :Syntax: ADDUSER <#chan> <*user@*.host> <level> <pass>. ie; ADDUSER #darkbot \
*user@*.somewhere 3 hisPasswd ... nutzen #* um ihm die komplette Kontrolle ueber alle Raeume zu uebertragen.\n",a)
#define	L056(a)	sprintf(temp, "Ich habe \2%cSETINFO\2 noch nicht benutzt!",a)
#define	L057(a,b,c)	S("NOTICE %s :Nutzer hinzugefuegt: %s - Ebene %d\n",a,b,c)
#define	L058(a,b,c)	S("NOTICE %s :Syntax: %c%s <u@h> [Begruendung]\n",a,b,c)
#define	L059(a,b,c,d) S("NOTICE %s :Ergaenzt in Ausschlussliste #%d, %s; Begruendung: %s\n",a,b,c,d)
#define	L060(a)	S("NOTICE %s :Syntax: REPEAT <number> <delay> <raw-data>\n",a)
#define	L061(a)	S("NOTICE %s :Erledigt.\n",a)
#define	L062(a) S("QUIT :Starte wieder %s ...\n",a);
#define	L064(a,b) S("PRIVMSG %s :%s, was moechten sie hinzufuegen?\n",a,b)
#define	L064n(a,b) S("NOTICE %s :%s, was moechten sie hinzufuegen?\n",a,b)
#define	L065(a,b) S("PRIVMSG %s :Was hinzufuegen, %s?\n",a,b);
#define	L066(a,b,c)	S("PRIVMSG %s :%s: Welcher Infoblock soll zu %s hinzugefuegt werden?\n",a,b,c)
#define	L067(a,b) S("PRIVMSG %s :Okay, %s :)\n",a,b)
#define	L065n(a,b) S("NOTICE %s :Was hinzufuegen, %s?\n",a,b);
#define	L066n(a,b,c) S("NOTICE %s :%s: Welcher Infoblock soll zu %s hinzugefuegt werden?\n",a,b,c)
#define	L067n(a,b) S("NOTICE %s :Okay, %s :)\n",a,b)
#define	L068(a,b) S("PRIVMSG %s :Ersetze was, %s?\n",a,b)
#define	L069(a,b,c) S("PRIVMSG %s :%s: Welcher Infoblock soll durch %s ersetzt werden?\n",a,b,c)
#define	L070(a,b,c) S("PRIVMSG %s :%s, %s wurde aktualisiert.\n",a,b,c)
#define	L071(a,b,c,d) S("PRIVMSG %s :Es gibt %s %d permanente Ausschluesse%s in den Speicher geladen.\n",a,b,c,d)
#define	L073(a,b,c) S("PRIVMSG %s :%s, %d Sekunden bis zum blafaseln\n",a,b,c)
#define	L074(a,b,c)	S("PRIVMSG %s :%s: es war %d Zeichen lang.\n",a,b,c)
#define	L075(a,b,c,d) S("PRIVMSG %s :%s, Es gibt derzeit %d Artikel %s in der Warteschlange.\n",a,b,c,d)
#define	L076(a,b) S("PRIVMSG %s :%d Benutzer kamen bisher in den Raum.\n",a,b)
#define	L077(a,b,c,d,e)	S("PRIVMSG %s :Es gibt %s %d Server%s in meiner Serverliste. Ich bin derzeit auf \
Server #%d.\n",a,b,c,d,e)
#define	L078(a,b,c)	S("PRIVMSG %s :%s, mein Kommandozeichen lautet: %c\n",a,b,c)
#define	L079(a,b,c)	S("PRIVMSG %s :Was soll fuer %sing verwendet werden, %s?\n",a,b,c)
#define	L080(a,b) S("PRIVMSG %s :%s, geben sie eine Addresse an!\n",a,b)
#define	L081(a,b) S("PRIVMSG %s :Konnte %s nicht finden.\n",a,b)
#define	L083(a,b,c)	S("PRIVMSG %s :%s: Was wollen sie mir erzaehlen %s?\n",a,b,c)
#define	L084(a,b,c)	S("PRIVMSG %s :%s, Sagen sie %s ueber was?\n",a,b,c)
#define	L085(a,b) S("PRIVMSG %s :Wer, %s?\n",a,b)
#define	L083n(a,b,c) S("NOTICE %s :%s: Was wollen sie mir erzaehlen %s?\n",a,b,c)
#define	L084n(a,b,c) S("NOTICE %s :%s, Sagen sie %s ueber was?\n",a,b,c)
#define	L085n(a,b) S("NOTICE %s :Wer, %s?\n",a,b)
#define	L086(a,b) S("PRIVMSG %s :%s\2:\2 fragten sie?\n",a,b)
#define	L087(a,b,c,d,e) S("PRIVMSG %s :%s %s %s? In Gedanken umbauen?  (Tippen sie %cHELP fuer die Syntax \
Hinweise)\n",a,b,c,d,e)
#define	L086n(a,b) S("NOTICE %s :%s\2:\2 fragten sie?\n",a,b)
#define	L087n(a,b,c,d,e) S("NOTICE %s :%s %s %s? In Gedanken umbauen?  (Tippen sie %cHELP fuer die Syntax \
Hinweise)\n",a,b,c,d,e)
#define	L088(a) S("QUIT :%s ist total abgedreht!\n",a)
#define	L089(a)	S("PRIVMSG %s :\1ACTION erwacht...\1\n",a)
#define	L090(a,b) S("PRIVMSG %s :Ich wurde geflutet. Gebe Ausgabeschlange aus. \
%d Eintraege geloescht.\n",a,b)
#define Lbadtopic(a,b) S("PRIVMSG %s :Leider %s, wurde die Unterst�tzung f�r dieses thema entfernt.\n",a,b);
#define Lbadtopic2(a,b) S("NOTICE %s :Leider %s, wurde die Unterst�tzung f�r dieses thema entfernt.\n",a,b);

