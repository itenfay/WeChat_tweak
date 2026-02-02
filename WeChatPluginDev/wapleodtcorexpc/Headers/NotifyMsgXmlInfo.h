//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface NotifyMsgXmlInfo
{
    _Bool _bHadRead;
    _Bool _bLiveEnd;
    _Bool _bMainFrameExposed;
    _Bool _bMainFrameClicked;
    unsigned int _ctrlType;
    unsigned int _deliveryTime;
    unsigned int _createTime;
    NSString *_tipsID;
    unsigned long long _feedID;
    unsigned long long _liveID;
    long long _msgSvrID;
    NSString *_byPassInfo;
    NSString *_noticeID;
}

+ (void)__wcdb_index_14:(void *)arg1;
+ (void)__wcdb_column_constraint_13:(void *)arg1;
+ (id)swift_bMainFrameClicked;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)bMainFrameClicked;
+ (id)swift_bMainFrameExposed;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)bMainFrameExposed;
+ (id)swift_noticeID;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)noticeID;
+ (id)swift_byPassInfo;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)byPassInfo;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_deliveryTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)deliveryTime;
+ (id)swift_ctrlType;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)ctrlType;
+ (id)swift_bLiveEnd;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)bLiveEnd;
+ (id)swift_bHadRead;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)bHadRead;
+ (id)swift_msgSvrID;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)msgSvrID;
+ (id)swift_liveID;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)liveID;
+ (id)swift_feedID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)feedID;
+ (id)swift_tipsID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tipsID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool bMainFrameClicked; // @synthesize bMainFrameClicked=_bMainFrameClicked;
@property(nonatomic) _Bool bMainFrameExposed; // @synthesize bMainFrameExposed=_bMainFrameExposed;
@property(retain, nonatomic) NSString *noticeID; // @synthesize noticeID=_noticeID;
@property(retain, nonatomic) NSString *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int deliveryTime; // @synthesize deliveryTime=_deliveryTime;
@property(nonatomic) unsigned int ctrlType; // @synthesize ctrlType=_ctrlType;
@property(nonatomic) _Bool bLiveEnd; // @synthesize bLiveEnd=_bLiveEnd;
@property(nonatomic) _Bool bHadRead; // @synthesize bHadRead=_bHadRead;
@property(nonatomic) long long msgSvrID; // @synthesize msgSvrID=_msgSvrID;
@property(nonatomic) unsigned long long liveID; // @synthesize liveID=_liveID;
@property(nonatomic) unsigned long long feedID; // @synthesize feedID=_feedID;
@property(retain, nonatomic) NSString *tipsID; // @synthesize tipsID=_tipsID;
- (id)initWithNotifyItem:(id)arg1 msgWrap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

