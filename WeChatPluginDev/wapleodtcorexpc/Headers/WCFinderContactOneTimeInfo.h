//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderContactOneTimeInfo : NSObject
{
    int _commentScene;
    NSString *_username;
    unsigned long long _oneTimeFlag;
    unsigned long long _entryScene;
    unsigned long long _cacheTime;
    unsigned long long _userFlag;
}

+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (id)swift_userFlag;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)userFlag;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_commentScene;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)commentScene;
+ (id)swift_entryScene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)entryScene;
+ (id)swift_oneTimeFlag;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)oneTimeFlag;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long userFlag; // @synthesize userFlag=_userFlag;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(nonatomic) unsigned long long oneTimeFlag; // @synthesize oneTimeFlag=_oneTimeFlag;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)description;

@end

