//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMAppRunningInfo : NSObject
{
    _Bool _vacuumClean;
    unsigned long long _launchTime;
    unsigned long long _currentTime;
}

+ (void)__wcdb_column_constraint_38:(void *)arg1;
+ (id)swift_vacuumClean;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (const void *)vacuumClean;
+ (id)swift_currentTime;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (const void *)currentTime;
+ (id)swift_launchTime;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (const void *)launchTime;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
@property(nonatomic) _Bool vacuumClean; // @synthesize vacuumClean=_vacuumClean;
@property(nonatomic) unsigned long long currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) unsigned long long launchTime; // @synthesize launchTime=_launchTime;

@end

