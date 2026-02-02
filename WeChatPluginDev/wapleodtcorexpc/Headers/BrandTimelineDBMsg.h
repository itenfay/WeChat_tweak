//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface BrandTimelineDBMsg : NSObject
{
    _Bool isAutoIncrement;
    _Bool _isExpan;
    _Bool _isStarContact;
    _Bool _isBrowsed;
    _Bool _bExposedInMainSession;
    _Bool _hasResorted;
    _Bool _isResortNewDigestBold;
    _Bool _isValidExpose;
    unsigned int _msgId;
    unsigned int _groupId;
    unsigned int _groupOrderId;
    unsigned int _msgPredict;
    unsigned int _msgLocalId;
    unsigned int _createTime;
    unsigned int _status;
    unsigned int _type;
    unsigned int _msgClusterType;
    unsigned int _bizMsgType;
    unsigned int _exposeCountInMainSession;
    unsigned int _exposeTotalTimeInMainSession;
    unsigned int _exposeMinPosInMainSession;
    unsigned int _canvasAdExpiredTimeSec;
    unsigned int _resortNewDigestExposeCountInMainSession;
    unsigned int _resortNewBoldDigestExposeCountInMainSession;
    unsigned int _recRecycleCardType;
    unsigned int _recCardMediaType;
    long long lastInsertedRowID;
    unsigned long long _sequenceId;
    long long _msgServerId;
    NSString *_message;
    NSString *_msgIdentify;
    NSString *_userName;
    NSString *_msgSource;
    NSData *_byteBuffer;
    NSString *_rankSessionId;
    NSString *_recCardId;
    NSString *_canvasId;
    NSString *_resortNewDigestInfoJson;
    NSString *_resortNewDigestStrategyInfo;
    NSString *_recReason;
    NSString *_resortBuffer;
}

+ (void)__wcdb_index_57:(void *)arg1;
+ (void)__wcdb_index_56:(void *)arg1;
+ (void)__wcdb_index_55:(void *)arg1;
+ (void)__wcdb_index_54:(void *)arg1;
+ (void)__wcdb_index_53:(void *)arg1;
+ (void)__wcdb_index_52:(void *)arg1;
+ (void)__wcdb_index_51:(void *)arg1;
+ (void)__wcdb_index_50:(void *)arg1;
+ (void)__wcdb_index_49:(void *)arg1;
+ (void)__wcdb_index_48:(void *)arg1;
+ (void)__wcdb_index_47:(void *)arg1;
+ (void)__wcdb_index_46:(void *)arg1;
+ (void)__wcdb_index_45:(void *)arg1;
+ (void)__wcdb_index_44:(void *)arg1;
+ (void)__wcdb_index_43:(void *)arg1;
+ (void)__wcdb_index_42:(void *)arg1;
+ (void)__wcdb_index_41:(void *)arg1;
+ (void)__wcdb_index_40:(void *)arg1;
+ (void)__wcdb_column_constraint_39:(void *)arg1;
+ (id)swift_resortBuffer;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (const void *)resortBuffer;
+ (id)swift_recCardMediaType;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (const void *)recCardMediaType;
+ (id)swift_recReason;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (const void *)recReason;
+ (id)swift_recRecycleCardType;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (const void *)recRecycleCardType;
+ (id)swift_isValidExpose;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (const void *)isValidExpose;
+ (id)swift_resortNewBoldDigestExposeCountInMainSession;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (const void *)resortNewBoldDigestExposeCountInMainSession;
+ (id)swift_resortNewDigestExposeCountInMainSession;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (const void *)resortNewDigestExposeCountInMainSession;
+ (id)swift_resortNewDigestStrategyInfo;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (const void *)resortNewDigestStrategyInfo;
+ (id)swift_resortNewDigestInfoJson;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (const void *)resortNewDigestInfoJson;
+ (id)swift_isResortNewDigestBold;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (const void *)isResortNewDigestBold;
+ (id)swift_canvasId;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (const void *)canvasId;
+ (id)swift_canvasAdExpiredTimeSec;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (const void *)canvasAdExpiredTimeSec;
+ (id)swift_recCardId;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (const void *)recCardId;
+ (id)swift_exposeMinPosInMainSession;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)exposeMinPosInMainSession;
+ (id)swift_exposeTotalTimeInMainSession;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (const void *)exposeTotalTimeInMainSession;
+ (id)swift_exposeCountInMainSession;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)exposeCountInMainSession;
+ (id)swift_hasResorted;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)hasResorted;
+ (id)swift_rankSessionId;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (const void *)rankSessionId;
+ (id)swift_bExposedInMainSession;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)bExposedInMainSession;
+ (id)swift_bizMsgType;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)bizMsgType;
+ (id)swift_byteBuffer;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)byteBuffer;
+ (id)swift_isBrowsed;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)isBrowsed;
+ (id)swift_isStarContact;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)isStarContact;
+ (id)swift_isExpan;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)isExpan;
+ (id)swift_msgSource;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)msgSource;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)userName;
+ (id)swift_msgIdentify;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)msgIdentify;
+ (id)swift_msgClusterType;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)msgClusterType;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)type;
+ (id)swift_status;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)status;
+ (id)swift_message;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)message;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_msgServerId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)msgServerId;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_msgPredict;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)msgPredict;
+ (id)swift_groupOrderId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)groupOrderId;
+ (id)swift_groupId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)groupId;
+ (id)swift_sequenceId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)sequenceId;
+ (id)swift_msgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)msgId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *resortBuffer; // @synthesize resortBuffer=_resortBuffer;
@property(nonatomic) unsigned int recCardMediaType; // @synthesize recCardMediaType=_recCardMediaType;
@property(retain, nonatomic) NSString *recReason; // @synthesize recReason=_recReason;
@property(nonatomic) unsigned int recRecycleCardType; // @synthesize recRecycleCardType=_recRecycleCardType;
@property(nonatomic) _Bool isValidExpose; // @synthesize isValidExpose=_isValidExpose;
@property(nonatomic) unsigned int resortNewBoldDigestExposeCountInMainSession; // @synthesize resortNewBoldDigestExposeCountInMainSession=_resortNewBoldDigestExposeCountInMainSession;
@property(nonatomic) unsigned int resortNewDigestExposeCountInMainSession; // @synthesize resortNewDigestExposeCountInMainSession=_resortNewDigestExposeCountInMainSession;
@property(retain, nonatomic) NSString *resortNewDigestStrategyInfo; // @synthesize resortNewDigestStrategyInfo=_resortNewDigestStrategyInfo;
@property(retain, nonatomic) NSString *resortNewDigestInfoJson; // @synthesize resortNewDigestInfoJson=_resortNewDigestInfoJson;
@property(nonatomic) _Bool isResortNewDigestBold; // @synthesize isResortNewDigestBold=_isResortNewDigestBold;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(nonatomic) unsigned int canvasAdExpiredTimeSec; // @synthesize canvasAdExpiredTimeSec=_canvasAdExpiredTimeSec;
@property(retain, nonatomic) NSString *recCardId; // @synthesize recCardId=_recCardId;
@property(nonatomic) unsigned int exposeMinPosInMainSession; // @synthesize exposeMinPosInMainSession=_exposeMinPosInMainSession;
@property(nonatomic) unsigned int exposeTotalTimeInMainSession; // @synthesize exposeTotalTimeInMainSession=_exposeTotalTimeInMainSession;
@property(nonatomic) unsigned int exposeCountInMainSession; // @synthesize exposeCountInMainSession=_exposeCountInMainSession;
@property(nonatomic) _Bool hasResorted; // @synthesize hasResorted=_hasResorted;
@property(retain, nonatomic) NSString *rankSessionId; // @synthesize rankSessionId=_rankSessionId;
@property(nonatomic) _Bool bExposedInMainSession; // @synthesize bExposedInMainSession=_bExposedInMainSession;
@property(nonatomic) unsigned int bizMsgType; // @synthesize bizMsgType=_bizMsgType;
@property(retain, nonatomic) NSData *byteBuffer; // @synthesize byteBuffer=_byteBuffer;
@property(nonatomic) _Bool isBrowsed; // @synthesize isBrowsed=_isBrowsed;
@property(nonatomic) _Bool isStarContact; // @synthesize isStarContact=_isStarContact;
@property(nonatomic) _Bool isExpan; // @synthesize isExpan=_isExpan;
@property(retain, nonatomic) NSString *msgSource; // @synthesize msgSource=_msgSource;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *msgIdentify; // @synthesize msgIdentify=_msgIdentify;
@property(nonatomic) unsigned int msgClusterType; // @synthesize msgClusterType=_msgClusterType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId=_msgServerId;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) unsigned int msgPredict; // @synthesize msgPredict=_msgPredict;
@property(nonatomic) unsigned int groupOrderId; // @synthesize groupOrderId=_groupOrderId;
@property(nonatomic) unsigned int groupId; // @synthesize groupId=_groupId;
@property(nonatomic) unsigned long long sequenceId; // @synthesize sequenceId=_sequenceId;
@property(nonatomic) unsigned int msgId; // @synthesize msgId=_msgId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

