//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedLikeListInfoArray;

@interface WCFinderFeedLikeListObject : NSObject
{
    NSString *_tid;
    double _cacheTime;
    WCFinderFeedLikeListInfoArray *_likeInfoFirstPageArray;
}

+ (void)__wcdb_index_4:(void *)arg1;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_likeInfoFirstPageArray;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)likeInfoFirstPageArray;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedLikeListInfoArray *likeInfoFirstPageArray; // @synthesize likeInfoFirstPageArray=_likeInfoFirstPageArray;
@property(nonatomic) double cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

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

