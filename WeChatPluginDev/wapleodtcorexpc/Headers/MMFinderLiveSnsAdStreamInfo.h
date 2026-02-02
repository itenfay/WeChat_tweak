//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderLiveInfo;

@interface MMFinderLiveSnsAdStreamInfo : NSObject
{
    _Bool _previewCtrlInfoEnable;
    unsigned int _previewCtrlInfoEffectSeconds;
    unsigned int _refreshIntervalInSecond;
    NSString *_liveId;
    NSString *_finderUsername;
    NSString *_exportId;
    NSString *_nonceId;
    unsigned long long _cacheTimestamp;
    WCFinderLiveInfo *_liveInfo;
    NSString *_tid;
    NSString *_sessionBuffer;
}

+ (void)__wcdb_index_14:(void *)arg1;
+ (void)__wcdb_index_13:(void *)arg1;
+ (void)__wcdb_table_constraint_12:(void *)arg1;
+ (void)__wcdb_table_constraint_11:(void *)arg1;
+ (id)swift_refreshIntervalInSecond;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)refreshIntervalInSecond;
+ (id)swift_previewCtrlInfoEffectSeconds;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)previewCtrlInfoEffectSeconds;
+ (id)swift_previewCtrlInfoEnable;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)previewCtrlInfoEnable;
+ (id)swift_sessionBuffer;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)sessionBuffer;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)tid;
+ (id)swift_liveInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)liveInfo;
+ (id)swift_cacheTimestamp;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)cacheTimestamp;
+ (id)swift_nonceId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)nonceId;
+ (id)swift_exportId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)exportId;
+ (id)swift_finderUsername;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)finderUsername;
+ (id)swift_liveId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)liveId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int refreshIntervalInSecond; // @synthesize refreshIntervalInSecond=_refreshIntervalInSecond;
@property(nonatomic) unsigned int previewCtrlInfoEffectSeconds; // @synthesize previewCtrlInfoEffectSeconds=_previewCtrlInfoEffectSeconds;
@property(nonatomic) _Bool previewCtrlInfoEnable; // @synthesize previewCtrlInfoEnable=_previewCtrlInfoEnable;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) WCFinderLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(nonatomic) unsigned long long cacheTimestamp; // @synthesize cacheTimestamp=_cacheTimestamp;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(copy, nonatomic) NSString *exportId; // @synthesize exportId=_exportId;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
- (id)toDataItem;

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

