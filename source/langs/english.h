#define	I_SPEAK "I speak English."
#define	L001(a,b) S("PRIVMSG %s :You have not set a password, to set a pass: \2/msg %s PASS \
<oldpass> <newpass>\2 (since this is your first time setting a pass, use '0' as your old pass)\n",a,b)
#define	L002(a,b,c) S("NOTICE %s :Deleted permban #%d, %s.\n",a,b,c)
#define	L003(a,b) S("NOTICE %s :Unable to open %s :(\n",a,b)
#define L004(a,b,c) S("PRIVMSG %s :%s, There are %d SEEN's in my database.\n",a,b,c)
#define	L005(a,b) S("PRIVMSG %s :You'd know more about that than I do, %s.\n",a,b)
#define	L006(a,b,c,d) S("PRIVMSG %s :%s, I have not seen %s %s\n",a,b,c,d)
#define	L007(a,b) S("NOTICE %s :Autotopic on %s was OFF\n",a,b)
#define	L008(a,b) S("NOTICE %s :Autotopic on %s is now OFF\n",a,b);
#define	L009(a,b,c) S("NOTICE %s :AUTOTOPIC @ %s ON: %s\n",a,b,c)
#define	L010(a,b,c) S("NOTICE %s :AUTOTOPIC @ %s UPDATED: %s\n",a,b,c)
#define	L011(a,b,c) S("PRIVMSG %s :%s, done. There are now %d randomstuffs.\n",a,b,c)
#define	L012(a,b) S("NOTICE %s :Password for %s has been updated.\n",a,b)
#define	L013(a) S("NOTICE %s :Incorrect password!\n",a)
#define	L014(a) S("NOTICE %s :No match!\n",a)
#define	L015(a,b,c,d) S("NOTICE %s :Deleted user: %s [%d:%d]\n",a,b,c,d)
#define	L016(a,b) S("PRIVMSG %s :%s: Division by zero error!\n",a,b)
#define	L017(a,b) S("PRIVMSG %s :%s: Illegal operation!\n",a,b)
#define	L018(a,b,c,d,e) S("KICK %s %s :%s (adding ignore #%d: %s)\n",a,b,c,d,e)
#define	L019(a,b,c) S("PRIVMSG %s :Adding ignore #%d: %s!\n",a,b,c);
#define L020(a,b,c,d) S("NOTICE %s :Updated #%d: \37[\37%s\37]\37 info\2:\2 %s\n",a,b,c,d)
#define	L021(a,b,c,d) S("PRIVMSG %s :%s \37%s\37.. %d entries searched.\n",a,b,c,d)
#define	L022(a,b,c) S("PRIVMSG %s :Found more than \37%d\37 matches, please narrow down your search\2:\2 \
%s\n",a,b,c);
#define	L023(a,b,c) S("PRIVMSG %s :I found \37one\37 match, %s\2:\2 %s\n",a,b,c)
#define	L024(a,b,c,d) S("PRIVMSG %s :I found \37%d\37 matches, %s\2:\2 %s\n",a,b,c,d)
#define	L025(a,b) S("PRIVMSG %s :Found %ld topic duplicates. They were removed.\n",a,b)
#define	L026(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Running %s. I have %ld topics in my database, Uptime: \
%d day%s, %02d:%02d, There have been %ld questions asked, %ld topic additions, and %ld topic deletions, since I connected. \
Process time: %1.4lf sec%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L027(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Running %s. I have %ld topics in my database, Uptime: \
%d hour%s, %d min%s, There have been %ld questions asked, %ld topic additions, and %ld topic deletions, since I connected. \
Process time: %1.4lf sec%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L028(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Running %s. I have %ld topics in my database, Uptime: \
%d min%s, %d sec%s, There have been %ld questions asked, %ld topic additions, and %ld topic deletions, since I connected. \
Process time: %1.4lf sec%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L029(a,b,c,d) S("PRIVMSG %s :%s: I have deleted topic #%ld, \2%s\2.\n",a,b,c,d)
#define	L029n(a,b,c,d) S("NOTICE %s :%s: I have deleted topic #%ld, \2%s\2.\n",a,b,c,d)
#define	L030(a,b,c) S("PRIVMSG %s :%s\2:\2 I was unable to find the topic %s. Delete failed.\n",a,b,c)
#define	L030n(a,b,c) S("NOTICE %s :%s\2:\2 I was unable to find the topic %s. Delete failed.\n",a,b,c)
#define	L031(a,b) S("NOTICE %s :Syntax: \2/msg %s PASS <oldpass> <newpass>\2\n",a,b)
#define	L032(a)	Snow("QUIT :K\2\2illed (%s (cause I say so!))\n",a)
#define	L033(a)	S("NOTICE %s :Syntax: UP <#chan> <pass>\n",a)
#define	L034(a)	S("NOTICE %s :Syntax: OP <#chan> [nicks] <pass>\n",a)
#define	L035(a)	S("NOTICE %s :Syntax: DEOP <#chan> [nicks] <pass>\n",a)
#define	L036(a)	S("NOTICE %s :Specify a nick!\n",a)
#define	L037(a,b) S("NOTICE %s :Attempting to /nick %s\n",a,b)
#define	L038(a,b) S("NOTICE %s :Try /nick %s-dork.\n",a,b)
#define	L039(a,b) S("PRIVMSG %s :Leaving %s\n",a,b)
#define	L040(a,b) S("PRIVMSG %s :Joining %s\n",a,b)
#define	L041(a)	S("PRIVMSG %s :Specify a nick/chan!\n",a)
#define	L042(a)	S("NOTICE %s :Enter the u@h to purge!\n",a)
#define	L043(a) S("NOTICE %s :No such ban.\n",a)
#define	L044(a)	S("NOTICE %s :Enter the u@h to delete!\n",a)
#define	L045(a) S("NOTICE %s :How about I not do that?\n",a)
#define	L046(a)	S("PRIVMSG %s :Backed up database.\n",a)
#define	L047(a,b) S("NOTICE %s :SYNTAX: %cAUTOTOPIC <topic>  (set to \"0\" to turn off)\n",a,b)
#define	L048(a)	S("NOTICE %s :Syntax: SETCHAN <new channels>\n",a)
#define	L049(a,b) S("NOTICE %s :Default channel: %s\n",a,b)
#define	L050(a)	S("NOTICE %s :Syntax: SETCHAR <new command char>\n",a)
#define	L051(a,b) S("NOTICE %s :New command char now: %c\n",a,b)
#define	L052(a)	S("NOTICE %s :Syntax: SETUSER <new userid> (requires a restart)\n",a)
#define	L053(a,b) S("NOTICE %s :Default userid now: %s\n",a,b)
#define	L054(a)	S("NOTICE %s :Syntax: SETNICK <newnick>\n",a)
#define	L055(a)	S("NOTICE %s :Syntax: ADDUSER <#chan> <*user@*.host> <level> <pass>. ie; ADDUSER #darkbot \
*jason@*.superlink.net 3 hisPasswd ... use #* if you want to give access in all chans.\n",a)
#define	L056(a)	sprintf(temp, "I haven't used \2%cSETINFO\2 yet!",a)
#define	L057(a,b,c)	S("NOTICE %s :Added user: %s - level %d\n",a,b,c)
#define	L058(a,b,c)	S("NOTICE %s :Syntax: %c%s <u@h> [reason]\n",a,b,c)
#define	L059(a,b,c,d) S("NOTICE %s :Added in permban #%d, %s; reason: %s\n",a,b,c,d)
#define	L060(a)	S("NOTICE %s :Syntax: REPEAT <number> <delay> <raw-data>\n",a)
#define	L061(a)	S("NOTICE %s :Done.\n",a)
#define	L062(a) S("QUIT :Restarting %s ...\n",a);
#define	L064(a,b) S("PRIVMSG %s :%s, what do you want to add?\n",a,b)
#define	L064n(a,b) S("NOTICE %s :%s, what do you want to add?\n",a,b)
#define	L065(a,b) S("PRIVMSG %s :Add what, %s?\n",a,b);
#define	L066(a,b,c)	S("PRIVMSG %s :%s: What info to be added for %s?\n",a,b,c)
#define	L067(a,b) S("PRIVMSG %s :Okay, %s :)\n",a,b)
#define Lbadtopic(a,b) S("PRIVMSG %s :Sorry %s, but support for that topic has been removed.\n",a,b);
#define Lbadtopic2(a,b) S("NOTICE %s :Sorry %s, but support for that topic has been removed.\n",a,b);
#define	L065n(a,b) S("NOTICE %s :Add what, %s?\n",a,b);
#define	L066n(a,b,c)	S("NOTICE %s :%s: What info to be added for %s?\n",a,b,c)
#define	L067n(a,b) S("NOTICE %s :Okay, %s :)\n",a,b)
#define	L068(a,b) S("PRIVMSG %s :Replace what, %s?\n",a,b)
#define	L069(a,b,c) S("PRIVMSG %s :%s: What info should replace %s?\n",a,b,c)
#define	L070(a,b,c) S("PRIVMSG %s :%s, %s has been updated.\n",a,b,c)
#define	L071(a,b,c,d) S("PRIVMSG %s :There %s %d permban%s loaded into ram.\n",a,b,c,d)
#define	L073(a,b,c) S("PRIVMSG %s :%s, %d seconds left till randstuff\n",a,b,c)
#define	L074(a,b,c)	S("PRIVMSG %s :%s: it was %d chars long.\n",a,b,c)
#define	L075(a,b,c,d) S("PRIVMSG %s :%s, There is currently %d item%s in Que.\n",a,b,c,d)
#define	L076(a,b) S("PRIVMSG %s :I have seen %d joins thus far.\n",a,b)
#define	L077(a,b,c,d,e)	S("PRIVMSG %s :There %s %d server%s in my server list. I am currently on \
server #%d.\n",a,b,c,d,e)
#define	L078(a,b,c)	S("PRIVMSG %s :%s, my command char is: %c\n",a,b,c)
#define	L079(a,b,c)	S("PRIVMSG %s :What should i be %sing for, %s?\n",a,b,c)
#define	L080(a,b) S("PRIVMSG %s :%s, you need to specify an address!\n",a,b)
#define	L081(a,b) S("PRIVMSG %s :Was unable to look up %s.\n",a,b)
#define	L083(a,b,c)	S("PRIVMSG %s :%s: What do you want me to tell %s?\n",a,b,c)
#define	L083n(a,b,c) S("NOTICE %s :%s: What do you want me to tell %s?\n",a,b,c)
#define	L084(a,b,c)	S("PRIVMSG %s :%s, Tell %s about what?\n",a,b,c)
#define	L084n(a,b,c) S("NOTICE %s :%s, Tell %s about what?\n",a,b,c)
#define	L085(a,b) S("PRIVMSG %s :Tell who, %s?\n",a,b)
#define	L085n(a,b) S("NOTICE %s :Tell who, %s?\n",a,b)
#define	L086(a,b) S("PRIVMSG %s :%s\2:\2 you were asking?\n",a,b)
#define	L086n(a,b) S("NOTICE %s :%s\2:\2 you were asking?\n",a,b)
#define	L087(a,b,c,d,e) S("PRIVMSG %s :%s %s %s? Mind rephrasing that?  (Type %cHELP for syntax \
hints)\n",a,b,c,d,e)
#define	L087n(a,b,c,d,e) S("NOTICE %s :%s %s %s? Mind rephrasing that?  (Type %cHELP (in channel) for syntax \
hints)\n",a,b,c,d,e)
#define	L088(a) S("QUIT :%s is stoned!\n",a)
#define	L089(a)	S("PRIVMSG %s :\1ACTION wakes up...\1\n",a)
#define	L090(a,b) S("PRIVMSG %s :I'm being flooded. Dumping output Que. \
%d items deleted.\n",a,b)
