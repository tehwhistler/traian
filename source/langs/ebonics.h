#define	I_SPEAK "Iz be speakin' Ebonic"
#define	L001(a,b) S("PRIVMSG %s :Yo, you aint be havin no passwerd yet, to be settin one..: \2/msg %s PASS \
<oldpass> <newpass>\2 (since you aint be havin one yet, you bes' be usin '0' as yo' old pass)\n",a,b)
#define	L002(a,b,c) S("NOTICE %s :Deleted permban: #%d, %s, werd to yo mutha!\n",a,b,c)
#define	L003(a,b) S("NOTICE %s :Can't be openin %s :(\n",a,b)
#define L004(a,b,c) S("PRIVMSG %s :%s, There be %d SEEN's in mah database.\n",a,b,c)
#define	L005(a,b) S("PRIVMSG %s :Why you be axin me about dat foo, youd be knowin mo' than anybody about %s.\n",a,b)
#define	L006(a,b,c,d) S("PRIVMSG %s :%s, I dunno bout %s %s\n",a,b,c,d)
#define	L007(a,b) S("NOTICE %s :Autotopic on %s was OFF\n",a,b)
#define	L008(a,b) S("NOTICE %s :Autotopic on %s is now OFF\n",a,b);
#define	L009(a,b,c) S("NOTICE %s :AUTOTOPIC @ %s ON: %s\n",a,b,c)
#define	L010(a,b,c) S("NOTICE %s :AUTOTOPIC @ %s UPDATED: %s\n",a,b,c)
#define	L011(a,b,c) S("PRIVMSG %s :%s, werd! There be %d randomstuffs now.\n",a,b,c)
#define	L012(a,b) S("NOTICE %s :Passwerd fo %s has been changed.\n",a,b)
#define	L013(a) S("NOTICE %s :Dat aint da right passwerd foo!\n",a)
#define	L014(a) S("NOTICE %s :Yo I aint be seein what you're lookin fo!\n",a)
#define	L015(a,b,c,d) S("NOTICE %s :Dat foo: %s [%d:%d] has been tkain care of...\n",a,b,c,d)
#define	L016(a,b) S("PRIVMSG %s :%s: Man I cant be doin no math by zero's!\n",a,b)
#define	L017(a,b) S("PRIVMSG %s :%s: Yo i can't be doin dat, itz illegal and I be on probation already!\n",a,b)
#define	L018(a,b,c,d,e) S("KICK %s %s :%s (talk to da hand cuz da bot aint listenin' #%d: %s IGNORED)\n",a,b,c,d,e)
#define	L019(a,b,c) S("PRIVMSG %s :Talk to da hand cuz da bot aint listenin' #%d: %s!\n",a,b,c);
#define L020(a,b,c,d) S("NOTICE %s :Updated #%d: \37[\37%s\37]\37 info\2:\2 %s\n",a,b,c,d)
#define	L021(a,b,c,d) S("PRIVMSG %s :%s \37%s\37 .. %d entries i jus' be lookin thru.\n",a,b,c,d)
#define	L022(a,b,c) S("PRIVMSG %s :Found mo than \37%d\37 matches, gimmie sumptin betta to work wit\2:\2 \
%s\n",a,b,c);
#define	L023(a,b,c) S("PRIVMSG %s :Yo, I found \37one\37 match, %s\2:\2 %s\n",a,b,c)
#define	L024(a,b,c,d) S("PRIVMSG %s :Yo, I found \37%d\37 matches, %s\2:\2 %s\n",a,b,c,d)
#define	L025(a,b) S("PRIVMSG %s :Dayem, I jus found %ld topic duplicates. They was removed.\n",a,b)
#define	L026(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Runnin %s. Iz be havin %ld topics in mah database, Uptime: \
%d day%s, %02d:%02d, youz mofo's axed me %ld questions, made me rememba %ld things, and fo'get %ld things. \
This wasted: %1.4lf sec%s of mah time\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L027(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Runnin %s. Iz be havin %ld topics in mah database, Uptime: \
%d hour%s, %d min%s, youz mofo's axed me %ld questions, made me rememba %ld things, and fo'get %ld things. \
This wasted: %1.4lf sec%s of mah time\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L028(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Runnin %s. Iz be havin %ld topics in mah database, Uptime: \
%d min%s, %d sec%s, youz mofo's axed me %ld questions, made me rememba %ld things, and fo'get %ld things. \
This wasted: %1.4lf sec%s of mah time\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L029(a,b,c,d) S("PRIVMSG %s :%s: Yo, i deleted topic #%ld, \2%s\2.\n",a,b,c,d)
#define	L030(a,b,c) S("PRIVMSG %s :%s\2:\2 I aint be findin' %s, so I cant be delete'n it!\n",a,b,c)
#define	L029n(a,b,c,d) S("NOTICE %s :%s: Yo, i deleted topic #%ld, \2%s\2.\n",a,b,c,d)
#define	L030n(a,b,c) S("NOTICE %s :%s\2:\2 I aint be findin' %s, so I cant be delete'n it!\n",a,b,c)
#define	L031(a,b) S("NOTICE %s :Dis be how ya do it: \2/msg %s PASS <oldpass> <newpass>\2\n",a,b)
#define	L032(a)	Snow("QUIT :K\2\2illed (%s (DAMN COPS!))\n",a)
#define	L033(a)	S("NOTICE %s :Dis be how ya do it: UP <#chan> <pass>\n",a)
#define	L034(a)	S("NOTICE %s :Dis be how ya do it: OP <#chan> [nicks] <pass>\n",a)
#define	L035(a)	S("NOTICE %s :Dis be how ya do it: DEOP <#chan> [nicks] <pass>\n",a)
#define	L036(a)	S("NOTICE %s :Yo, you might wanna gimmie a nick to do it to foo!\n",a)
#define	L037(a,b) S("NOTICE %s :Gonna try ta /nick %s\n",a,b)
#define	L038(a,b) S("NOTICE %s :Yo, /nick %s's-momma.\n",a,b)
#define	L039(a,b) S("PRIVMSG %s :Takin off from %s\n",a,b)
#define	L040(a,b) S("PRIVMSG %s :Steppin up into %s\n",a,b)
#define	L041(a)	S("PRIVMSG %s :Might wanna gimie a nick/channel to do dat to foo!\n",a)
#define	L042(a)	S("NOTICE %s :Might wanna gimmie a u@h to get rid of foo!!\n",a)
#define	L043(a) S("NOTICE %s :Aint no such ban.\n",a)
#define	L044(a)	S("NOTICE %s :Try givin me tha u@h to delete foo!\n",a)
#define	L045(a) S("NOTICE %s :Howz bout I bitch smack your punk ass instead?\n",a)
#define	L046(a)	S("PRIVMSG %s :Yo, I backed up database.\n",a)
#define	L047(a,b) S("NOTICE %s :Dis be how ya do it: %cAUTOTOPIC <topic>  (set to \"0\" to be turnin it off)\n",a,b)
#define	L048(a)	S("NOTICE %s :Dis be how ya do it: SETCHAN <new channels>\n",a)
#define	L049(a,b) S("NOTICE %s :Default channel: %s\n",a,b)
#define	L050(a)	S("NOTICE %s :Dis be how ya do it: SETCHAR <new command char>\n",a)
#define	L051(a,b) S("NOTICE %s :Tha new command char now iz: %c\n",a,b)
#define	L052(a)	S("NOTICE %s :Dis be how ya do it: SETUSER <new userid> (requires a restart)\n",a)
#define	L053(a,b) S("NOTICE %s :Default userid now: %s\n",a,b)
#define	L054(a)	S("NOTICE %s :Dis be how ya do it: SETNICK <newnick>\n",a)
#define	L055(a)	S("NOTICE %s :Dis be how ya do it: ADDUSER <#chan> <*user@*.host> <level> <pass>. ie; ADDUSER #ghetto \
*icecube@*.compton.net 3 hisPasswd ... use #* if you wants to be givin' access in all chans.\n",a)
#define	L056(a)	sprintf(temp, "I aint used \2%cSETINFO\2 yet!",a)
#define	L057(a,b,c)	S("NOTICE %s :Added user: %s - level %d\n",a,b,c)
#define	L058(a,b,c)	S("NOTICE %s :Dis be how ya do it: %c%s <u@h> [reason]\n",a,b,c)
#define	L059(a,b,c,d) S("NOTICE %s :Added in permban #%d, %s; reason: %s\n",a,b,c,d)
#define	L060(a)	S("NOTICE %s :Dis be how ya do it: REPEAT <number> <delay> <raw-data>\n",a)
#define	L061(a)	S("NOTICE %s :Done.\n",a)
#define	L062(a) S("QUIT :Restarting %s ...\n",a);
#define	L064(a,b) S("PRIVMSG %s :%s, might wanna tell me wut to add foo!\n",a,b)
#define	L064n(a,b) S("NOTICE %s :%s, might wanna tell me wut to add foo!\n",a,b)
#define	L065(a,b) S("PRIVMSG %s :Add wut, %s?\n",a,b);
#define	L066(a,b,c)	S("PRIVMSG %s :%s: Might wanna tell me wut info to be addin fo %s?\n",a,b,c)
#define	L067(a,b) S("PRIVMSG %s :Otay, %s :)\n",a,b)
#define	L065n(a,b) S("NOTICE %s :Add wut, %s?\n",a,b);
#define	L066n(a,b,c) S("NOTICE %s :%s: Might wanna tell me wut info to be addin fo %s?\n",a,b,c)
#define	L067n(a,b) S("NOTICE %s :Otay, %s :)\n",a,b)
#define	L068(a,b) S("PRIVMSG %s :Replace wut, %s?\n",a,b)
#define	L069(a,b,c) S("PRIVMSG %s :%s: Wut info should replace %s?\n",a,b,c)
#define	L070(a,b,c) S("PRIVMSG %s :%s, %s be done gettin updated.\n",a,b,c)
#define	L071(a,b,c,d) S("PRIVMSG %s :There be %s %d permban's%s loaded into ram.\n",a,b,c,d)
#define	L073(a,b,c) S("PRIVMSG %s :%s, %d seconds left till Iz be doin sumptin stupid fly!\n",a,b,c)
#define	L074(a,b,c)	S("PRIVMSG %s :%s: it waz %d chars long, wut da hell does it matta to you anyway, foo.\n",a,b,c)
#define	L075(a,b,c,d) S("PRIVMSG %s :%s, There be currently %d item%s in Que.\n",a,b,c,d)
#define	L076(a,b) S("PRIVMSG %s :I've seen you mofo's come and go %d times.\n",a,b)
#define	L077(a,b,c,d,e)	S("PRIVMSG %s :There be %s %d server%s in mah server list, but I be chillin on \
server #%d wit all da homiez right now.\n",a,b,c,d,e)
#define	L078(a,b,c)	S("PRIVMSG %s :%s, my command char be: %c\n",a,b,c)
#define	L079(a,b,c)	S("PRIVMSG %s :Yo, wut should i be %sing fo, %s?\n",a,b,c)
#define	L080(a,b) S("PRIVMSG %s :%s, gimmie a address foo!\n",a,b)
#define	L081(a,b) S("PRIVMSG %s :I aint bein able to look up %s.\n",a,b)
#define	L083(a,b,c)	S("PRIVMSG %s :%s: Yo, wut you want me to be tellin' %s?\n",a,b,c)
#define	L084(a,b,c)	S("PRIVMSG %s :%s, Tell %s about wut?\n",a,b,c)
#define	L085(a,b) S("PRIVMSG %s :Tell who, %s?\n",a,b)
#define	L083n(a,b,c) S("NOTICE %s :%s: Yo, wut you want me to be tellin' %s?\n",a,b,c)
#define	L084n(a,b,c) S("NOTICE %s :%s, Tell %s about wut?\n",a,b,c)
#define	L085n(a,b) S("NOTICE %s :Tell who, %s?\n",a,b)
#define	L086(a,b) S("PRIVMSG %s :%s\2:\2 you wuz asking?\n",a,b)
#define	L087(a,b,c,d,e) S("PRIVMSG %s :%s %s %s? Mind puttin dat differently?  (Type %cHELP for syntax \
hints)\n",a,b,c,d,e)
#define	L086n(a,b) S("NOTICE %s :%s\2:\2 you wuz asking?\n",a,b)
#define	L087n(a,b,c,d,e) S("NOTICE %s :%s %s %s? Mind puttin dat differently?  (Type %cHELP for syntax \
hints)\n",a,b,c,d,e)
#define	L088(a) S("QUIT :%s is stoned more than i am!\n",a)
#define	L089(a)	S("PRIVMSG %s :\1ACTION wakes up from a drunken haze...\1\n",a)
#define	L090(a,b) S("PRIVMSG %s :Iz bein flooded. Dumpin output Que. %d items wuz deleted.\n",a,b)
#define Lbadtopic(a,b) S("PRIVMSG %s :Damn nigs %s, we did done took out dat topic.\n",a,b);
#define Lbadtopic2(a,b) S("NOTICE %s :Damn nigs %s, we did done took out dat topic.\n",a,b);

