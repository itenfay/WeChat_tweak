//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface GameCenterMsgDbModel : NSObject
{
    _Bool isAutoIncrement;
    _Bool _showInMsgCenter;
    _Bool _unRead;
    _Bool _needReExposure;
    _Bool _needHide;
    _Bool _isGreet;
    unsigned int _localId;
    unsigned int _type;
    unsigned int _createTime;
    unsigned int _recvTime;
    unsigned int _msgRecvServerTime;
    unsigned int _firstExposureServerTime;
    unsigned int _showType;
    unsigned int _alreadyMergedCount;
    unsigned int _reportType;
    unsigned int _msgExposureState;
    unsigned int _msgExposureCnt;
    unsigned int _completeExposureCnt;
    int _msgState;
    float _exposureRateScore;
    int _redPointQueueType;
    unsigned int _relationType;
    unsigned int _subMsgType;
    long long lastInsertedRowID;
    NSString *_svrMsgId;
    NSString *_content;
    NSString *_mergeId;
    NSString *_pushId;
    NSData *_msgSimplePbData;
    NSString *_contentId;
}

+ (void)__wcdb_index_30:(void *)arg1;
+ (void)__wcdb_index_29:(void *)arg1;
+ (void)__wcdb_column_constraint_28:(void *)arg1;
+ (id)swift_contentId;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (const void *)contentId;
+ (id)swift_subMsgType;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (const void *)subMsgType;
+ (id)swift_completeExposureCnt;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)completeExposureCnt;
+ (id)swift_needHide;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (const void *)needHide;
+ (id)swift_msgSimplePbData;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)msgSimplePbData;
+ (id)swift_relationType;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)relationType;
+ (id)swift_isGreet;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (const void *)isGreet;
+ (id)swift_pushId;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)pushId;
+ (id)swift_exposureRateScore;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)exposureRateScore;
+ (id)swift_msgState;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)msgState;
+ (id)swift_redPointQueueType;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)redPointQueueType;
+ (id)swift_msgExposureCnt;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)msgExposureCnt;
+ (id)swift_msgExposureState;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)msgExposureState;
+ (id)swift_needReExposure;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)needReExposure;
+ (id)swift_reportType;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)reportType;
+ (id)swift_alreadyMergedCount;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)alreadyMergedCount;
+ (id)swift_showType;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)showType;
+ (id)swift_firstExposureServerTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)firstExposureServerTime;
+ (id)swift_msgRecvServerTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)msgRecvServerTime;
+ (id)swift_recvTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)recvTime;
+ (id)swift_mergeId;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)mergeId;
+ (id)swift_unRead;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)unRead;
+ (id)swift_showInMsgCenter;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)showInMsgCenter;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_content;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)content;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)type;
+ (id)swift_svrMsgId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)svrMsgId;
+ (id)swift_localId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)localId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(nonatomic) unsigned int subMsgType; // @synthesize subMsgType=_subMsgType;
@property(retain, nonatomic) NSData *msgSimplePbData; // @synthesize msgSimplePbData=_msgSimplePbData;
@property(nonatomic) unsigned int relationType; // @synthesize relationType=_relationType;
@property(nonatomic) _Bool isGreet; // @synthesize isGreet=_isGreet;
@property(nonatomic) _Bool needHide; // @synthesize needHide=_needHide;
@property(retain, nonatomic) NSString *pushId; // @synthesize pushId=_pushId;
@property(nonatomic) int redPointQueueType; // @synthesize redPointQueueType=_redPointQueueType;
@property(nonatomic) float exposureRateScore; // @synthesize exposureRateScore=_exposureRateScore;
@property(nonatomic) int msgState; // @synthesize msgState=_msgState;
@property(nonatomic) unsigned int completeExposureCnt; // @synthesize completeExposureCnt=_completeExposureCnt;
@property(nonatomic) unsigned int msgExposureCnt; // @synthesize msgExposureCnt=_msgExposureCnt;
@property(nonatomic) unsigned int msgExposureState; // @synthesize msgExposureState=_msgExposureState;
@property(nonatomic) _Bool needReExposure; // @synthesize needReExposure=_needReExposure;
@property(nonatomic) unsigned int reportType; // @synthesize reportType=_reportType;
@property(nonatomic) unsigned int alreadyMergedCount; // @synthesize alreadyMergedCount=_alreadyMergedCount;
@property(nonatomic) unsigned int showType; // @synthesize showType=_showType;
@property(nonatomic) unsigned int firstExposureServerTime; // @synthesize firstExposureServerTime=_firstExposureServerTime;
@property(nonatomic) unsigned int msgRecvServerTime; // @synthesize msgRecvServerTime=_msgRecvServerTime;
@property(nonatomic) unsigned int recvTime; // @synthesize recvTime=_recvTime;
@property(retain, nonatomic) NSString *mergeId; // @synthesize mergeId=_mergeId;
@property(nonatomic) _Bool unRead; // @synthesize unRead=_unRead;
@property(nonatomic) _Bool showInMsgCenter; // @synthesize showInMsgCenter=_showInMsgCenter;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *svrMsgId; // @synthesize svrMsgId=_svrMsgId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

- (id)initWithGameCenterMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

