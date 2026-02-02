//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderAuthorPostingFeedModel : NSObject
{
    NSString *_tid;
    NSString *_authorUsername;
    unsigned long long _createTime;
}

+ (void)__wcdb_index_4:(void *)arg1;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_authorUsername;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)authorUsername;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *authorUsername; // @synthesize authorUsername=_authorUsername;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;

@end

