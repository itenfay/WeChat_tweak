//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMGroupLiveInfoItem
{
    _Bool enableComment;
    _Bool enableApplyLiveMic;
    _Bool enableLiveReplay;
    _Bool useDefaultLiveName;
    unsigned int createTime;
    unsigned int endTime;
    unsigned int status;
    unsigned int onlineCnt;
    unsigned int messageCnt;
    unsigned int likeCnt;
    unsigned int _barStatus;
    long long liveId;
    NSString *liveName;
    NSString *roomId;
    NSString *replayUrl;
    NSString *anchor;
    long long timeId;
    NSString *sdkUserId;
    NSString *createSdkUserId;
    unsigned long long chatroomliveExtInfoFlag;
}

+ (id)createItemWithShareLiveMsg:(id)arg1;
+ (id)createItemWithLiveInfo:(id)arg1 roomId:(id)arg2;
+ (void)__wcdb_index_25:(void *)arg1;
+ (void)__wcdb_index_24:(void *)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (id)swift_chatroomliveExtInfoFlag;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)chatroomliveExtInfoFlag;
+ (id)swift_useDefaultLiveName;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)useDefaultLiveName;
+ (id)swift_barStatus;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)barStatus;
+ (id)swift_createSdkUserId;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)createSdkUserId;
+ (id)swift_sdkUserId;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)sdkUserId;
+ (id)swift_timeId;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)timeId;
+ (id)swift_anchor;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)anchor;
+ (id)swift_enableLiveReplay;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)enableLiveReplay;
+ (id)swift_enableApplyLiveMic;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)enableApplyLiveMic;
+ (id)swift_enableComment;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)enableComment;
+ (id)swift_replayUrl;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)replayUrl;
+ (id)swift_likeCnt;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)likeCnt;
+ (id)swift_messageCnt;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)messageCnt;
+ (id)swift_onlineCnt;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)onlineCnt;
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
+ (void)initialize;
+ (void)PBArrayAdd_chatroomliveExtInfoFlag;
+ (void)PBArrayAdd_useDefaultLiveName;
+ (void)PBArrayAdd_createSdkUserId;
+ (void)PBArrayAdd_sdkUserId;
+ (void)PBArrayAdd_timeId;
+ (void)PBArrayAdd_anchor;
+ (void)PBArrayAdd_enableLiveReplay;
+ (void)PBArrayAdd_enableApplyLiveMic;
+ (void)PBArrayAdd_enableComment;
+ (void)PBArrayAdd_replayUrl;
+ (void)PBArrayAdd_likeCnt;
+ (void)PBArrayAdd_messageCnt;
+ (void)PBArrayAdd_onlineCnt;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_roomId;
+ (void)PBArrayAdd_liveName;
+ (void)PBArrayAdd_liveId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int barStatus; // @synthesize barStatus=_barStatus;
@property(nonatomic) unsigned long long chatroomliveExtInfoFlag; // @synthesize chatroomliveExtInfoFlag;
@property(nonatomic) _Bool useDefaultLiveName; // @synthesize useDefaultLiveName;
@property(retain, nonatomic) NSString *createSdkUserId; // @synthesize createSdkUserId;
@property(retain, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId;
@property(nonatomic) long long timeId; // @synthesize timeId;
@property(retain, nonatomic) NSString *anchor; // @synthesize anchor;
@property(nonatomic) _Bool enableLiveReplay; // @synthesize enableLiveReplay;
@property(nonatomic) _Bool enableApplyLiveMic; // @synthesize enableApplyLiveMic;
@property(nonatomic) _Bool enableComment; // @synthesize enableComment;
@property(retain, nonatomic) NSString *replayUrl; // @synthesize replayUrl;
@property(nonatomic) unsigned int likeCnt; // @synthesize likeCnt;
@property(nonatomic) unsigned int messageCnt; // @synthesize messageCnt;
@property(nonatomic) unsigned int onlineCnt; // @synthesize onlineCnt;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId;
@property(retain, nonatomic) NSString *liveName; // @synthesize liveName;
@property(nonatomic) long long liveId; // @synthesize liveId;
@property(readonly, copy) NSString *description;
- (id)toLiveInfo;
- (void)copyFromLiveInfo:(id)arg1 roomId:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)getPBPropertyTable;

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

