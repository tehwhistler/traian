#define	I_SPEAK "I speak French."
#define L001(a,b) S("PRIVMSG %s :Vous n'avez pas de mot de passe, pour en choisir un: \
\2/msg %s PASS <Ancien mot de passe> <Nouveau mot de passe>\2 (Puisque c'est la premi�re \
fois que vous choisissez un mot de passe, utilisez '0' comme ancien mot de passe)\n",a,b)
#define L002(a,b,c) S("NOTICE %s :Ban permanent �ffac�: #%d, %s.\n",a,b,c)
#define L003(a,b) S("NOTICE %s :Incapable d'ouvrir %s :(\n",a,b)
#define L004(a,b,c) S("PRIVMSG %s :%s, Il y a %d SEEN dans ma base de donn�es.\n",a,b,c)
#define L005(a,b) S("PRIVMSG %s :Vous devriez en connaitre plus a ce sujet que moi, %s.\n",a,b)
#define L006(a,b,c,d) S("PRIVMSG %s :%s, Je n'ai pas vu %s %s\n",a,b,c,d)
#define L007(a,b) S("NOTICE %s :Autotopic sur %s �tais D�SACTIV�\n",a,b)
#define L008(a,b) S("NOTICE %s :Autotopic sur %s est maintenant D�SACTIV�\n",a,b);
#define L009(a,b,c) S("NOTICE %s :AUTOTOPIC @ %s ACTIF: %s\n",a,b,c)
#define L010(a,b,c) S("NOTICE %s :AUTOTOPIC @ %s MIS � JOUR: %s\n",a,b,c)
#define L011(a,b,c) S("PRIVMSG %s :%s, termin�. Il y a maintenant %d items al�atoires.\n",a,b,c)
#define L012(a,b) S("NOTICE %s : Le mot de passe pour %s a �t� mis � jour.\n",a,b)
#define L013(a) S("NOTICE %s :Mot de passe incorrect!\n",a)
#define L014(a) S("NOTICE %s :Aucune entr�e similaire!\n",a)
#define L015(a,b,c,d) S("NOTICE %s :Usager supprim�: %s [%d:%d]\n",a,b,c,d)
#define L016(a,b) S("PRIVMSG %s :%s: Erreur! Division par z�ro!\n",a,b)
#define L017(a,b) S("PRIVMSG %s :%s: Op�ration ill�gale!\n",a,b)
#define L018(a,b,c,d,e) S("KICK %s %s :%s (Ajout d'ignore: #%d:%s)\n",a,b,c,d,e)
#define L019(a,b,c) S("PRIVMSG %s :Ignore ajout�e #%d: %s!\n",a,b,c);
#define L020(a,b,c,d) S("NOTICE %s :Mis � jour #%d: \37[\37%s\37]\37 info\2:\2 %s\n",a,b,c,d)
#define L021(a,b,c,d) S("PRIVMSG %s :%s \37%s\37.. %d entr�es recherch�s.\n",a,b,c,d)
#define L022(a,b,c) S("PRIVMSG %s :Trouv� plus que \37%d\37 correspondances, restreignez votre \
recherche...\2:\2 %s\n",a,b,c);
#define L023(a,b,c) S("PRIVMSG %s :Trouv� \37une\37 correspondance, %s\2:\2 %s\n",a,b,c)
#define L024(a,b,c,d) S("PRIVMSG %s :Trouv� \37%d\37 correspondances, %s\2:\2 %s\n",a,b,c,d)
#define L025(a,b) S("PRIVMSG %s :Trouv� %ld entr�es dupliqu�es. Elles ont �t� retir�es.\n",a,b)
#define L026(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Utilise %s. J'ai %ld entr�es dans ma base de \
donn�es, Actif depuis: %d jours%s, %02d:%02d, Il y a eu %ld questions pos�es, %ld additions \
d'informations et %ld entr�es retir�es. Temp de travail: %1.4lf seconde%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define L027(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Utilise %s. J'ai %ld entr�es dans ma base de \
donn�es, Actif depuis: %d heure%s, %d minute%s, Il y a eu %ld questions pos�es, %ld additions \
d'informations, et %ld entr�es retir�es. Temp de travail: %1.4lf seconde%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define L028(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Utilise %s. J'ai %ld entr�es dans ma base de \
donn�es, Actif depuis: %d minute%s, %d seconde%s, Il y a eu %ld questions pos�es, %ld additions \
d'informations, et %ld entr�es retir�es. Temp de travail: %1.4lf seconde%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define L029(a,b,c,d) S("PRIVMSG %s :%s: J'ai effac� l'entr�e #%ld, \2%s\2.\n",a,b,c,d)
#define L030(a,b,c) S("PRIVMSG %s :%s\2:\2 J'ai �t� incapable de trouv� le topic \37%s\37. Impossible \
d'�ffacer.\n",a,b,c)
#define L029n(a,b,c,d) S("NOTICE %s :%s: J'ai effac� l'entr�e #%ld, \2%s\2.\n",a,b,c,d)
#define L030n(a,b,c) S("NOTICE %s :%s\2:\2 J'ai �t� incapable de trouv� le topic \37%s\37. Impossible \
d'�ffacer.\n",a,b,c)
#define L031(a,b) S("NOTICE %s :Syntaxe: \2/msg %s PASS <ancien mot de passe> <nouveau mot de passe>\2\n",a,b)
#define L032(a) Snow("QUIT :K\2\2illed (%s (Parce que je l'ai d�cid�!))\n",a)
#define L033(a) S("NOTICE %s :Syntaxe: UP <#Canal> <Mot de passe>\n",a)
#define L034(a) S("NOTICE %s :Syntaxe: OP <#Canal> [alias] <Mot de passe>\n",a)
#define L035(a) S("NOTICE %s :Syntaxe: DEOP <#Canal> [alias] <Mot de passe>\n",a)
#define L036(a) S("NOTICE %s :Specifiez un alias!\n",a)
#define L037(a,b) S("NOTICE %s :Tentative de /nick %s\n",a,b)
#define L038(a,b) S("NOTICE %s :Essayez /nick %s-�pais.\n",a,b)
#define L039(a,b) S("PRIVMSG %s :Je quitte %s\n",a,b)
#define L040(a,b) S("PRIVMSG %s :J'entre %s\n",a,b)
#define L041(a) S("PRIVMSG %s :Specifiez un alias ou un canal!\n",a)
#define L042(a) S("NOTICE %s :Entrez le user@host � purger!\n",a)
#define L043(a) S("NOTICE %s :Aucun ban de ce type.\n",a)
#define L044(a) S("NOTICE %s :Entrez le user@host � effacer!\n",a)
#define L045(a) S("NOTICE %s :Et si je ne le ferais pas?\n",a)
#define L046(a) S("PRIVMSG %s :Copie de sauvegarde de la base de donn�e complet�.\n",a)
#define L047(a,b) S("NOTICE %s :SYNTAXE: %cAUTOTOPIC <topic>  (mettre � \"0\" pour d�sactiver)\n",a,b)
#define L048(a) S("NOTICE %s :Syntaxe: SETCHAN <nouveau canal>\n",a)
#define L049(a,b) S("NOTICE %s :Canal par d�fault: %s\n",a,b)
#define L050(a) S("NOTICE %s :Syntaxe: SETCHAR <nouveau caract�re de commande>\n",a)
#define L051(a,b) S("NOTICE %s :Le caract�re de commande est maintenant: %c\n",a,b)
#define L052(a) S("NOTICE %s :Syntaxe: SETUSER <Nouveau ID> (n�cessite un red�marage)\n",a)
#define L053(a,b) S("NOTICE %s :ID d'usager par d�faut: %s\n",a,b)
#define L054(a) S("NOTICE %s :Syntaxe: SETNICK <Nouveau nick>\n",a)
#define L055(a) S("NOTICE %s :Syntaxe: ADDUSER <#Canal> <*user@*.host> <Niveau> <Mot de passe>. \
Exemple; ADDUSER #Darkbot *jason@*.superlink.net 3 SonPass ... Utiliser #* pour donner acc�s � tout \
les canaux.\n",a)
#define L056(a) sprintf(temp, "Je n'ai pas encore utilis� \2%cSETINFO\2!",a)
#define L057(a,b,c) S("NOTICE %s :Usager ajout�: %s - Niveau %d\n",a,b,c)
#define L058(a,b,c) S("NOTICE %s :Syntaxe: %c%s <user@host> [Raison]\n",a,b,c)
#define L059(a,b,c,d) S("NOTICE %s :Ban permanent ajout� #%d, %s; Raison:%s\n",a,b,c,d)
#define L060(a) S("NOTICE %s :Syntaxe: REPEAT <Nombre de fois> <D�lai> <Information RAW>\n",a)
#define L061(a) S("NOTICE %s :Compl�t�.\n",a)
#define L062(a) S("QUIT :Red�marage de %s ...\n",a);
#define L064(a,b) S("PRIVMSG %s :%s, que voulez-vous ajouter?\n",a,b)
#define L064n(a,b) S("NOTICE %s :%s, que voulez-vous ajouter?\n",a,b)
#define L065(a,b) S("PRIVMSG %s :Que devrais-je ajouter, %s?\n",a,b);
#define L066(a,b,c) S("PRIVMSG %s :%s: Quelle information devrait �tre ajout�e pour %s?\n",a,b,c)
#define L067(a,b) S("PRIVMSG %s :D'accord, %s :)\n",a,b)
#define L065n(a,b) S("NOTICE %s :Que devrais-je ajouter, %s?\n",a,b);
#define L066n(a,b,c) S("NOTICE %s :%s: Quelle information devrait �tre ajout�e pour %s?\n",a,b,c)
#define L067n(a,b) S("NOTICE %s :D'accord, %s :)\n",a,b)
#define L068(a,b) S("PRIVMSG %s :Remplacer quoi, %s?\n",a,b)
#define L069(a,b,c) S("PRIVMSG %s :%s: Quelle information devrait remplacer %s?\n",a,b,c)
#define L070(a,b,c) S("PRIVMSG %s :%s, %s a �t� mis � jour.\n",a,b,c)
#define L071(a,b,c,d) S("PRIVMSG %s :Il y a %s %d ban%s permanent en m�moire.\n",a,b,c,d,d)
#define L072(a,b) S("PRIVMSG %s :J'ai pr�sentement %d bans par serveurs en m�moire.\n",a,b)
#define L073(a,b,c) S("PRIVMSG %s :%s, %d secondes restantes avant items al�atoires\n",a,b,c)
#define L074(a,b,c) S("PRIVMSG %s :%s: Il y avait %d caract�res de longs.\n",a,b,c)
#define L075(a,b,c,d) S("PRIVMSG %s :%s, Il y a pr�sentements %d objets%s en liste d'attente.\n",a,b,c,d)
#define L076(a,b) S("PRIVMSG %s :J'ai pu observer %d arriv�es jusqu'� maintenant.\n",a,b)
#define L077(a,b,c,d,e) S("PRIVMSG %s :Il y a %s %d serveur%s dans ma liste de serveurs. Je suis \
pr�sentement sur le serveur #%d.\n",a,b,c,d,e)
#define	L078(a,b,c)	S("PRIVMSG %s :%s, mon caract�re de commande est: %c\n",a,b,c)
#define	L079(a,b,c)	S("PRIVMSG %s :Que devrais-je %siser pour, %s?\n",a,b,c)
#define	L080(a,b) S("PRIVMSG %s :%s, vous devez sp�cifier une addresse!\n",a,b)
#define	L081(a,b) S("PRIVMSG %s :Je ne suis pas parvenu � convertir %s.\n",a,b)
#define	L083(a,b,c)	S("PRIVMSG %s :%s: Que voulez-vous que je dise � %s?\n",a,b,c)
#define	L084(a,b,c)	S("PRIVMSG %s :%s, Informer %s de%s?\n",a,b,c)
#define	L085(a,b) S("PRIVMSG %s :Dire � qui, %s?\n",a,b)
#define	L083n(a,b,c) S("NOTICE %s :%s: Que voulez-vous que je dise � %s?\n",a,b,c)
#define	L084n(a,b,c) S("NOTICE %s :%s, Informer %s de%s?\n",a,b,c)
#define	L085n(a,b) S("NOTICE %s :Dire � qui, %s?\n",a,b)
#define	L086(a,b) S("PRIVMSG %s :%s\2:\2 vous demandiez?\n",a,b)
#define	L087(a,b,c,d,e) S("PRIVMSG %s :%s %s %s? Pourriez-vous reformuler cel�? (Tappez %cHELP pour de \
l'aide sur la syntaxe)\n",a,b,c,d,e)
#define	L086n(a,b) S("NOTICE %s :%s\2:\2 vous demandiez?\n",a,b)
#define	L087n(a,b,c,d,e) S("NOTICE %s :%s %s %s? Pourriez-vous reformuler cel�? (Tappez %cHELP pour de \
l'aide sur la syntaxe)\n",a,b,c,d,e)
#define	L088(a) S("QUIT :%s est mort!\n",a)
#define L089(a) S("PRIVMSG %s :\1ACTION se r�veille...\1\n",a)
#define L090(a,b) S("PRIVMSG %s :Je me fais flooder. Envoie de la liste d'attente (l'information en attente \
d'�tre envoy�e). %d objets.\n",a,b)
#define Lbadtopic(a,b) S("PRIVMSG %s :D�sol� %s, mais soutien de cette mati�re a �t� enlev�.\n",a,b);
#define Lbadtopic2(a,b) S("NOTICE %s :D�sol� %s, mais soutien de cette mati�re a �t� enlev�.\n",a,b);
