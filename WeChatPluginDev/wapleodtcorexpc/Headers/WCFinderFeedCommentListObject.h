//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderCommenListArray;

@interface WCFinderFeedCommentListObject : NSObject
{
    NSString *_tid;
    WCFinderCommenListArray *_commentList;
    unsigned long long _cacheTimestamp;
}

+ (void)__wcdb_index_4:(void *)arg1;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_cacheTimestamp;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)cacheTimestamp;
+ (id)swift_commentList;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)commentList;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long cacheTimestamp; // @synthesize cacheTimestamp=_cacheTimestamp;
@property(retain, nonatomic) WCFinderCommenListArray *commentList; // @synthesize commentList=_commentList;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

@end

