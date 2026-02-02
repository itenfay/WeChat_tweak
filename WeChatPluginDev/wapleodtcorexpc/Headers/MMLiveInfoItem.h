//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGroupLiveInfoItem, NSData, NSString, WCFinderLiveShareItem;

@interface MMLiveInfoItem
{
    _Bool useDefaultLiveName;
    unsigned int createTime;
    unsigned int endTime;
    unsigned int status;
    unsigned int _barStatus;
    unsigned int _liveType;
    long long liveId;
    NSString *liveName;
    NSString *roomId;
    NSString *anchor;
    long long timeId;
    NSData *_liveExtraData;
}

+ (id)createItemWithShareLiveMsg:(id)arg1;
+ (id)createItemWithLiveInfo:(id)arg1 roomId:(id)arg2;
+ (void)__wcdb_index_17:(void *)arg1;
+ (void)__wcdb_index_16:(void *)arg1;
+ (void)__wcdb_index_15:(void *)arg1;
+ (void)__wcdb_index_14:(void *)arg1;
+ (void)__wcdb_index_13:(void *)arg1;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (id)swift_liveExtraData;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)liveExtraData;
+ (id)swift_liveType;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)liveType;
+ (id)swift_useDefaultLiveName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)useDefaultLiveName;
+ (id)swift_barStatus;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)barStatus;
+ (id)swift_timeId;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)timeId;
+ (id)swift_anchor;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)anchor;
+ (id)swift_status;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)status;
+ (id)swift_endTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)endTime;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_roomId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)roomId;
+ (id)swift_liveName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)liveName;
+ (id)swift_liveId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)liveId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *liveExtraData; // @synthesize liveExtraData=_liveExtraData;
@property(nonatomic) unsigned int liveType; // @synthesize liveType=_liveType;
@property(nonatomic) unsigned int barStatus; // @synthesize barStatus=_barStatus;
@property(nonatomic) _Bool useDefaultLiveName; // @synthesize useDefaultLiveName;
@property(nonatomic) long long timeId; // @synthesize timeId;
@property(retain, nonatomic) NSString *anchor; // @synthesize anchor;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId;
@property(retain, nonatomic) NSString *liveName; // @synthesize liveName;
@property(nonatomic) long long liveId; // @synthesize liveId;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isGroupLive;
@property(readonly, nonatomic) _Bool isFinderLive;
@property(readonly, nonatomic) MMGroupLiveInfoItem *groupLiveInfoItem;
@property(readonly, nonatomic) WCFinderLiveShareItem *finderLiveShareItem;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

