#define I_SPEAK "Io parlo italiano."
#define L001(a,b) S("PRIVMSG %s :Non hai ancora una password settata, per farlo: \2/msg %s PASS \
<vecchiapass> <nuovapass>\2 (siccome e' la prima volta che lo fai, usa '0' come vecchia password)\n",a,b)
#define L002(a,b,c) S("NOTICE %s :Permban #%d eliminato, %s.\n",a,b,c)
#define L003(a,b) S("NOTICE %s :Impossibile aprire %s :(\n",a,b)
#define L004(a,b,c) S("PRIVMSG %s :%s, ci sono %d SEEN nel mio database.\n",a,b,c)
#define L005(a,b) S("PRIVMSG %s :Credo che tu ne sappia sicuramente piu' di me, %s.\n",a,b)
#define L006(a,b,c,d) S("PRIVMSG %s :%s, non ho visto %s %s\n",a,b,c,d)
#define L007(a,b) S("NOTICE %s :Autotopic su %s era OFF\n",a,b)
#define L008(a,b) S("NOTICE %s :Autotopic su %s e' ora OFF\n",a,b);
#define L009(a,b,c) S("NOTICE %s :AUTOTOPIC @ %s ON: %s\n",a,b,c)
#define L010(a,b,c) S("NOTICE %s :AUTOTOPIC @ %s AGGIORNATO: %s\n",a,b,c)
#define L011(a,b,c) S("PRIVMSG %s :%s, fatto. Ora ci sono %d randomstuff.\n",a,b,c)
#define L012(a,b) S("NOTICE %s :La password di %s e' stata modificata.\n",a,b)
#define L013(a) S("NOTICE %s :Password errata! Ora chiamo la polizia per intrusioni in sistema informatico \
altrui!\n",a)
#define L014(a) S("NOTICE %s :Nessun riferimento!\n",a)
#define L015(a,b,c,d) S("NOTICE %s :Eliminato utente: %s [%d:%d]\n",a,b,c,d)
#define L016(a,b) S("PRIVMSG %s :%s: Errore di divisione per zero!\n",a,b)
#define L017(a,b) S("PRIVMSG %s :%s: Operazione illegale!\n",a,b)
#define L018(a,b,c,d,e) S("KICK %s %s :%s (aggiunto l'ignore #%d: %s)\n",a,b,c,d,e)
#define L019(a,b,c) S("PRIVMSG %s :Aggiungo l'ignore #%d: %s!\n",a,b,c);
#define L020(a,b,c,d) S("NOTICE %s :Aggiornato #%d: \37[\37%s\37]\37 info\2:\2 %s\n",a,b,c,d)
#define L021(a,b,c,d) S("PRIVMSG %s :%s \37%s\37.. %d riferimenti inclusi nella ricerca.\n",a,b,c,d)
#define L022(a,b,c) S("PRIVMSG %s :Trovati piu' di \37%d\37 riferimenti, per favore riduci la ricerca\2:\2 \
%s\n",a,b,c);
#define L023(a,b,c) S("PRIVMSG %s :Ho trovato \37un\37 riferimento, %s\2:\2 %s\n",a,b,c)
#define L024(a,b,c,d) S("PRIVMSG %s :Ho trovato \37%d\37 riferimenti, %s\2:\2 %s\n",a,b,c,d)
#define L025(a,b) S("PRIVMSG %s :Ho trovato %ld topic duplicati e li ho rimossi.\n",a,b)
#define L026(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Sono un %s. Ho %ld topic nel mio database. Uptime: \
%d day%s, %02d:%02d. Ci sono state %ld cose chieste, %ld aggiunte, e %ld eliminate. \
Tempo di risposta: %1.4lf sec%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define L027(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Sono un %s. Ho %ld topic nel mio database. Uptime: \
%d hour%s, %d min%s. Ci sono state %ld cose chieste, %ld aggiunte, e %ld eliminate. \
Tempo di risposta: %1.4lf sec%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define L028(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Sono un %s. Ho %ld topic nel mio database. Uptime: \
%d min%s, %d sec%s. Ci sono state %ld cose chieste, %ld aggiunte, e %ld eliminate. \
Tempo di risposta: %1.4lf sec%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define L029(a,b,c,d) S("PRIVMSG %s :%s: Ho eliminato il topic #%ld, \2%s\2.\n",a,b,c,d)
#define L030(a,b,c) S("PRIVMSG %s :%s\2:\2 Non esiste il topic %s. Eliminazione fallita.\n",a,b,c)
#define L029n(a,b,c,d) S("NOTICE %s :%s: Ho eliminato il topic #%ld, \2%s\2.\n",a,b,c,d)
#define L030n(a,b,c) S("NOTICE %s :%s\2:\2 Non esiste il topic %s. Eliminazione fallita.\n",a,b,c)
#define L031(a,b) S("NOTICE %s :Sintassi: \2/msg %s PASS <vecchiapass> <nuovapass>\2\n",a,b)
#define L032(a) Snow("QUIT :C'e' \2%s\2 che mi dice di shtutarmi e io mi shtuto ...\n",a)
#define L033(a) S("NOTICE %s :Sintassi: UP <#chan> <pass>\n",a)
#define L034(a) S("NOTICE %s :Sintassi: OP <#chan> [nicks] <pass>\n",a)
#define L035(a) S("NOTICE %s :Sintassi: DEOP <#chan> [nicks] <pass>\n",a)
#define L036(a) S("NOTICE %s :Specifica un nick!\n",a)
#define L037(a,b) S("NOTICE %s :Provo a fare /nick %s\n",a,b)
#define L038(a,b) S("NOTICE %s :Prova /nick %s-lamer.\n",a,b)
#define L039(a,b) S("PRIVMSG %s :Esco da %s\n",a,b)
#define L040(a,b) S("PRIVMSG %s :Entro in %s\n",a,b)
#define L041(a) S("PRIVMSG %s :Specifica un nick/chan!\n",a)
#define L042(a) S("NOTICE %s :Inserisci la hostmask (u@h) da eliminare!\n",a)
#define L043(a) S("NOTICE %s :Ban inesistente.\n",a)
#define L044(a) S("NOTICE %s :Inserisci la hostmask (u@h) da cancellare!\n",a)
#define L045(a) S("NOTICE %s :Come mai non lo faccio?\n",a)
#define L046(a) S("PRIVMSG %s :Copia di riserva del database effettuata.\n",a)
#define L047(a,b) S("NOTICE %s :Sintassi: %cAUTOTOPIC <topic> (settalo a \"0\" per disattivare)\n",a,b)
#define L048(a) S("NOTICE %s :Sintassi: SETCHAN <nuovi canali>\n",a)
#define L049(a,b) S("NOTICE %s :Canale di default: %s\n",a,b)
#define L050(a) S("NOTICE %s :Sintassi: SETCHAR <nuovo command char>\n",a)
#define L051(a,b) S("NOTICE %s :Il nuovo command char ora e': %c\n",a,b)
#define L052(a) S("NOTICE %s :Sintassi: SETUSER <nuovo ident> (richiede un !restart)\n",a)
#define L053(a,b) S("NOTICE %s :L'ident di default ora e': %s\n",a,b)
#define L054(a) S("NOTICE %s :Sinstassi: SETNICK <nuovonick>\n",a)
#define L055(a) S("NOTICE %s :Sintassi: ADDUSER <#chan> <*user@*.host> <level> <pass>. Es: ADDUSER #darkbot \
*jason@*.superlink.net 3 suaPasswd ... usa #* se vuoi dare accesso su tutti i canali.\n",a)
#define L056(a) sprintf(temp, "Non ho ancora usato \2%cSETINFO\2!",a)
#define L057(a,b,c)     S("NOTICE %s :Aggiunto l'utente %s con level %d\n",a,b,c)
#define L058(a,b,c)     S("NOTICE %s :Sintassi: %c%s <u@h> [motivo]\n",a,b,c)
#define L059(a,b,c,d) S("NOTICE %s :Aggiunto in permban #%d, %s; motivo: %s\n",a,b,c,d)
#define L060(a) S("NOTICE %s :Sintassi: REPEAT <numero> <intervallo> <dati raw>\n",a)
#define L061(a) S("NOTICE %s :Fatto.\n",a)
#define L062(a) S("QUIT :Coi superpoteri, il %s si shtuta e si rippiccia !!\n",a);
#define L064(a,b) S("PRIVMSG %s :%s, cosa vuoi aggiungere?\n",a,b)
#define L064n(a,b) S("NOTICE %s :%s, cosa vuoi aggiungere?\n",a,b)
#define L065(a,b) S("PRIVMSG %s :Aggiungere cosa, %s?\n",a,b);
#define L066(a,b,c)     S("PRIVMSG %s :%s: che info devo aggiungere per %s?\n",a,b,c)
#define L067(a,b) S("PRIVMSG %s :Okay, %s, ho imparato una cosa nuova! :)\n",a,b)
#define L065n(a,b) S("NOTICE %s :Aggiungere cosa, %s?\n",a,b);
#define L066n(a,b,c) S("NOTICE %s :%s: che info devo aggiungere per %s?\n",a,b,c)
#define L067n(a,b) S("NOTICE %s :Okay, %s, ho imparato una cosa nuova! :)\n",a,b)
#define L068(a,b) S("PRIVMSG %s :Sostiuire cosa, %s?\n",a,b)
#define L069(a,b,c) S("PRIVMSG %s :%s: quale info deve andare a sostituire %s?\n",a,b,c)
#define L070(a,b,c) S("PRIVMSG %s :%s, %s e' stato aggiornato.\n",a,b,c)
#define L071(a,b,c,d) S("PRIVMSG %s :Ci \"%s\" (licenza poetica) %d permban%s caricati in ram.\n",a,b,c,d)
#define L073(a,b,c) S("PRIVMSG %s :%s, mancano %d secondi al prossimo randstuff\n",a,b,c)
#define L074(a,b,c)     S("PRIVMSG %s :%s: era lungo %d caratteri.\n",a,b,c)
#define L075(a,b,c,d) S("PRIVMSG %s :%s, ci sono %d item%s in coda.\n",a,b,c,d)
#define L076(a,b) S("PRIVMSG %s :Finora ho visto %d joins.\n",a,b)
#define L077(a,b,c,d,e) S("PRIVMSG %s :Ci \"%s\" (licenza poetica) %d server%s nella mia lista. Al momento sono \
sul server #%d.\n",a,b,c,d,e)
#define L078(a,b,c)     S("PRIVMSG %s :%s, il mio command char e': %c\n",a,b,c)
#define L079(a,b,c)     S("PRIVMSG %s :Che cosa dovrei %sare, %s?\n",a,b,c)
#define L080(a,b) S("PRIVMSG %s :%s, devi specificare un indirizzo!\n",a,b)
#define L081(a,b) S("PRIVMSG %s :Non riesco a risolvere %s.\n",a,b)
#define L083(a,b,c)     S("PRIVMSG %s :%s: cosa vuoi che dica a %s?\n",a,b,c)
#define L084(a,b,c)     S("PRIVMSG %s :%s, che devo dire a %s?\n",a,b,c)
#define L085(a,b) S("PRIVMSG %s :A chi devo dirlo, %s?\n",a,b)
#define L083n(a,b,c) S("NOTICE %s :%s: cosa vuoi che dica a %s?\n",a,b,c)
#define L084n(a,b,c) S("NOTICE %s :%s, che devo dire a %s?\n",a,b,c)
#define L085n(a,b) S("NOTICE %s :A chi devo dirlo, %s?\n",a,b)
#define L086(a,b) S("PRIVMSG %s :%s\2:\2 chiedevi?\n",a,b)
#define L087(a,b,c,d,e) S("PRIVMSG %s :%s %s %s? Ti spiacerebbe richiedermelo?  (Usa %cHELP per avere \
suggerimenti sulla sintassi)\n",a,b,c,d,e)
#define L086n(a,b) S("NOTICE %s :%s\2:\2 chiedevi?\n",a,b)
#define L087n(a,b,c,d,e) S("NOTICE %s :%s %s %s? Ti spiacerebbe richiedermelo?  (Usa %cHELP per avere \
suggerimenti sulla sintassi)\n",a,b,c,d,e)
#define L088(a) S("QUIT :%s e' rincoglionito!\n",a)
#define L089(a) S("PRIVMSG %s :\1ACTION si sveglia da un brutto sogno...\1\n",a)
#define L090(a,b) S("PRIVMSG %s :Sono sotto flood. Sputo fuori tutta la queue. \
%d oggetti eliminati.\n",a,b)
#define Lbadtopic(a,b) S("PRIVMSG %s :Spiacente %s, ma sostegno quel soggetto � stato rimosso.\n",a,b);
#define Lbadtopic2(a,b) S("NOTICE %s :Spiacente %s, ma sostegno quel soggetto � stato rimosso.\n",a,b);
