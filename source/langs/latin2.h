#define	I_SPEAK "I speak Pig Latin."
#define     L001(a,b) S("PRIVMSG %s :Youway avehay otnay etsay away asswordpay, otay etsay away asspay: \2/msg %s PASS \
<oldpass> <newpass>\2 (incesay isthay isway yourway irstfay imetay ettingsay away asspay, usewau '0' asway yourway oldway asspay)\n",a,b)
#define	L002(a,b,c) S("NOTICE %s :Eletedday ermbanpay #%d, %s.\n",a,b,c)
#define	L003(a,b) S("NOTICE %s :Unableway otay openway %s :(\n",a,b)
#define     L004(a,b,c) S("PRIVMSG %s :%s, Ereth areway %d EENSAY'say inway ymay atabaseday.\n",a,b,c)
#define	L005(a,b) S("PRIVMSG %s :You'dway owknay oremay aboutway atthay anthay Iway oday, %s.\n",a,b)
#define	L006(a,b,c,d) S("PRIVMSG %s :%s, Iway avehay otnay eensay %s %s\n",a,b,c,d)
#define	L007(a,b) S("NOTICE %s :Autotopicway onway %s asway OFFWAY\n",a,b)
#define	L008(a,b) S("NOTICE %s :Autotopicway onway %s isway ownay OFFWAY\n",a,b);
#define	L009(a,b,c) S("NOTICE %s :AUTOTOPICWAY @ %s ONWAY: %s\n",a,b,c)
#define	L010(a,b,c) S("NOTICE %s :AUTOTOPICWAY @ %s UPDATEDWAY: %s\n",a,b,c)
#define	L011(a,b,c) S("PRIVMSG %s :%s, oneday. Erethay areway ownay %d andomstuffsray.\n",a,b,c)
#define	L012(a,b) S("NOTICE %s :Asswordpay orfay %s ashay eenbay updatedway.\n",a,b)
#define	L013(a) S("NOTICE %s :Incorrectway asswordpay!\n",a)
#define	L014(a) S("NOTICE %s :Onay atchmay!\n",a)
#define	L015(a,b,c,d) S("NOTICE %s :Eletedday userway: %s [%d:%d]\n",a,b,c,d)
#define	L016(a,b) S("PRIVMSG %s :%s: Ivisionday ybay erozay errorway!\n",a,b)
#define	L017(a,b) S("PRIVMSG %s :%s: Illegalway operationway!\n",a,b)
#define	L018(a,b,c,d,e) S("KICK %s %s :%s (addingway ignoreway #%d: %s)\n",a,b,c,d,e)
#define	L019(a,b,c) S("PRIVMSG %s :Addingway ignoreway #%d: %s!\n",a,b,c);
#define     L020(a,b,c,d) S("NOTICE %s :Updatedway #%d: \37[\37%s\37]\37 infoway\2:\2 %s\n",a,b,c,d)
#define	L021(a,b,c,d) S("PRIVMSG %s :%s \37%s\37.. %d entriesway earchedsay.\n",a,b,c,d)
#define	L022(a,b,c) S("PRIVMSG %s :Oundfay oremau anthay \37%d\37 atchesmay, easeplay arrownay ownday yourway earchsay\2:\2 \
%s\n",a,b,c);
#define	L023(a,b,c) S("PRIVMSG %s :Iway oundfay \37oneway\37 atchmay, %s\2:\2 %s\n",a,b,c)
#define	L024(a,b,c,d) S("PRIVMSG %s :Iway oundfay \37%d\37 atchesmay, %s\2:\2 %s\n",a,b,c,d)
#define	L025(a,b) S("PRIVMSG %s :Oundfay %ld opictay uplicatesday. Eythay ereway emovedray.\n",a,b)
#define	L026(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Unningray %s. Iway avehay %ld opicstay inway ymay atabaseday, Uptimeway: \
%d ayday%s, %02d:%02d, Erethay avehay eenbay %ld uestionsqay askedway, %ld opictay additionsway, andway %ld opictay eletionsday. \
Rocesspay imetay: %1.4lf ecsay%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L027(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Unningray %s. Iway avehay %ld opicstay inway ymay atabaseday, Uptimeway: \
%d ourhay%s, %d inmay%s, Erethay avehay eenbay %ld uestionsqay askedway, %ld opictay additionsway, andway %ld opictay eletionsday. \
Rocesspay imetay: %1.4lf sec%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L028(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :Unningray %s. Iway avehay %ld opicstay inway ymay atabaseday, Uptimeway: \
%d inmay%s, %d ecsay%s, Erethay avehay eenbay %ld uestionsqay askedway, %ld opictay additionsway, andway %ld opictay eletionsday. \
Rocesspay imetay: %1.4lf ecsay%s\n",a,b,c,d,e,f,g,h,i,j,k,l)
#define	L029(a,b,c,d) S("PRIVMSG %s :%s: Iway avehay eletedday opictay #%ld, \2%s\2.\n",a,b,c,d)
#define	L030(a,b,c) S("PRIVMSG %s :%s\2:\2 Iway asway unableway otay indfay ethay opictay %s. Eleteday ailedfay.\n",a,b,c)
#define	L029n(a,b,c,d) S("NOTICE %s :%s: Iway avehay eletedday opictay #%ld, \2%s\2.\n",a,b,c,d)
#define	L030n(a,b,c) S("NOTICE %s :%s\2:\2 Iway asway unableway otay indfay ethay opictay %s. Eleteday ailedfay.\n",a,b,c)
#define	L031(a,b) S("NOTICE %s :Yntaxsay: \2/msg %s PASS <oldpass> <newpass>\2\n",a,b)
#define	L032(a)	Snow("QUIT :K\2\2illed (%s (ausecay Iway aysay osay!))\n",a)
#define	L033(a)	S("NOTICE %s :Yntaxsay: UP <#chan> <pass>\n",a)
#define	L034(a)	S("NOTICE %s :Yntaxsay: OP <#chan> [nicks] <pass>\n",a)
#define	L035(a)	S("NOTICE %s :Yntaxsay: DEOP <#chan> [nicks] <pass>\n",a)
#define	L036(a)	S("NOTICE %s :Ecifyspay away icknay!\n",a)
#define	L037(a,b) S("NOTICE %s :Attemptingway otay /nick %s\n",a,b)
#define	L038(a,b) S("NOTICE %s :Ytray /nick %s-orkday.\n",a,b)
#define	L039(a,b) S("PRIVMSG %s :Eavinglay %s\n",a,b)
#define	L040(a,b) S("PRIVMSG %s :Oiningjay %s\n",a,b)
#define	L041(a)	S("PRIVMSG %s :Ecifyspay away icknay/anchay!\n",a)
#define	L042(a)	S("NOTICE %s :Enterway ethay u@h otay urgepay!\n",a)
#define	L043(a) S("NOTICE %s :Onay uchsay anbay.\n",a)
#define	L044(a)	S("NOTICE %s :Enterway ethay u@h otay eleteday!\n",a)
#define	L045(a) S("NOTICE %s :Owhay aboutway Iway otnay oday atthay?\n",a)
#define	L046(a)	S("PRIVMSG %s :Ackedbay upway atabaseday.\n",a)
#define	L047(a,b) S("NOTICE %s :YNTAXSAY: %cAUTOTOPIC <topic>  (etsay otay \"0\" otay urntay offway)\n",a,b)
#define	L048(a)	S("NOTICE %s :Yntaxsay: SETCHAN <new channels>\n",a)
#define	L049(a,b) S("NOTICE %s :Efaultday annelchay: %s\n",a,b)
#define	L050(a)	S("NOTICE %s :Yntaxsay: SETCHAR <new command char>\n",a)
#define	L051(a,b) S("NOTICE %s :Ewnay ommandcay archay ownay: %c\n",a,b)
#define	L052(a)	S("NOTICE %s :Yntaxsay: SETUSER <new userid> (equiresray away estartray)\n",a)
#define	L053(a,b) S("NOTICE %s :Efaultday useridway ownay: %s\n",a,b)
#define	L054(a)	S("NOTICE %s :Yntaxsay: SETNICK <newnick>\n",a)
#define	L055(a)	S("NOTICE %s :Yntaxsay: ADDUSER <#chan> <*user@*.host> <level> <pass>. ie; ADDUSER #darkbot \
*jason@*.superlink.net 3 hisPasswd ... useway #* ifway youway antway otay ivegay accessway inway allway anschay.\n",a)
#define	L056(a)	sprintf(temp, "Iway avenhay'tay usedway \2%cSETINFO\2 yet!",a)
#define	L057(a,b,c)	S("NOTICE %s :Addedway userway: %s - evellay %d\n",a,b,c)
#define	L058(a,b,c)	S("NOTICE %s :Yntaxsay: %c%s <u@h> [reason]\n",a,b,c)
#define	L059(a,b,c,d) S("NOTICE %s :Addedway inway ermbanpay #%d, %s; easonray: %s\n",a,b,c,d)
#define	L060(a)	S("NOTICE %s :Yntaxsay: REPEAT <number> <delay> <raw-data>\n",a)
#define	L061(a)	S("NOTICE %s :Oneday.\n",a)
#define	L062(a) S("QUIT :Estartingray %s ...\n",a);
#define	L064(a,b) S("PRIVMSG %s :%s, atwhay oday youway antway otay addway?\n",a,b)
#define	L064n(a,b) S("NOTICE %s :%s, atwhay oday youway antway otay addway?\n",a,b)
#define	L065(a,b) S("PRIVMSG %s :Addway atwhay, %s?\n",a,b);
#define	L066(a,b,c)	S("PRIVMSG %s :%s: Atwhay infoway otay ebay addedway orfay %s?\n",a,b,c)
#define	L067(a,b) S("PRIVMSG %s :Okayway, %s :)\n",a,b)
#define	L065n(a,b) S("NOTICE %s :Addway atwhay, %s?\n",a,b);
#define	L066n(a,b,c) S("NOTICE %s :%s: Atwhay infoway otay ebay addedway orfay %s?\n",a,b,c)
#define	L067n(a,b) S("NOTICE %s :Okayway, %s :)\n",a,b)
#define	L068(a,b) S("PRIVMSG %s :Eplaceray atwhay, %s?\n",a,b)
#define	L069(a,b,c) S("PRIVMSG %s :%s: Atwhay infoway ouldshay eplaceray %s?\n",a,b,c)
#define	L070(a,b,c) S("PRIVMSG %s :%s, %s ashay eenbay updatedway.\n",a,b,c)
#define	L071(a,b,c,d) S("PRIVMSG %s :Erethay %s %d ermbanpay%s oadedlay intoway amray.\n",a,b,c,d)
#define	L073(a,b,c) S("PRIVMSG %s :%s, %d econdssay eftlay illtay andstuffray\n",a,b,c)
#define	L074(a,b,c)	S("PRIVMSG %s :%s: itway asway %d arschay onglay.\n",a,b,c)
#define	L075(a,b,c,d) S("PRIVMSG %s :%s, Erethay isway urrentlycay %d itemway%s inway Que.\n",a,b,c,d)
#define	L076(a,b) S("PRIVMSG %s :Iway avehay eensay %d oinsjay usthay arfay.\n",a,b)
#define	L077(a,b,c,d,e)	S("PRIVMSG %s :Erethay %s %d erversay%s inway ymau erversay istlay. Iway amway urrentlycay onway \
erversay #%d.\n",a,b,c,d,e)
#define	L078(a,b,c)	S("PRIVMSG %s :%s, ymay ommandcay archay isway: %c\n",a,b,c)
#define	L079(a,b,c)	S("PRIVMSG %s :Atwhay ouldshay Iway ebay %sing orfay, %s?\n",a,b,c)
#define	L080(a,b) S("PRIVMSG %s :%s, youway eednay otay ecifyspay anway addressway!\n",a,b)
#define	L081(a,b) S("PRIVMSG %s :Asway unableway otay ooklay upway %s.\n",a,b)
#define	L083(a,b,c)	S("PRIVMSG %s :%s: Atwhay oday youway antway emay otay elltay %s?\n",a,b,c)
#define	L084(a,b,c)	S("PRIVMSG %s :%s, Elltay %s aboutway atwhay?\n",a,b,c)
#define	L085(a,b) S("PRIVMSG %s :Elltay owhay, %s?\n",a,b)
#define	L083n(a,b,c) S("NOTICE %s :%s: Atwhay oday youway antway emay otay elltay %s?\n",a,b,c)
#define	L084n(a,b,c) S("NOTICE %s :%s, Elltay %s aboutway atwhay?\n",a,b,c)
#define	L085n(a,b) S("NOTICE %s :Elltay owhay, %s?\n",a,b)
#define	L086(a,b) S("PRIVMSG %s :%s\2:\2 youway ereway askingway?\n",a,b)
#define	L087(a,b,c,d,e) S("PRIVMSG %s :%s %s %s? Indmay ephrasingray atthay?  (Ypetay %cHELP orfay yntaxsay \
hints)\n",a,b,c,d,e)
#define	L086n(a,b) S("NOTICE %s :%s\2:\2 youway ereway askingway?\n",a,b)
#define	L087n(a,b,c,d,e) S("NOTICE %s :%s %s %s? Indmay ephrasingray atthay?  (Ypetay %cHELP orfay yntaxsay \
hints)\n",a,b,c,d,e)
#define	L088(a) S("QUIT :%s isway onedstay!\n",a)
#define	L089(a)	S("PRIVMSG %s :\1ACTION akesway upway...\1\n",a)
#define	L090(a,b) S("PRIVMSG %s :Iway'may eingbay oodedflay. Umpingday outputway Que. \
%d itemsway eletedday.\n",a,b)
#define Lbadtopic(a,b) S("PRIVMSG %s :Orrysay  %s, utbay upportsay orfay atthay opictay ashay eenbay emovedray.\n",a,b);
#define Lbadtopic2(a,b) S("NOTICE %s :Orrysay  %s, utbay upportsay orfay atthay opictay ashay eenbay emovedray.\n",a,b);