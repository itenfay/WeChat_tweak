//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WADBPluginCodeUsageLruInfo : NSObject
{
    unsigned int _hit;
    unsigned int _updateTime;
    NSString *_appID;
    unsigned long long _version;
}

+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_hit;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)hit;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)version;
+ (id)swift_appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)appID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int hit; // @synthesize hit=_hit;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;

@end

