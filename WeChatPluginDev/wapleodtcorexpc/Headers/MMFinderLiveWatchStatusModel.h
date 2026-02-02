//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveWatchStatusModel : NSObject
{
    unsigned long long _liveId;
    unsigned long long _readAdTimestamp;
    NSString *_adId;
}

+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (void)__wcdb_index_5:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_table_constraint_3:(void *)arg1;
+ (id)swift_adId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)adId;
+ (id)swift_readAdTimestamp;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)readAdTimestamp;
+ (id)swift_liveId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)liveId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(nonatomic) unsigned long long readAdTimestamp; // @synthesize readAdTimestamp=_readAdTimestamp;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;

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

