//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedInfoSubTidArray;

@interface WCFinderUserPageCacheModel : NSObject
{
    NSString *_finderUsername;
    WCFinderFeedInfoSubTidArray *_firstPageTidArray;
}

+ (void)__wcdb_column_constraint_2:(void *)arg1;
+ (id)swift_firstPageTidArray;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)firstPageTidArray;
+ (id)swift_finderUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)finderUsername;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedInfoSubTidArray *firstPageTidArray; // @synthesize firstPageTidArray=_firstPageTidArray;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;

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

