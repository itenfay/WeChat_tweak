//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderObjectMonotonicData, NSString;

@interface WCFinderObjectMonotonicData : NSObject
{
    NSString *_tid;
    FinderObjectMonotonicData *_monoData;
}

+ (void)compareDataVersionWithTid:(id)arg1 updateVersion:(id)arg2 localVersion:(id)arg3 monoDataSourceType:(unsigned long long)arg4 resultBlock:(CDUnknownBlockType)arg5;
+ (id)monotonciDataWithDataItem:(id)arg1;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
+ (id)swift_monoData;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)monoData;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderObjectMonotonicData *monoData; // @synthesize monoData=_monoData;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void)compareDataVersionWithUpdateVersion:(id)arg1 localVersion:(id)arg2 monoDataSourceType:(unsigned long long)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)mergeMonoData:(id)arg1 monoDataSourceType:(unsigned long long)arg2;

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

