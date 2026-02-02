//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderShareLiveInfo : NSObject
{
    _Bool _disableShareCardExpose;
    unsigned int _anchorLiveStatus;
    unsigned int _sharePageStatus;
    unsigned int _chargeFlag;
    unsigned int _replayStatus;
    unsigned int _liveFlag;
    unsigned int _audiencePrivilege;
    unsigned int _liveMode;
    unsigned int _liveSubMode;
    NSString *_tid;
    NSString *_liveId;
    unsigned long long _liveStatus;
    unsigned long long _cacheTimestamp;
    unsigned long long _audienceMode;
    NSString *_streamUrl;
    unsigned long long _refReplayObjectId;
    unsigned long long _replayControlFlag;
    NSString *_exportId;
}

+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_table_constraint_20:(void *)arg1;
+ (void)__wcdb_table_constraint_19:(void *)arg1;
+ (id)swift_disableShareCardExpose;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)disableShareCardExpose;
+ (id)swift_sharePageStatus;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)sharePageStatus;
+ (id)swift_anchorLiveStatus;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)anchorLiveStatus;
+ (id)swift_liveSubMode;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)liveSubMode;
+ (id)swift_liveMode;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)liveMode;
+ (id)swift_replayControlFlag;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)replayControlFlag;
+ (id)swift_refReplayObjectId;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)refReplayObjectId;
+ (id)swift_audiencePrivilege;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)audiencePrivilege;
+ (id)swift_liveFlag;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)liveFlag;
+ (id)swift_exportId;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)exportId;
+ (id)swift_replayStatus;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)replayStatus;
+ (id)swift_chargeFlag;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)chargeFlag;
+ (id)swift_liveVrType;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)liveVrType;
+ (id)swift_streamUrl;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)streamUrl;
+ (id)swift_audienceMode;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)audienceMode;
+ (id)swift_cacheTimestamp;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)cacheTimestamp;
+ (id)swift_liveStatus;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)liveStatus;
+ (id)swift_liveId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)liveId;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableShareCardExpose; // @synthesize disableShareCardExpose=_disableShareCardExpose;
@property(nonatomic) unsigned int liveSubMode; // @synthesize liveSubMode=_liveSubMode;
@property(nonatomic) unsigned int liveMode; // @synthesize liveMode=_liveMode;
@property(copy, nonatomic) NSString *exportId; // @synthesize exportId=_exportId;
@property(nonatomic) unsigned int audiencePrivilege; // @synthesize audiencePrivilege=_audiencePrivilege;
@property(nonatomic) unsigned int liveFlag; // @synthesize liveFlag=_liveFlag;
@property(nonatomic) unsigned long long replayControlFlag; // @synthesize replayControlFlag=_replayControlFlag;
@property(nonatomic) unsigned long long refReplayObjectId; // @synthesize refReplayObjectId=_refReplayObjectId;
@property(nonatomic) unsigned int replayStatus; // @synthesize replayStatus=_replayStatus;
@property(nonatomic) unsigned int chargeFlag; // @synthesize chargeFlag=_chargeFlag;
@property(retain, nonatomic) NSString *streamUrl; // @synthesize streamUrl=_streamUrl;
@property(nonatomic) unsigned long long audienceMode; // @synthesize audienceMode=_audienceMode;
@property(nonatomic) unsigned long long cacheTimestamp; // @synthesize cacheTimestamp=_cacheTimestamp;
@property(nonatomic) unsigned int sharePageStatus; // @synthesize sharePageStatus=_sharePageStatus;
@property(nonatomic) unsigned int anchorLiveStatus; // @synthesize anchorLiveStatus=_anchorLiveStatus;
@property(nonatomic) unsigned long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (unsigned int)liveVrType;
- (void)setLiveVrType:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
- (void)updateWithDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1;

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

