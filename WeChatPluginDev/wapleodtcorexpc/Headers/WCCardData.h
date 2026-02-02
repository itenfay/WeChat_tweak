//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCardDataCardInfo, WCCardDataCardTPInfo, WCCardDataShareInfo;

@interface WCCardData
{
    _Bool isAutoIncrement;
    int uiLayoutType;
    unsigned int localCardId;
    unsigned int beginTime;
    unsigned int endTime;
    unsigned int stateFlag;
    unsigned int updateSeq;
    unsigned int localUpdateSeq;
    unsigned int updateTime;
    unsigned int localUpdateTime;
    unsigned int isDynamicCode;
    unsigned int IntRes1;
    unsigned int IntRes2;
    unsigned int IntRes3;
    WCCardDataCardTPInfo *cardTPInfo;
    WCCardDataCardInfo *cardInfo;
    WCCardDataShareInfo *shareInfo;
    NSString *jsonStrForTest;
    NSString *layoutAnnounce;
    NSString *layoutTitle;
    NSString *encryptCode;
    NSString *labelWording;
    NSString *cardId;
    NSString *cardTpId;
    NSString *cardTPInfoForDB;
    NSString *cardInfoForDB;
    NSString *shareInfoForDB;
    NSString *StrRes1;
    NSString *StrRes2;
    NSString *StrRes3;
    long long lastInsertedRowID;
}

+ (id)getShareInfoStr:(id)arg1;
+ (id)getCardInfoStr:(id)arg1;
+ (id)getCardTPInfoStr:(id)arg1;
+ (void)parseShareInfoDic:(id)arg1 ToShareInfo:(id)arg2;
+ (void)parseCardInfoDic:(id)arg1 ToCardInfo:(id)arg2;
+ (void)parseCardTPInfoDic:(id)arg1 ToCardTpInfo:(id)arg2;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (id)swift_StrRes3;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)StrRes3;
+ (id)swift_StrRes2;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)StrRes2;
+ (id)swift_StrRes1;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)StrRes1;
+ (id)swift_IntRes3;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)IntRes3;
+ (id)swift_IntRes2;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)IntRes2;
+ (id)swift_IntRes1;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)IntRes1;
+ (id)swift_shareInfoForDB;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)shareInfoForDB;
+ (id)swift_cardInfoForDB;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)cardInfoForDB;
+ (id)swift_cardTPInfoForDB;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)cardTPInfoForDB;
+ (id)swift_isDynamicCode;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)isDynamicCode;
+ (id)swift_localUpdateTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)localUpdateTime;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_localUpdateSeq;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)localUpdateSeq;
+ (id)swift_updateSeq;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)updateSeq;
+ (id)swift_stateFlag;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)stateFlag;
+ (id)swift_endTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)endTime;
+ (id)swift_beginTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)beginTime;
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
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

@property(retain, nonatomic) NSString *StrRes3; // @synthesize StrRes3;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes3; // @synthesize IntRes3;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(retain, nonatomic) NSString *shareInfoForDB; // @synthesize shareInfoForDB;
@property(retain, nonatomic) NSString *cardInfoForDB; // @synthesize cardInfoForDB;
@property(retain, nonatomic) NSString *cardTPInfoForDB; // @synthesize cardTPInfoForDB;
@property(nonatomic) unsigned int isDynamicCode; // @synthesize isDynamicCode;
@property(nonatomic) unsigned int localUpdateTime; // @synthesize localUpdateTime;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned int localUpdateSeq; // @synthesize localUpdateSeq;
@property(nonatomic) unsigned int updateSeq; // @synthesize updateSeq;
@property(nonatomic) unsigned int stateFlag; // @synthesize stateFlag;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(nonatomic) unsigned int localCardId; // @synthesize localCardId;
@property(retain, nonatomic) NSString *labelWording; // @synthesize labelWording;
@property(retain, nonatomic) NSString *encryptCode; // @synthesize encryptCode;
@property(retain, nonatomic) NSString *layoutTitle; // @synthesize layoutTitle;
@property(retain, nonatomic) NSString *layoutAnnounce; // @synthesize layoutAnnounce;
@property(nonatomic) int uiLayoutType; // @synthesize uiLayoutType;
@property(retain, nonatomic) NSString *jsonStrForTest; // @synthesize jsonStrForTest;
@property(retain, nonatomic) WCCardDataShareInfo *shareInfo; // @synthesize shareInfo;
@property(retain, nonatomic) WCCardDataCardInfo *cardInfo; // @synthesize cardInfo;
@property(retain, nonatomic) WCCardDataCardTPInfo *cardTPInfo; // @synthesize cardTPInfo;
- (id)getCardTpInfo;
- (id)getCardInfo;
- (id)getCardTpId;
- (id)getCardId;
- (void)parseFromJSONDic:(id)arg1;
- (void)parseFromJSONStr:(id)arg1;
- (void)setupDataBeforeWriteDB;
- (void)setupDataFromDB;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

