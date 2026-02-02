//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderBrandMapInfo : NSObject
{
    NSString *_finderUsername;
    NSString *_bizUsername;
    unsigned long long _cacheTime;
}

+ (void)__wcdb_index_5:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_bizUsername;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)bizUsername;
+ (id)swift_finderUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)finderUsername;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;

@end

