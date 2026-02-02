//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMembershipFirstPageCacheInfo : NSObject
{
    NSString *_tid;
    NSString *_username;
    unsigned long long _pageType;
    unsigned long long _cacheIndex;
    NSString *_collectionTopicId;
}

+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (id)swift_collectionTopicId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)collectionTopicId;
+ (id)swift_cacheIndex;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)cacheIndex;
+ (id)swift_pageType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)pageType;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)username;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *collectionTopicId; // @synthesize collectionTopicId=_collectionTopicId;
@property(nonatomic) unsigned long long cacheIndex; // @synthesize cacheIndex=_cacheIndex;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

@end

