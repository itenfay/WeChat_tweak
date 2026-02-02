//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderDataItemMutableArray;

@interface WCFinderMPInterestData : NSObject
{
    NSString *_mpSessionId;
    NSString *_finderSessionId;
    WCFinderDataItemMutableArray *_dataItemArray;
    unsigned long long _cacheTime;
    unsigned long long _expiredTime;
}

+ (void)__wcdb_index_6:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (id)swift_expiredTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)expiredTime;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_dataItemArray;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)dataItemArray;
+ (id)swift_finderSessionId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)finderSessionId;
+ (id)swift_mpSessionId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)mpSessionId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_dataItemArray;
+ (void)PBArrayAdd_finderSessionId;
+ (void)PBArrayAdd_mpSessionId;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(retain, nonatomic) WCFinderDataItemMutableArray *dataItemArray; // @synthesize dataItemArray=_dataItemArray;
@property(copy, nonatomic) NSString *finderSessionId; // @synthesize finderSessionId=_finderSessionId;
@property(copy, nonatomic) NSString *mpSessionId; // @synthesize mpSessionId=_mpSessionId;
@property(readonly, copy) NSString *description;
- (id)topicWording;
- (id)firstDataItemTid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

