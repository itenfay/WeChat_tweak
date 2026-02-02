//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, ThirdC2CRouteInfo;

@interface WCPayThirdInfo : NSObject
{
    int _m_templateID;
    int _m_sceneID;
    NSString *_m_iconUrl;
    NSString *_m_darkiconUrl;
    NSString *_m_miniIconUrl;
    NSString *_m_receiverTitle;
    NSString *_m_receiverDes;
    NSString *_m_senderTitle;
    NSString *_m_senderDes;
    NSString *_senderurl;
    NSString *_receiverurl;
    NSString *_sendernativeurl;
    NSString *_receivernativeurl;
    NSString *_titlecolor;
    NSString *_senderscenetext;
    NSString *_receiverscenetext;
    NSString *_scenetextcolor;
    NSString *_descolor;
    NSString *_paymsgid;
    NSString *_senderbackgroundurl;
    NSString *_receiverbackgroundurl;
    NSString *_senderbackgroundname;
    NSString *_receiverbackgroundname;
    NSString *_titlecolordark;
    NSString *_descolordark;
    NSString *_scenetextcolordark;
    NSString *_seperatorcolor;
    NSString *_seperatorcolordark;
    NSString *_senderbackgroundurldark;
    NSString *_receiverbackgroundurldark;
    NSString *_thirdc2crouteinfo;
    ThirdC2CRouteInfo *_routeInfo;
    NSString *_realtitlecolordark;
    NSString *_realdescolordark;
}

+ (id)getTextFrom:(struct XmlReaderNode_t *)arg1 atNodeName:(id)arg2;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *realdescolordark; // @synthesize realdescolordark=_realdescolordark;
@property(retain, nonatomic) NSString *realtitlecolordark; // @synthesize realtitlecolordark=_realtitlecolordark;
@property(retain, nonatomic) ThirdC2CRouteInfo *routeInfo; // @synthesize routeInfo=_routeInfo;
@property(retain, nonatomic) NSString *thirdc2crouteinfo; // @synthesize thirdc2crouteinfo=_thirdc2crouteinfo;
@property(retain, nonatomic) NSString *receiverbackgroundurldark; // @synthesize receiverbackgroundurldark=_receiverbackgroundurldark;
@property(retain, nonatomic) NSString *senderbackgroundurldark; // @synthesize senderbackgroundurldark=_senderbackgroundurldark;
@property(retain, nonatomic) NSString *seperatorcolordark; // @synthesize seperatorcolordark=_seperatorcolordark;
@property(retain, nonatomic) NSString *seperatorcolor; // @synthesize seperatorcolor=_seperatorcolor;
@property(retain, nonatomic) NSString *scenetextcolordark; // @synthesize scenetextcolordark=_scenetextcolordark;
@property(retain, nonatomic) NSString *descolordark; // @synthesize descolordark=_descolordark;
@property(retain, nonatomic) NSString *titlecolordark; // @synthesize titlecolordark=_titlecolordark;
@property(retain, nonatomic) NSString *receiverbackgroundname; // @synthesize receiverbackgroundname=_receiverbackgroundname;
@property(retain, nonatomic) NSString *senderbackgroundname; // @synthesize senderbackgroundname=_senderbackgroundname;
@property(retain, nonatomic) NSString *receiverbackgroundurl; // @synthesize receiverbackgroundurl=_receiverbackgroundurl;
@property(retain, nonatomic) NSString *senderbackgroundurl; // @synthesize senderbackgroundurl=_senderbackgroundurl;
@property(retain, nonatomic) NSString *paymsgid; // @synthesize paymsgid=_paymsgid;
@property(retain, nonatomic) NSString *descolor; // @synthesize descolor=_descolor;
@property(retain, nonatomic) NSString *scenetextcolor; // @synthesize scenetextcolor=_scenetextcolor;
@property(retain, nonatomic) NSString *receiverscenetext; // @synthesize receiverscenetext=_receiverscenetext;
@property(retain, nonatomic) NSString *senderscenetext; // @synthesize senderscenetext=_senderscenetext;
@property(retain, nonatomic) NSString *titlecolor; // @synthesize titlecolor=_titlecolor;
@property(copy, nonatomic) NSString *receivernativeurl; // @synthesize receivernativeurl=_receivernativeurl;
@property(copy, nonatomic) NSString *sendernativeurl; // @synthesize sendernativeurl=_sendernativeurl;
@property(copy, nonatomic) NSString *receiverurl; // @synthesize receiverurl=_receiverurl;
@property(copy, nonatomic) NSString *senderurl; // @synthesize senderurl=_senderurl;
@property(nonatomic) int m_sceneID; // @synthesize m_sceneID=_m_sceneID;
@property(retain, nonatomic) NSString *m_senderDes; // @synthesize m_senderDes=_m_senderDes;
@property(retain, nonatomic) NSString *m_senderTitle; // @synthesize m_senderTitle=_m_senderTitle;
@property(retain, nonatomic) NSString *m_receiverDes; // @synthesize m_receiverDes=_m_receiverDes;
@property(retain, nonatomic) NSString *m_receiverTitle; // @synthesize m_receiverTitle=_m_receiverTitle;
@property(retain, nonatomic) NSString *m_miniIconUrl; // @synthesize m_miniIconUrl=_m_miniIconUrl;
@property(retain, nonatomic) NSString *m_darkiconUrl; // @synthesize m_darkiconUrl=_m_darkiconUrl;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl=_m_iconUrl;
@property(nonatomic) int m_templateID; // @synthesize m_templateID=_m_templateID;
- (id)toXML;
- (void)fromNode:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

