#define	I_SPEAK "�ڻ�����."
#define	L001(a,b) S("PRIVMSG %s : �A�٨S���]�m�K�X. �n�]�m�K�X,�Х�: \2/msg %s PASS \
<�±K�X> <�s�K�X>\2 (�p�G�O�Ĥ@���]�m�K�X,�±K�X���� 0 )\n",a,b)
#define	L002(a,b,c) S("NOTICE %s :�w�����R���T�ΥΤ� #%d, %s.\n",a,b,c)
#define	L003(a,b) S("NOTICE %s :�L�k���} %s :(\n",a,b)
#define L004(a,b,c) S("PRIVMSG %s :%s, �b�ڪ��¸��U�ʤ��@�O���F %d �o��h�o�͹L����.\n",a,b,c)
#define	L005(a,b) S("PRIVMSG %s :�A�w�g���D�o��ڦh�F, %s.\n",a,b)
#define	L006(a,b,c,d) S("PRIVMSG %s :%s, �藍�_��! �ڨS�����L%s %s\n",a,b,c,d)
#define	L007(a,b) S("NOTICE %s :�۰ʥD�D %s ��~�O������\n",a,b)
#define	L008(a,b) S("NOTICE %s :�۰ʥD�D %s �{�b����\n",a,b);
#define	L009(a,b,c) S("NOTICE %s :�۰ʥD�D@ %s ���}: %s\n",a,b,c)
#define	L010(a,b,c) S("NOTICE %s :�۰ʥD�D@ %s �w��s: %s\n",a,b,c)
#define	L011(a,b,c) S("PRIVMSG %s :%s, ���§A�@�N�Ч�. �ڲ{�b�w�g�� %d �y�i�H�H�������ܤF. :=]\n",a,b,c)
#define	L012(a,b) S("NOTICE %s :%s ���K�X�w��s�F.\n",a,b)
#define	L013(a) S("NOTICE %s :��~�K�X���~��~ �ЦA�J�ӷQ�@�Q!\n",a)
#define	L014(a) S("NOTICE %s :�藍�_! �ڧ䤣��A�X�A�����!\n",a)
#define	L015(a,b,c,d) S("NOTICE %s :�Τ�w�R��: %s [%d:%d]\n",a,b,c,d)
#define	L016(a,b) S("PRIVMSG %s :%s: �Q�s�����~!\n",a,b)
#define	L017(a,b) S("PRIVMSG %s :%s: �D�k�ާ@!\n",a,b)
#define	L018(a,b,c,d,e) S("KICK %s %s :%s (�W�[�۰ʩ����Τ�#%d: %s)\n",a,b,c,d,e)
#define	L019(a,b,c) S("PRIVMSG %s :�ڤw�g�� #%d �� %s ���L�F!\n",a,b,c);
#define L020(a,b,c,d) S("NOTICE %s :�ڤw��s #%d: \37[\37%s\37]\37 info\2:\2 %s\n",a,b,c,d)
#define	L021(a,b,c,d) S("PRIVMSG %s :%s \37%s\37.. �ڦ@��F %d �o��h�����.\n",a,b,c,d)
#define	L022(a,b,c) S("PRIVMSG %s :�کҪ��D���Ʀ��U�C�o \37%d\37 ��ŦX�A������, �p�U\2:\2 \
%s\n",a,b,c);
#define	L023(a,b,c) S("PRIVMSG %s :���ߧA! �b�ڪ����U�̥u���@��ŦX�A���󪺨Ʊ���, %s\2:\2 %s\n",a,b,c)
#define	L024(a,b,c,d) S("PRIVMSG %s :�ڤ@�@�� \37%d\37 ��A�Q���D���Ʊ�, %s\2:\2 %s\n",a,b,c,d)
#define	L025(a,b) S("PRIVMSG %s :�b�ڪ��O�Ф��@�� %ld �����_�����,�ڤw�g�N���_�����D�R���F.\n",a,b)
#define	L026(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :�ڬO�ϥ� %s ��ڪ����U��. �کҪ��D���Ʀ@�� %ld �o��h, �ڤw�g�����A�ȤF \
%d ��, %02d:%02d �o��[, �� %ld ��b�����W�g����V���H���I�g�z, �b�o�q�ɶ���, �ڵo�{�F %ld ��s�A��, �P�ɤ]�� %ld �󤣾A�X�o�ɥN���Ƨѱ�. \
�����_�ӧڴ��@�ӤH�^�����D�u�ݭn��� %1.4lf ��\n",a,b,c,d,f,g,h,i,j,k)
#define	L027(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :�ڬO�ϥ� %s ��ڪ����U��. �کҪ��D���Ʀ@�� %ld �o��h, �ڤw�g�����A�ȤF \
%d �p��, %d ���� �o��[, �� %ld ��b�����W�g����V���H���I�g�z, �b�o�q�ɶ���, �ڵo�{�F %ld ��s�A��, �P�ɤ]�� %ld �󤣾A�X�o�ɥN���Ƨѱ�. \
�����_�ӧڴ��@�ӤH�^�����D�u�ݭn��� %1.4lf ��\n",a,b,c,d,f,h,i,j,k)
#define	L028(a,b,c,d,e,f,g,h,i,j,k,l) S("PRIVMSG %s :�ڬO�ϥ� %s ��ڪ����U��. �کҪ��D���Ʀ@�� %ld �o��h, �ڤw�g�����A�ȤF \
%d ����, %d �� �o��[, �� %ld ��b�����W�g����V���H���I�g�z, �b�o�q�ɶ���, �ڵo�{�F %ld ��s�A��, �P�ɤ]��% ld �󤣾A�X�o�ɥN���Ƨѱ�. \
�����_�ӧڴ��@�ӤH�^�����D�u�ݭn��� %1.4lf ��\n",a,b,c,d,f,h,i,j,k)
#define	L029(a,b,c,d) S("PRIVMSG %s :%s: �ڤw�g�ӧA���ܧ�b�ڰO�Ф����� #%ld ���s�� \2%s\2 ����ƧR���F.\n",a,b,c,d)
#define	L030(a,b,c) S("PRIVMSG %s :%s\2:\2 �ڨä����D�� %s �o��ư�.\n",a,b,c)
#define	L029n(a,b,c,d) S("NOTICE %s :%s:�ڤw�g�ӧA���ܧ�b�ڰO�Ф�����#%ld���s��\2%s\2����ƧR���F.\n",a,b,c,d)
#define	L030n(a,b,c) S("NOTICE %s :%s\2:\2 �ڨä����D�� %s �o��ư�.\n",a,b,c)
#define	L031(a,b) S("NOTICE %s :�Ϊk: \2/msg %s PASS <�±K�X> <�s�K�X>\2\n",a,b)
#define	L032(a)	Snow("QUIT :��!�ڥX���D�F, �ڥD�H %s ���b���ڭײz��..\n",a)
#define	L033(a)	S("NOTICE %s :�Ϊk: UP <#�W�D> <�K�X>\n",a)
#define	L034(a)	S("NOTICE %s :�Ϊk: OP <#�W�D> [���] <�K�X>\n",a)
#define	L035(a)	S("NOTICE %s :�Ϊk: DEOP <#�W�D> [���] <�K�X>\n",a)
#define	L036(a)	S("NOTICE %s :�Ы��w�@�����!\n",a)
#define	L037(a,b) S("NOTICE %s :�չ� /��� %s\n",a,b)
#define	L038(a,b) S("NOTICE %s :�й���  /��� %s-dork.\n",a,b)
#define	L039(a,b) S("PRIVMSG %s :��! ���W���} %s �o�Ӳ�ѫ�!\n",a,b)
#define	L040(a,b) S("PRIVMSG %s :��! ���ڻ��ֶi�h %s ��ѫṊ̀�!\n",a,b)
#define	L041(a)	S("PRIVMSG %s :�A�n��֩άO������ѫǻ���?\n",a)
#define	L042(a)	S("NOTICE %s :��J�n�R����u@h!\n",a)
#define	L043(a) S("NOTICE %s :�S���A�����T�ΥΤ�.\n",a)
#define	L044(a)	S("NOTICE %s :��J�n�R����u@h!\n",a)
#define	L045(a) S("NOTICE %s :�����򰵦椣��?\n",a)
#define	L046(a)	S("PRIVMSG %s :����, �ڥ��N�ڪ��D���Ƶ��g�U��.\n",a)
#define	L047(a,b) S("NOTICE %s :�Ϊk: %cAUTOTOPIC <�D�D>  (�]�m��\"0\"��ܲM�ťD�D)\n",a,b)
#define	L048(a)	S("NOTICE %s :�Ϊk: SETCHAN <�s�W�D>\n",a)
#define	L049(a,b) S("NOTICE %s :�s�]�w�W�D: %s\n",a,b)
#define	L050(a)	S("NOTICE %s :�Ϊk: SETCHAR <�s���R�O��>\n",a)
#define	L051(a,b) S("NOTICE %s :�{�b���R�O�ŬO: %c\n",a,b)
#define	L052(a)	S("NOTICE %s :�Ϊk: SETUSER <�s���Τ�ID> (�ݭn���s�Ұʾ����H)\n",a)
#define	L053(a,b) S("NOTICE %s :�{�b���ʬ٥Τ�ID�O: %s\n",a,b)
#define	L054(a)	S("NOTICE %s :�Ϊk: SETNICK <�s�����>\n",a)
#define	L055(a)	S("NOTICE %s :�Ϊk: ADDUSER <#�W�D> <*user@*.host> <�ŧO> <�K�X>. �Ҧp, ADDUSER #darkbot \
*jason@*.superlink.net 3 hisPasswd ... �ϥ�#*�N�ϸӥΤ᪺�v���A�Τ_�Ҧ����W�D.\n",a)
#define	L056(a)	sprintf(temp, "�A�٨S����\2%cSETINFO\2 �]�m�w��H��!",a)
#define	L057(a,b,c)	S("NOTICE %s :�Τ�w�K�[: %s - �ŧO%d\n",a,b,c)
#define	L058(a,b,c)	S("NOTICE %s :�Ϊk: %c%s <u@h> [�z��]\n",a,b,c)
#define	L059(a,b,c,d) S("NOTICE %s :�[�J�T�ΥΤ�C��#%d, %s; �z��: %s\n",a,b,c,d)
#define	L060(a)	S("NOTICE %s :�Ϊk: REPEAT <number> <delay> <raw-data>\n",a)
#define	L061(a)	S("NOTICE %s :�w����.\n",a)
#define	L062(a) S("QUIT :�ڭ��s�s�u�@�U... %s\n",a);
#define	L064(a,b) S("PRIVMSG %s :%s, �A�Q�Чڬƻ�Ʊ���?\n",a,b)
#define	L064n(a,b) S("NOTICE %s :%s, �A�Q�Чڬƻ�Ʊ���?\n",a,b)
#define	L065(a,b) S("PRIVMSG %s :�A�Q�Чڬƻ�H�ͪ��j�D�z��? %s?\n",a,b);
#define	L065n(a,b) S("NOTICE %s :�A�Q�Чڬƻ�H�ͪ��j�D�z��? %s?\n",a,b);
#define	L066(a,b,c)	S("PRIVMSG %s :%s: �A�Q�� %s �]�w�ƻ��ư�?\n",a,b,c)
#define	L066n(a,b,c) S("NOTICE %s :%s: �A�Q�� %s �]�w�ƻ��ư�?\n",a,b,c)
#define	L067(a,b) S("PRIVMSG %s :���� %s �Ч�, �ڤS�h�A�ѤF�@��ƤF! :=]\n",a,b)
#define Lbadtopic(a,b) S("PRIVMSG %s :%s �藍�_��, �ڦ��䴩�����D�w�g�Q�R���F.\n",a,b);
#define Lbadtopic2(a,b) S("NOTICE %s :%s �藍�_��, �ڦ��䴩�����D�w�g�Q�R���F.\n",a,b);
#define	L067n(a,b) S("NOTICE %s :���� %s �Ч�, �ڤS�h�A�ѤF�@��ƤF! :=]\n",a,b)
#define	L068(a,b) S("PRIVMSG %s :�A�Q�ȥ����Ӱ��D�����שO? %s.\n",a,b)
#define	L069(a,b,c) S("PRIVMSG %s :%s: �A�Q�N %s �o�Ӱ��D�����ƻ򵪮�?\n",a,b,c)
#define	L070(a,b,c) S("PRIVMSG %s :���� %s �ȥ��� %s �o�ӵ��ת����~.\n",a,b,c)
#define	L071(a,b,c,d) S("PRIVMSG %s :�b�ڪ��L�H���@�� %d �ӤH�ڤ��Q��L�̻���.\n",a,c,c,c)
#define	L073(a,b,c) S("PRIVMSG %s :%s, �A�L %d ��ڴN�n�J���ûy�F.\n",a,b,c)
#define	L074(a,b,c)	S("PRIVMSG %s :%s: �o�y���`�@�� %d �Ӧ줸��.\n",a,b,c)
#define	L075(a,b,c,d) S("PRIVMSG %s :%s, �{�b�@�� %d ���O�����ڳB�z %s.\n",a,b,c,d)
#define	L076(a,b) S("PRIVMSG %s :�q�ڶi�Ө�{�b, ���`�@�ݨ� %d �ӤH�i�J�o��ѫ�.\n",a,b)
#define	L077(a,b,c,d,e)	S("PRIVMSG %s :���`�@�i�H�h %s %d �Ӳ�Ѻ���%s. �ڲ{�b���b\
�� #%d �Ӳ�Ѻ���.\n",a,b,c,d,e)
#define	L078(a,b,c)	S("PRIVMSG %s :%s, ����ڪ����O�O %c\n",a,b,c)
#define	L079(a,b,c)	S("PRIVMSG %s :%s �ƻ��? %s?\n",a,b,c)
#define	L080(a,b) S("PRIVMSG %s :%s, �A�o���w�@�Ӧa�}���ڰ�!\n",a,b)
#define	L081(a,b) S("PRIVMSG %s :�ڨS����k��� %s ����Ƴ�.\n",a,b)
#define	L083(a,b,c)	S("PRIVMSG %s :%s: �A�n�ڧi�D %s �ƻ�ư�?\n",a,b,c)
#define	L084(a,b,c)	S("PRIVMSG %s :%s, �A�n�ڧi�D %s �ƻ�ư�?\n",a,b,c)
#define	L085(a,b) S("PRIVMSG %s :�A�Q�n�i�D�ְ�? %s?\n",a,b)
#define	L083n(a,b,c) S("NOTICE %s :%s: �A�Q���ڧi�D %s �ƻ�?\n",a,b,c)
#define	L084n(a,b,c) S("NOTICE %s :%s, �A�n���ڧi�D %s �ƨư�?\n",a,b,c)
#define	L085n(a,b) S("NOTICE %s :�A�n���ڧi�D��? %s?\n",a,b)
#define	L086(a,b) S("PRIVMSG %s :%s\2:\2 �A�b�ݧڰ��D��?\n",a,b)
#define	L087(a,b,c,d,e) S("PRIVMSG %s :%s %s %s? �Э��s��J�R�O(�� %cHELP ���ڱЧA���ϥ�\
hints)\n",a,b,c,d,e)
#define	L086n(a,b) S("NOTICE %s :%s\2:\2 �A�b�ݶ�?\n",a,b)
#define	L087n(a,b,c,d,e) S("NOTICE %s :%s %s %s? �Э��s��J�R�O(�� %cHELP ���ڱЧA���ϥ�\
hints)\n",a,b,c,d,e)
#define	L088(a) S("QUIT :%s �ڤw�g�K��S��k�A���A�̸ѵ��F!\n",a)
#define	L089(a)	S("PRIVMSG %s :\1ACTION �ڴ_���F!!!!\1\n",a)
#define	L090(a,b) S("PRIVMSG %s :�֦b�@���Чڤ@�ǨS�Ϊ��F�� \
�ڤw�g�� %d��S�Ϊ��ƧR���F.\n",a,b)
