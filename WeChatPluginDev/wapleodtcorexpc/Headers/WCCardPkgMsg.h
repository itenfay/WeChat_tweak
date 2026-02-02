//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCCardPkgMsgActivity, WCCardPkgMsgButton;

@interface WCCardPkgMsg : NSObject
{
    _Bool isAutoIncrement;
    _Bool _bNeedCheck;
    _Bool _allUnavailable;
    _Bool _need_pull_card_entrance;
    unsigned int localID;
    unsigned int status;
    unsigned int updateTime;
    unsigned int IntRes1;
    unsigned int IntRes2;
    unsigned int msgType;
    unsigned int jumpType;
    unsigned int reportScene;
    unsigned int getLayoutScene;
    unsigned long long svr64ID;
    NSString *contentForDB;
    NSString *cardId;
    NSString *consumedBoxId;
    NSString *StrRes1;
    NSString *StrRes2;
    long long lastInsertedRowID;
    NSString *cardTpId;
    NSString *logoUrl;
    NSString *webUrl;
    NSString *title;
    NSString *desc;
    NSString *msgID;
    WCCardPkgMsgButton *actionBtn;
    WCCardPkgMsgActivity *activity;
    NSMutableArray *acceptItemList;
    NSString *redDotWording;
    NSString *redDotIconUrl;
    NSString *redDotBuff;
    NSString *_msgTipWording;
    NSString *_msgTipIconUrl;
    NSMutableArray *_jumpUrlBtnList;
    NSString *_logoColor;
    NSMutableArray *_unavailableQrCodeList;
}

+ (void)ParseMsgXML:(id)arg1 ToMsg:(id)arg2;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (id)swift_logoColor;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)logoColor;
+ (id)swift_consumedBoxId;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)consumedBoxId;
+ (id)swift_StrRes2;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)StrRes2;
+ (id)swift_StrRes1;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)StrRes1;
+ (id)swift_IntRes2;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)IntRes2;
+ (id)swift_IntRes1;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)IntRes1;
+ (id)swift_cardId;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)cardId;
+ (id)swift_contentForDB;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)contentForDB;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_status;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)status;
+ (id)swift_svr64ID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)svr64ID;
+ (id)swift_localID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)localID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool need_pull_card_entrance; // @synthesize need_pull_card_entrance=_need_pull_card_entrance;
@property(retain, nonatomic) NSMutableArray *unavailableQrCodeList; // @synthesize unavailableQrCodeList=_unavailableQrCodeList;
@property(nonatomic) _Bool allUnavailable; // @synthesize allUnavailable=_allUnavailable;
@property(retain, nonatomic) NSString *logoColor; // @synthesize logoColor=_logoColor;
@property(nonatomic) _Bool bNeedCheck; // @synthesize bNeedCheck=_bNeedCheck;
@property(retain, nonatomic) NSMutableArray *jumpUrlBtnList; // @synthesize jumpUrlBtnList=_jumpUrlBtnList;
@property(retain, nonatomic) NSString *msgTipIconUrl; // @synthesize msgTipIconUrl=_msgTipIconUrl;
@property(retain, nonatomic) NSString *msgTipWording; // @synthesize msgTipWording=_msgTipWording;
@property(retain, nonatomic) NSString *redDotBuff; // @synthesize redDotBuff;
@property(retain, nonatomic) NSString *redDotIconUrl; // @synthesize redDotIconUrl;
@property(retain, nonatomic) NSString *redDotWording; // @synthesize redDotWording;
@property(nonatomic) unsigned int getLayoutScene; // @synthesize getLayoutScene;
@property(retain, nonatomic) NSMutableArray *acceptItemList; // @synthesize acceptItemList;
@property(nonatomic) unsigned int reportScene; // @synthesize reportScene;
@property(retain, nonatomic) WCCardPkgMsgActivity *activity; // @synthesize activity;
@property(retain, nonatomic) WCCardPkgMsgButton *actionBtn; // @synthesize actionBtn;
@property(retain, nonatomic) NSString *msgID; // @synthesize msgID;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId;
@property(nonatomic) unsigned int jumpType; // @synthesize jumpType;
@property(nonatomic) unsigned int msgType; // @synthesize msgType;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(retain, nonatomic) NSString *consumedBoxId; // @synthesize consumedBoxId;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(retain, nonatomic) NSString *contentForDB; // @synthesize contentForDB;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(nonatomic) unsigned long long svr64ID; // @synthesize svr64ID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
- (void)setupDataFromDB;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

