//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMegaVideoFirstPageCacheInfo : NSObject
{
    NSString *_videoId;
    NSString *_username;
    unsigned long long _pageType;
    unsigned long long _cacheIndex;
}

+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (id)swift_cacheIndex;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)cacheIndex;
+ (id)swift_pageType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)pageType;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)username;
+ (id)swift_videoId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)videoId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long cacheIndex; // @synthesize cacheIndex=_cacheIndex;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;

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

