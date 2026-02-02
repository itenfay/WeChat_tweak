//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCardDataCardInfo, WCCardDataCardTPInfo;

@interface WCShareCardData
{
    _Bool bNearby;
    _Bool isAutoIncrement;
    _Bool _bNew;
    unsigned int localCardId;
    unsigned int stateFlag;
    unsigned int updateTime;
    unsigned int localUpdateTime;
    unsigned int shareTime;
    unsigned int expireTime;
    unsigned int _IntRes1;
    unsigned int _IntRes2;
    unsigned int _IntRes3;
    NSString *announceMent;
    NSString *cardId;
    NSString *cardTpId;
    NSString *appId;
    unsigned long long updateSeq;
    unsigned long long localUpdateSeq;
    NSString *shareUserName;
    NSString *markUserName;
    NSString *shareCardTPInfoForDB;
    NSString *shareCardInfoForDB;
    NSString *shareCardShareInfoForDB;
    NSString *shareCardLogoName;
    NSString *shareCardTitle;
    NSString *shareCardFromUser;
    NSString *shareCardContent;
    long long lastInsertedRowID;
    WCCardDataCardInfo *_shareCardInfo;
    WCCardDataCardTPInfo *_shareCardTPInfo;
    NSString *_encryptCode;
    NSString *_cardExt;
    NSString *_StrRes1;
    NSString *_StrRes2;
    NSString *_StrRes3;
}

+ (void)__wcdb_column_constraint_26:(void *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_shareCardTPInfo;
+ (void)PBArrayAdd_shareCardInfo;
+ (id)swift_StrRes3;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)StrRes3;
+ (id)swift_StrRes2;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (const void *)StrRes2;
+ (id)swift_StrRes1;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)StrRes1;
+ (id)swift_IntRes3;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)IntRes3;
+ (id)swift_IntRes2;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (const void *)IntRes2;
+ (id)swift_IntRes1;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)IntRes1;
+ (id)swift_shareCardContent;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)shareCardContent;
+ (id)swift_shareCardFromUser;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)shareCardFromUser;
+ (id)swift_shareCardTitle;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)shareCardTitle;
+ (id)swift_shareCardLogoName;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)shareCardLogoName;
+ (id)swift_shareCardShareInfoForDB;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)shareCardShareInfoForDB;
+ (id)swift_shareCardInfoForDB;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)shareCardInfoForDB;
+ (id)swift_shareCardTPInfoForDB;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)shareCardTPInfoForDB;
+ (id)swift_markUserName;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)markUserName;
+ (id)swift_expireTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)expireTime;
+ (id)swift_shareUserName;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)shareUserName;
+ (id)swift_shareTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)shareTime;
+ (id)swift_localUpdateTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)localUpdateTime;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_localUpdateSeq;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)localUpdateSeq;
+ (id)swift_updateSeq;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)updateSeq;
+ (id)swift_stateFlag;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)stateFlag;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)appId;
+ (id)swift_cardTpId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)cardTpId;
+ (id)swift_cardId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)cardId;
+ (id)swift_localCardId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)localCardId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *StrRes3; // @synthesize StrRes3=_StrRes3;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2=_StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1=_StrRes1;
@property(nonatomic) unsigned int IntRes3; // @synthesize IntRes3=_IntRes3;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2=_IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1=_IntRes1;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) NSString *encryptCode; // @synthesize encryptCode=_encryptCode;
@property(nonatomic) _Bool bNew; // @synthesize bNew=_bNew;
@property(retain, nonatomic) WCCardDataCardTPInfo *shareCardTPInfo; // @synthesize shareCardTPInfo=_shareCardTPInfo;
@property(retain, nonatomic) WCCardDataCardInfo *shareCardInfo; // @synthesize shareCardInfo=_shareCardInfo;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

@property(retain, nonatomic) NSString *shareCardContent; // @synthesize shareCardContent;
@property(retain, nonatomic) NSString *shareCardFromUser; // @synthesize shareCardFromUser;
@property(retain, nonatomic) NSString *shareCardTitle; // @synthesize shareCardTitle;
@property(retain, nonatomic) NSString *shareCardLogoName; // @synthesize shareCardLogoName;
@property(retain, nonatomic) NSString *shareCardShareInfoForDB; // @synthesize shareCardShareInfoForDB;
@property(retain, nonatomic) NSString *shareCardInfoForDB; // @synthesize shareCardInfoForDB;
@property(retain, nonatomic) NSString *shareCardTPInfoForDB; // @synthesize shareCardTPInfoForDB;
@property(retain, nonatomic) NSString *markUserName; // @synthesize markUserName;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime;
@property(retain, nonatomic) NSString *shareUserName; // @synthesize shareUserName;
@property(nonatomic) unsigned int shareTime; // @synthesize shareTime;
@property(nonatomic) unsigned int localUpdateTime; // @synthesize localUpdateTime;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned long long localUpdateSeq; // @synthesize localUpdateSeq;
@property(nonatomic) unsigned long long updateSeq; // @synthesize updateSeq;
@property(nonatomic) unsigned int stateFlag; // @synthesize stateFlag;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(nonatomic) unsigned int localCardId; // @synthesize localCardId;
@property(retain, nonatomic) NSString *announceMent; // @synthesize announceMent;
@property(nonatomic) _Bool bNearby; // @synthesize bNearby;
- (long long)compareShareTime:(id)arg1;
- (_Bool)HasBeConsumed;
- (id)getCardTpInfo;
- (id)getCardInfo;
- (id)getCardTpId;
- (id)getCardId;
- (void)parseFromJSONDic:(id)arg1;
- (void)parseFromJSONStr:(id)arg1;
- (void)setupDataBeforeWriteDB;
- (void)setupDataFromDB;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

